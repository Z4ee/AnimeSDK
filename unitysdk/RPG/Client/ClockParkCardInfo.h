#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKCARDINFO_ADDCARD_OFFSET UNITYSDK_OFFSET(0x1BC097D0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BC09730)
#define RPG_CLIENT_CLOCKPARKCARDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC09C50)
#define RPG_CLIENT_CLOCKPARKCARDINFO_GET_CARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1BC09F80)
#define RPG_CLIENT_CLOCKPARKCARDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1BC09450)
#define RPG_CLIENT_CLOCKPARKCARDINFO_ISALLCARDFILLEDWITHDICE_OFFSET UNITYSDK_OFFSET(0x1BC09520)
#define RPG_CLIENT_CLOCKPARKCARDINFO_REFRESHCARDACTIONEFFECT_OFFSET UNITYSDK_OFFSET(0x1BC09CF0)
#define RPG_CLIENT_CLOCKPARKCARDINFO_SET_CARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x1BC09F90)
#define RPG_CLIENT_CLOCKPARKCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC09FA0)
#define RPG_CLIENT_CLOCKPARKCARDINFO__ONCARDITEMDICEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x1BC09F30)
#define RPG_CLIENT_CLOCKPARKCARDINFO__REFRESHCARDITEMACTIONEFFECTS_OFFSET UNITYSDK_OFFSET(0x1BC09EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCardInfo_TypeDefinitionIndex = 61580;

	class ClockParkCardInfo : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkInstance* _OwnerInstance; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* _CardItemList_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ClockParkInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_INIT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllCardFilledWithDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_ISALLCARDFILLEDWITHDICE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_CLEAR_OFFSET))(this);
		}

		::System::Void AddCard(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_ADDCARD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshCardActionEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_REFRESHCARDACTIONEFFECT_OFFSET))(this);
		}

		::System::Void _OnCardItemDiceDataRefresh(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__ONCARDITEMDICEDATAREFRESH_OFFSET))(this, a1);
		}

		::System::Void _RefreshCardItemActionEffects(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO__REFRESHCARDITEMACTIONEFFECTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* get_CardItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_GET_CARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_CardItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkCardItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDINFO_SET_CARDITEMLIST_OFFSET))(this, a1);
		}
	};
}
