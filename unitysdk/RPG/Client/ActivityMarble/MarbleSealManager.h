#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_BUYSEAL_OFFSET UNITYSDK_OFFSET(0x8F6A470)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F69C30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x8F6A000)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETALLMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0x8F6A290)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETAVAILABLEMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0x8F6A7C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESEALBYID_OFFSET UNITYSDK_OFFSET(0x8F64210)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESHOWLIST_OFFSET UNITYSDK_OFFSET(0x8F6A140)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETSHOPMARBLELIST_OFFSET UNITYSDK_OFFSET(0x8F6A2D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALCOUNT_OFFSET UNITYSDK_OFFSET(0x8F6A950)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALLIST_OFFSET UNITYSDK_OFFSET(0x8F6A640)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GET_HASNEWTOBUY_OFFSET UNITYSDK_OFFSET(0x8F6ABE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GET_ISALLUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8F6AAA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x8F69A20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_SYNCUNLOCKMARBLESEALS_OFFSET UNITYSDK_OFFSET(0x8F69CA0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F6AD10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER__INITALLMARBLESEALS_OFFSET UNITYSDK_OFFSET(0x8F69A70)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealManager_TypeDefinitionIndex = 61423;

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

		::System::Void SyncUnlockMarbleSeals(::System::Collections::Generic::IList_1<::System::UInt32>* unlockMarbleSealIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_SYNCUNLOCKMARBLESEALS_OFFSET))(this, unlockMarbleSealIDs);
		}

		::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* set)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(this, set);
		}

		::RPG::Client::ActivityMarble::MarbleSealData* GetMarbleSealByID(::System::UInt32 id)
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESEALBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetMarbleShowList(::System::UInt32 activityId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETMARBLESHOWLIST_OFFSET))(this, activityId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetAllMarbleSealList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETALLMARBLESEALLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetShopMarbleList(::System::UInt32 activityId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETSHOPMARBLELIST_OFFSET))(this, activityId);
		}

		::System::Void BuySeal(::System::UInt32 sealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_BUYSEAL_OFFSET))(this, sealID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetUnlockMarbleSealList(::System::UInt32 activityId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALLIST_OFFSET))(this, activityId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>* GetAvailableMarbleSealList(::System::UInt32 activityId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleSealData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETAVAILABLEMARBLESEALLIST_OFFSET))(this, activityId);
		}

		::System::UInt32 GetUnlockMarbleSealCount(::System::UInt32 activityId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALMANAGER_GETUNLOCKMARBLESEALCOUNT_OFFSET))(this, activityId);
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
