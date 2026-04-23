#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43_4;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace RPG::GameCore { class DrinkMakerTagRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET UNITYSDK_OFFSET(0xA17E5C0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GETUNLOCKEDFAVORTAGLIST_OFFSET UNITYSDK_OFFSET(0xA17E940)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA17EED0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FAITH_OFFSET UNITYSDK_OFFSET(0xA17E7D0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FINISHQUEST_OFFSET UNITYSDK_OFFSET(0xA17EF20)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTID_OFFSET UNITYSDK_OFFSET(0xA17EE90)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTROW_OFFSET UNITYSDK_OFFSET(0xA17EDE0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xA17EEF0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0xA17F030)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA17EEB0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0xA17EF00)
#define RPG_CLIENT_DRINKMAKERBARGUEST_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA17ECA0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA17EEE0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_GUESTID_OFFSET UNITYSDK_OFFSET(0xA17EEA0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0xA17F040)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA17EEC0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0xA17EF10)
#define RPG_CLIENT_DRINKMAKERBARGUEST_TRYGETFINISHREWARD_OFFSET UNITYSDK_OFFSET(0xA17EE40)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xA17E6D0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA17E8A0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEMAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xA17E8F0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEREWARD_OFFSET UNITYSDK_OFFSET(0xA17E820)
#define RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xA17E670)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarGuest_TypeDefinitionIndex = 58589;

	class DrinkMakerBarGuest : public ::System::Object
	{
	public:
		::Class_1_766E1CF11E204F43_4* _ServerData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FinishReward; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockTags_k__BackingField; // 0x20
		::System::UInt32 _LastFaith_k__BackingField; // 0x28
		::System::UInt32 _DayCount_k__BackingField; // 0x2C
		::System::UInt32 _MaxDayCount_k__BackingField; // 0x30
		::System::UInt32 _GuestID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarGuest* Create(::System::UInt32 guestID)
		{
			return ((::RPG::Client::DrinkMakerBarGuest*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET))(guestID);
		}

		::System::Void UpdateData(::Class_1_766E1CF11E204F43_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET))(this, rsp);
		}

		::System::Void UpdateReward(::Proto::ItemList* reward)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEREWARD_OFFSET))(this, reward);
		}

		::System::Void UpdateDayCount(::System::UInt32 dayCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDAYCOUNT_OFFSET))(this, dayCount);
		}

		::System::Void UpdateMaxDayCount(::System::UInt32 maxDayCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEMAXDAYCOUNT_OFFSET))(this, maxDayCount);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerTagRow*>* GetUnlockedFavorTagList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerTagRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GETUNLOCKEDFAVORTAGLIST_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_ISFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* TryGetFinishReward()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_TRYGETFINISHREWARD_OFFSET))(this);
		}

		::System::UInt32 get_GuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTID_OFFSET))(this);
		}

		::System::Void set_GuestID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_GUESTID_OFFSET))(this, value);
		}

		::System::UInt32 get_Faith()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_FAITH_OFFSET))(this);
		}

		::RPG::GameCore::DrinkMakerGuestRow* get_GuestRow()
		{
			return ((::RPG::GameCore::DrinkMakerGuestRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTROW_OFFSET))(this);
		}

		::System::UInt32 get_MaxDayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_MAXDAYCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxDayCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_MAXDAYCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_DayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_DAYCOUNT_OFFSET))(this);
		}

		::System::Void set_DayCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_DAYCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_ISLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockTags()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_UNLOCKTAGS_OFFSET))(this);
		}

		::System::Void set_UnlockTags(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_UNLOCKTAGS_OFFSET))(this, value);
		}

		::RPG::Client::QuestData* get_FinishQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_FINISHQUEST_OFFSET))(this);
		}

		::System::UInt32 get_LastFaith()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_LASTFAITH_OFFSET))(this);
		}

		::System::Void set_LastFaith(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_LASTFAITH_OFFSET))(this, value);
		}
	};
}
