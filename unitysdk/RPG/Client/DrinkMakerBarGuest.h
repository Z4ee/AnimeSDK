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

#define RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET UNITYSDK_OFFSET(0xB7FDDE0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GETUNLOCKEDFAVORTAGLIST_OFFSET UNITYSDK_OFFSET(0xB7FE120)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0xB7FE710)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FAITH_OFFSET UNITYSDK_OFFSET(0xB7FDFB0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_FINISHQUEST_OFFSET UNITYSDK_OFFSET(0xB7FE760)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTID_OFFSET UNITYSDK_OFFSET(0xB7FE6D0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_GUESTROW_OFFSET UNITYSDK_OFFSET(0xB7FE620)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xB7FE730)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0xB7FE870)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xB7FE6F0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_GET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0xB7FE740)
#define RPG_CLIENT_DRINKMAKERBARGUEST_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB7FE4E0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_DAYCOUNT_OFFSET UNITYSDK_OFFSET(0xB7FE720)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_GUESTID_OFFSET UNITYSDK_OFFSET(0xB7FE6E0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_LASTFAITH_OFFSET UNITYSDK_OFFSET(0xB7FE880)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_MAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xB7FE700)
#define RPG_CLIENT_DRINKMAKERBARGUEST_SET_UNLOCKTAGS_OFFSET UNITYSDK_OFFSET(0xB7FE750)
#define RPG_CLIENT_DRINKMAKERBARGUEST_TRYGETFINISHREWARD_OFFSET UNITYSDK_OFFSET(0xB7FE680)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xB7FDEF0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xB7FE080)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEMAXDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xB7FE0D0)
#define RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEREWARD_OFFSET UNITYSDK_OFFSET(0xB7FE000)
#define RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xB7FDE90)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBarGuest_TypeDefinitionIndex = 59519;

	class DrinkMakerBarGuest : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockTags_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FinishReward; // 0x18
		::Class_1_766E1CF11E204F43_4* _ServerData; // 0x20
		::System::UInt32 _DayCount_k__BackingField; // 0x28
		::System::UInt32 _MaxDayCount_k__BackingField; // 0x2C
		::System::UInt32 _GuestID_k__BackingField; // 0x30
		::System::UInt32 _LastFaith_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DrinkMakerBarGuest* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarGuest*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_CREATE_OFFSET))(a1);
		}

		::System::Void UpdateData(::Class_1_766E1CF11E204F43_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEREWARD_OFFSET))(this, a1);
		}

		::System::Void UpdateDayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEDAYCOUNT_OFFSET))(this, a1);
		}

		::System::Void UpdateMaxDayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_UPDATEMAXDAYCOUNT_OFFSET))(this, a1);
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

		::System::Void set_GuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_GUESTID_OFFSET))(this, a1);
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

		::System::Void set_MaxDayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_MAXDAYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_DayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_DAYCOUNT_OFFSET))(this);
		}

		::System::Void set_DayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_DAYCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_ISLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockTags()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_UNLOCKTAGS_OFFSET))(this);
		}

		::System::Void set_UnlockTags(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_UNLOCKTAGS_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* get_FinishQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_FINISHQUEST_OFFSET))(this);
		}

		::System::UInt32 get_LastFaith()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_GET_LASTFAITH_OFFSET))(this);
		}

		::System::Void set_LastFaith(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARGUEST_SET_LASTFAITH_OFFSET))(this, a1);
		}
	};
}
