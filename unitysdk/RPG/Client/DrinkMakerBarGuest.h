#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6DF0D90298F36A2E_1;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class DrinkMakerGuestRow; }
namespace RPG::GameCore { class DrinkMakerTagRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x94ABAA0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GETUNLOCKEDFAVORTAGLIST_OFFSET UNITYSDK_OFFSET(0x94ABE20)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0x94AC3B0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FAITH_OFFSET UNITYSDK_OFFSET(0x94ABCB0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FINISHQUEST_OFFSET UNITYSDK_OFFSET(0x94AC400)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTID_OFFSET UNITYSDK_OFFSET(0x94AC370)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTROW_OFFSET UNITYSDK_OFFSET(0x94AC2C0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0x94AC3D0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0x94AC510)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x94AC390)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0x94AC3E0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_ISFINISH_OFFSET UNITYSDK_OFFSET(0x94AC180)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0x94AC3C0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_GUESTID_OFFSET UNITYSDK_OFFSET(0x94AC380)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0x94AC520)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x94AC3A0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0x94AC3F0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_TRYGETFINISHREWARD_OFFSET UNITYSDK_OFFSET(0x94AC320)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x94ABBB0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x94ABD80)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEMAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x94ABDD0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEREWARD_OFFSET UNITYSDK_OFFSET(0x94ABD00)
#define RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x94ABB50)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarGuest_TypeDefinitionIndex = 51641;

	class DrinkMakerBarGuest : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockTags_k__BackingField; // 0x10
		::Class_1_6DF0D90298F36A2E_1* _ServerData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FinishReward; // 0x20
		::System::UInt32 _LastFaith_k__BackingField; // 0x28
		::System::UInt32 _GuestID_k__BackingField; // 0x2C
		::System::UInt32 _DayCount_k__BackingField; // 0x30
		::System::UInt32 _MaxDayCount_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarGuest* Create(::System::UInt32 guestID)
		{
			return ((::RPG::Client::DrinkMakerBarGuest*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET))(guestID);
		}

		::System::Void UpdateData(::Class_1_6DF0D90298F36A2E_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6DF0D90298F36A2E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET))(this, rsp);
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
