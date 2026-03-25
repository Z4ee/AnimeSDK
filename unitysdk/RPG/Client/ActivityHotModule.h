#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_5FEFAED860528596_5;
class Class_1_5FEFAED860528596_6;
namespace RPG::Client { class ActivityHotCoreRewardData; }
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTMODULE_GETACTIVITYHOTDATAS_OFFSET UNITYSDK_OFFSET(0x8F4A250)
#define RPG_CLIENT_ACTIVITYHOTMODULE_HASNEWVERSIONNOTSEEN_OFFSET UNITYSDK_OFFSET(0x8F4C680)
#define RPG_CLIENT_ACTIVITYHOTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8F49FA0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_ISFUNCTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F4A1A0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8F4A0B0)
#define RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSCOREREWARDDATAS_OFFSET UNITYSDK_OFFSET(0x8F4A460)
#define RPG_CLIENT_ACTIVITYHOTMODULE_SETNEWVERSIONSEEN_OFFSET UNITYSDK_OFFSET(0x8F4C850)
#define RPG_CLIENT_ACTIVITYHOTMODULE_SHOWACTIVITYHOTNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x8F4C620)
#define RPG_CLIENT_ACTIVITYHOTMODULE_TRYGETHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x8F4C990)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ACTIVITYHOTDATALISTSORTCOMPARER_OFFSET UNITYSDK_OFFSET(0x8F4CC80)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F4D250)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTAVATARCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x8F4B440)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTCOREREWARDBYITEMID_OFFSET UNITYSDK_OFFSET(0x8F4A5E0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDSBYITEMID_OFFSET UNITYSDK_OFFSET(0x8F4CA40)
#define RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x8F4C120)
#define RPG_CLIENT_ACTIVITYHOTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F49F00)
#define RPG_CLIENT_ACTIVITYHOTMODULE__GETCURRENTVERSIONIDFORACTIVITYHOT_OFFSET UNITYSDK_OFFSET(0x8F4C7C0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x8F4D410)
#define RPG_CLIENT_ACTIVITYHOTMODULE__ONGETACTIVITYHOTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8F4D2C0)
#define RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTDATAS_OFFSET UNITYSDK_OFFSET(0x8F4CD20)
#define RPG_CLIENT_ACTIVITYHOTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8F4D420)
#define RPG_CLIENT_ACTIVITYHOTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8F4D4B0)
#define RPG_CLIENT_ACTIVITYHOTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F4D510)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotModule_TypeDefinitionIndex = 49930;

	class ActivityHotModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Int32 DefaultHCoins = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Nullable_1<::System::Int32>>* _ActivityIDToTotalHCoinCounts; // 0x10
		::RPG::Client::Promises::Promise_1<::Class_1_5FEFAED860528596_6*>* _WaitServerSyncPromise; // 0x18

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

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* ProcessCoreRewardDatas(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* activityHotDatas)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_PROCESSCOREREWARDDATAS_OFFSET))(this, activityHotDatas);
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

		::System::Int32 TryGetHCoinCount(::System::UInt32 activityHotID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE_TRYGETHCOINCOUNT_OFFSET))(this, activityHotID);
		}

		::System::UInt32 _GetCurrentVersionIDForActivityHot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__GETCURRENTVERSIONIDFORACTIVITYHOT_OFFSET))(this);
		}

		::System::Void _CollectCoreRewardByItemId(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* activityHotDatas, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* coreRewardDatas, ::System::UInt32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTCOREREWARDBYITEMID_OFFSET))(this, activityHotDatas, coreRewardDatas, itemId);
		}

		::System::Void _CollectAvatarCoreRewards(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* activityHotDatas, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* coreRewardDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTAVATARCOREREWARDS_OFFSET))(this, activityHotDatas, coreRewardDatas);
		}

		::System::Void _CollectOtherCoreRewards(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* activityHotDatas, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* coreRewardDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDS_OFFSET))(this, activityHotDatas, coreRewardDatas);
		}

		::System::Void _CollectOtherCoreRewardsByItemID(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>* coreRewardDatas, ::System::UInt32 itemID, ::System::UInt32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotCoreRewardData*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__COLLECTOTHERCOREREWARDSBYITEMID_OFFSET))(this, coreRewardDatas, itemID, activityID);
		}

		::System::Int32 _ActivityHotDataListSortComparer(::RPG::Client::ActivityHotData* a, ::RPG::Client::ActivityHotData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotData*, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ACTIVITYHOTDATALISTSORTCOMPARER_OFFSET))(this, a, b);
		}

		::System::Void _SyncActivityHotDatas(::System::Collections::Generic::IEnumerable_1<::Class_1_5FEFAED860528596_5*>* serverDatas, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_5FEFAED860528596_5*>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__SYNCACTIVITYHOTDATAS_OFFSET))(this, serverDatas, datas);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetActivityHotDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__ONGETACTIVITYHOTDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE__INIT_B__1_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
