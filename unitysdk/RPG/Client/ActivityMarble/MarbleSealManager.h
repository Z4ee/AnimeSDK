#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_BUYSEAL_OFFSET UNITYSDK_OFFSET(0xB1B1AC0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1B1190)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xB1B1580)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETALLMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0xB1B18C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETAVAILABLEMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0xB1B1E80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESEALBYID_OFFSET UNITYSDK_OFFSET(0xB1A13F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESHOWLIST_OFFSET UNITYSDK_OFFSET(0xB1B16E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETSHOPMARBLELIST_OFFSET UNITYSDK_OFFSET(0xB1B1900)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0xB1B2080)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0xB1B1C90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GET_HASNEWTOBUY_OFFSET UNITYSDK_OFFSET(0xB1B22E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GET_ISALLUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB1B21C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB1B0EE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_SYNCUNLOCKMARBLESEALS_OFFSET UNITYSDK_OFFSET(0xB1B1220)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1B2430)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER__INITALLMARBLESEALS_OFFSET UNITYSDK_OFFSET(0xB1B0F30)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealManager_TypeDefinitionIndex = 69741;

	class MarbleSealManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* _AllMarbleSealList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncUnlockMarbleSeals(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_SYNCUNLOCKMARBLESEALS_OFFSET))(this, a1);
		}

		::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetMarbleSealByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESEALBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetMarbleShowList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESHOWLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetAllMarbleSealList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETALLMARBLESEALLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetShopMarbleList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETSHOPMARBLELIST_OFFSET))(this, a1);
		}

		::System::Void BuySeal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_BUYSEAL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetUnlockMarbleSealList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetAvailableMarbleSealList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETAVAILABLEMARBLESEALLIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetUnlockMarbleSealCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALCOUNT_OFFSET))(this, a1);
		}

		::System::Void _InitAllMarbleSeals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER__INITALLMARBLESEALS_OFFSET))(this);
		}

		::System::Boolean get_IsAllUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GET_ISALLUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasNewToBuy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GET_HASNEWTOBUY_OFFSET))(this);
		}
	};
}
