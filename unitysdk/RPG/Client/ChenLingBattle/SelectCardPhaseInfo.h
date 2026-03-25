#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_14;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x933FB30)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x933FB10)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x933FB40)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x933FB20)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93233A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhaseInfo_TypeDefinitionIndex = 62155;

	class SelectCardPhaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _SelectableCards_k__BackingField; // 0x10
		::System::UInt32 _RefreshCost_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_735612C94F558EAE_14* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO__CTOR_OFFSET))(this, info);
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
