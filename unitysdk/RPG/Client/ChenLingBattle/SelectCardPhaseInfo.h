#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_21;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1AFDF810)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x1AFDF7F0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1AFDF820)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x1AFDF800)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDF250)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhaseInfo_TypeDefinitionIndex = 72479;

	class SelectCardPhaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _SelectableCards_k__BackingField; // 0x10
		::System::UInt32 _RefreshCost_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_45BB92167AED63A0_21* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_SelectableCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_SELECTABLECARDS_OFFSET))(this);
		}

		::System::Void set_SelectableCards(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_SELECTABLECARDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASEINFO_SET_REFRESHCOST_OFFSET))(this, a1);
		}
	};
}
