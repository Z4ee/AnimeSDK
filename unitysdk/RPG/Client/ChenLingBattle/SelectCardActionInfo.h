#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/ActionInfo.h"

class Class_1_55842303271EB9BB;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_GET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x933DD80)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_SET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x933DD90)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9323070)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardActionInfo_TypeDefinitionIndex = 62154;

	class SelectCardActionInfo : public ::RPG::Client::ChenLingBattle::ActionInfo
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _SelectableCards_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_55842303271EB9BB* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_55842303271EB9BB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO__CTOR_OFFSET))(this, action);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_SelectableCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_GET_SELECTABLECARDS_OFFSET))(this);
		}

		::System::Void set_SelectableCards(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_SET_SELECTABLECARDS_OFFSET))(this, value);
		}
	};
}
