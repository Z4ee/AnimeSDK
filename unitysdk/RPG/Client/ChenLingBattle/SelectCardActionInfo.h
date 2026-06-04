#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/ActionInfo.h"

class Class_1_ECB0576E84484CA9;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_GET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0xB5C56D0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_SET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0xB5C56E0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C5380)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardActionInfo_TypeDefinitionIndex = 70965;

	class SelectCardActionInfo : public ::RPG::Client::ChenLingBattle::ActionInfo
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _SelectableCards_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_ECB0576E84484CA9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECB0576E84484CA9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_SelectableCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_GET_SELECTABLECARDS_OFFSET))(this);
		}

		::System::Void set_SelectableCards(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_SET_SELECTABLECARDS_OFFSET))(this, a1);
		}
	};
}
