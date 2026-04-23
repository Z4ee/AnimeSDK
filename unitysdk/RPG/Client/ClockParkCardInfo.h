#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKCARDINFO_ADDCARD_OFFSET UNITYSDK_OFFSET(0xA098530)
#define RPG_CLIENT_CLOCKPARKCARDINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0984C0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA098830)
#define RPG_CLIENT_CLOCKPARKCARDINFO_GET_CARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xA098B60)
#define RPG_CLIENT_CLOCKPARKCARDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA098200)
#define RPG_CLIENT_CLOCKPARKCARDINFO_ISALLCARDFILLEDWITHDICE_OFFSET UNITYSDK_OFFSET(0xA0982C0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_REFRESHCARDACTIONEFFECT_OFFSET UNITYSDK_OFFSET(0xA0988B0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_SET_CARDITEMLIST_OFFSET UNITYSDK_OFFSET(0xA098B70)
#define RPG_CLIENT_CLOCKPARKCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA098B80)
#define RPG_CLIENT_CLOCKPARKCARDINFO__ONCARDITEMDICEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xA098B10)
#define RPG_CLIENT_CLOCKPARKCARDINFO__REFRESHCARDITEMACTIONEFFECTS_OFFSET UNITYSDK_OFFSET(0xA098A90)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCardInfo_TypeDefinitionIndex = 56703;

	class ClockParkCardInfo : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkInstance* _OwnerInstance; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* _CardItemList_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ClockParkInstance* ownerInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_INIT_OFFSET))(this, ownerInstance);
		}

		::System::Boolean IsAllCardFilledWithDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_ISALLCARDFILLEDWITHDICE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_CLEAR_OFFSET))(this);
		}

		::System::Void AddCard(::System::UInt32 cardID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* diceItems, ::System::UInt32 cardValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_ADDCARD_OFFSET))(this, cardID, diceItems, cardValue);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshCardActionEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_REFRESHCARDACTIONEFFECT_OFFSET))(this);
		}

		::System::Void _OnCardItemDiceDataRefresh(::RPG::Client::ClockParkCardItem* cardItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__ONCARDITEMDICEDATAREFRESH_OFFSET))(this, cardItem);
		}

		::System::Void _RefreshCardItemActionEffects(::RPG::Client::ClockParkCardItem* cardItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__REFRESHCARDITEMACTIONEFFECTS_OFFSET))(this, cardItem);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* get_CardItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_GET_CARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_CardItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_SET_CARDITEMLIST_OFFSET))(this, value);
		}
	};
}
