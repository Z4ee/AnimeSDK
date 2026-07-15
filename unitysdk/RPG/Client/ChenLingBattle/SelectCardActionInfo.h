#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/ActionInfo.h"

class Class_1_8271AFF79E02658D;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_GET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x1AFDD380)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO_SET_SELECTABLECARDS_OFFSET UNITYSDK_OFFSET(0x1AFDD390)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDCEF0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardActionInfo_TypeDefinitionIndex = 72478;

	class SelectCardActionInfo : public ::RPG::Client::ChenLingBattle::ActionInfo
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _SelectableCards_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTIONINFO__CTOR_OFFSET))(this, a1);
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
