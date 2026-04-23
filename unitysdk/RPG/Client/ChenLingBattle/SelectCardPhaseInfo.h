#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_17;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x9FAD690)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x9FAD670)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x9FAD6A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x9FAD680)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F90A60)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhaseInfo_TypeDefinitionIndex = 70154;

	class SelectCardPhaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _SelectableCards_k__BackingField; // 0x10
		::System::UInt32 _RefreshCost_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_45BB92167AED63A0_17* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO__CTOR_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_SelectableCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_SELECTABLECARDS_OFFSET))(this);
		}

		::System::Void set_SelectableCards(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_SELECTABLECARDS_OFFSET))(this, value);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_REFRESHCOST_OFFSET))(this, value);
		}
	};
}
