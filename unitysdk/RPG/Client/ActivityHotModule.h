#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_7FF19F6206AF6DD7_5;
class Class_1_7FF19F6206AF6DD7_6;
namespace RPG::Client { class ActivityHotCoreRewardData; }
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTMODULE_GETACTIVITYHOTDATAS_OFFSET UNITYSDK_OFFSET(0x19D14A20)
#define RPG_CLIENT_ACTIVITYHOTMODULE_HASNEWVERSIONNOTSEEN_OFFSET UNITYSDK_OFFSET(0x19D17720)
#define RPG_CLIENT_ACTIVITYHOTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x19D147D0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_ISFUNCTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x19D14970)
#define RPG_CLIENT_ACTIVITYHOTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x19D148B0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSCOREREWARDDATAS_OFFSET UNITYSDK_OFFSET(0x19D14C40)
#define RPG_CLIENT_ACTIVITYHOTMODULE_SETNEWVERSIONSEEN_OFFSET UNITYSDK_OFFSET(0x19D178F0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_SHOWACTIVITYHOTNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x19D176C0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_TRYGETHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x19D17A30)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ACTIVITYHOTDATALISTSORTCOMPARER_OFFSET UNITYSDK_OFFSET(0x19D17DC0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x19D18600)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTAVATARCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x19D15E50)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTCOREREWARDBYITEMID_OFFSET UNITYSDK_OFFSET(0x19D14DE0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDSBYITEMID_OFFSET UNITYSDK_OFFSET(0x19D17AF0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x19D16E10)
#define RPG_CLIENT_ACTIVITYHOTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D14710)
#define RPG_CLIENT_ACTIVITYHOTMODULE__GETCURRENTVERSIONIDFORACTIVITYHOT_OFFSET UNITYSDK_OFFSET(0x19D17860)
#define RPG_CLIENT_ACTIVITYHOTMODULE__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x19D18830)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ONGETACTIVITYHOTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x19D186E0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTDATAS_OFFSET UNITYSDK_OFFSET(0x19D17ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotModule_TypeDefinitionIndex = 58798;

	class ActivityHotModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Int32 DefaultHCoins = 0xFFFFFFFF; // 0x0
		::RPG::Client::Promises::Promise_1<::Class_1_7FF19F6206AF6DD7_6*>* _WaitServerSyncPromise; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Nullable_1<::System::Int32>>* _ActivityIDToTotalHCoinCounts; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Boolean IsFunctionUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_ISFUNCTIONUNLOCK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*>* GetActivityHotDatas()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_GETACTIVITYHOTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* ProcessCoreRewardDatas(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSCOREREWARDDATAS_OFFSET))(this, a1);
		}

		::System::Boolean ShowActivityHotNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_SHOWACTIVITYHOTNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean HasNewVersionNotSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_HASNEWVERSIONNOTSEEN_OFFSET))(this);
		}

		::System::Void SetNewVersionSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_SETNEWVERSIONSEEN_OFFSET))(this);
		}

		::System::Int32 TryGetHCoinCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_TRYGETHCOINCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCurrentVersionIDForActivityHot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__GETCURRENTVERSIONIDFORACTIVITYHOT_OFFSET))(this);
		}

		::System::Void _CollectCoreRewardByItemId(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTCOREREWARDBYITEMID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CollectAvatarCoreRewards(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTAVATARCOREREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectOtherCoreRewards(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void _CollectOtherCoreRewardsByItemID(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDSBYITEMID_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 _ActivityHotDataListSortComparer(::RPG::Client::ActivityHotData* a1, ::RPG::Client::ActivityHotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotData*, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ACTIVITYHOTDATALISTSORTCOMPARER_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncActivityHotDatas(::System::Collections::Generic::IEnumerable_1<::Class_1_7FF19F6206AF6DD7_5*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_7FF19F6206AF6DD7_5*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTDATAS_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetActivityHotDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ONGETACTIVITYHOTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__INIT_B__1_0_OFFSET))(this);
		}
	};
}
