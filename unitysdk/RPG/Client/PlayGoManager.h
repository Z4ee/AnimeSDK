#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_329;
class Class_0_16E4307DCC419505_330;
class Class_0_16E4307DCC419505_331;
class Class_0_16E4307DCC419505_767;
class Class_1_43BD383C98B4C0C5_101;
class Class_2_E6C0556C909C8254;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PLAYGOMANAGER_ADDEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x9FD6B40)
#define RPG_CLIENT_PLAYGOMANAGER_CHECKALLCHUNKDOWNLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9FD6EA0)
#define RPG_CLIENT_PLAYGOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FD6CD0)
#define RPG_CLIENT_PLAYGOMANAGER_GETESTIMATEDTIME_OFFSET UNITYSDK_OFFSET(0x9FD6F90)
#define RPG_CLIENT_PLAYGOMANAGER_GETUSEDTIME_OFFSET UNITYSDK_OFFSET(0x9FD7090)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x9FD86A0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8660)
#define RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8680)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISFINISHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9FD8560)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISRECORDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x9FD85A0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_ISSENDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x9FD85C0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0x9FD8580)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x9FD8640)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTPERCENT_OFFSET UNITYSDK_OFFSET(0x9FD85E0)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8600)
#define RPG_CLIENT_PLAYGOMANAGER_GET_STARTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8620)
#define RPG_CLIENT_PLAYGOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9FD69E0)
#define RPG_CLIENT_PLAYGOMANAGER_ONFINISH_OFFSET UNITYSDK_OFFSET(0x9FD8440)
#define RPG_CLIENT_PLAYGOMANAGER_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FD7440)
#define RPG_CLIENT_PLAYGOMANAGER_ONSTART_OFFSET UNITYSDK_OFFSET(0x9FD7380)
#define RPG_CLIENT_PLAYGOMANAGER_ONTICK_OFFSET UNITYSDK_OFFSET(0x9FD6DC0)
#define RPG_CLIENT_PLAYGOMANAGER_REMOVEEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x9FD7270)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x9FD86B0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8670)
#define RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8690)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISFINISHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x9FD8570)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISRECORDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x9FD85B0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_ISSENDSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x9FD85D0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_PERCENT_OFFSET UNITYSDK_OFFSET(0x9FD8590)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTCOSTTIME_OFFSET UNITYSDK_OFFSET(0x9FD8650)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTPERCENT_OFFSET UNITYSDK_OFFSET(0x9FD85F0)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTPROGRESSSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8610)
#define RPG_CLIENT_PLAYGOMANAGER_SET_STARTTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x9FD8630)
#define RPG_CLIENT_PLAYGOMANAGER_START_OFFSET UNITYSDK_OFFSET(0x9FD6C50)
#define RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOPOPWINDOWREPORT_OFFSET UNITYSDK_OFFSET(0x9FD8210)
#define RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOSTARTREPORT_OFFSET UNITYSDK_OFFSET(0x9FD7ED0)
#define RPG_CLIENT_PLAYGOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD6970)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayGoManager_TypeDefinitionIndex = 55751;

	class PlayGoManager : public ::System::Object
	{
	public:
		::RPG::Client::VersionUpdateProgressInfo* _ProgressInfo; // 0x10
		::Class_0_16E4307DCC419505_767* _PlayGoImpl; // 0x18
		::System::Boolean _IsRecordStartEvent_k__BackingField; // 0x20
		::System::Boolean _IsSendStartEvent_k__BackingField; // 0x21
		::System::Boolean _IsFinishDownload_k__BackingField; // 0x22
		::System::Single _StartPercent_k__BackingField; // 0x24
		::System::Int64 _StartCostTime_k__BackingField; // 0x28
		::System::Int64 _CurrentTotalSize_k__BackingField; // 0x30
		::System::Int64 _CurrentCostTime_k__BackingField; // 0x38
		::System::Int64 lastSize; // 0x40
		::System::Int64 _StartProgressSize_k__BackingField; // 0x48
		::System::Int64 _CurrentProgressSize_k__BackingField; // 0x50
		::System::Single _Percent_k__BackingField; // 0x58
		::System::Single lastTime; // 0x5C
		::System::Int64 _StartTotalSize_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_INIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Start()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_START_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONTICK_OFFSET))(this);
		}

		::System::Void CheckAllChunkDownloadComplete(::System::Action_1<::Class_1_43BD383C98B4C0C5_101*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_43BD383C98B4C0C5_101*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_CHECKALLCHUNKDOWNLOADCOMPLETE_OFFSET))(this, callback);
		}

		::System::Void GetEstimatedTime(::System::Action_1<::Class_2_E6C0556C909C8254*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_E6C0556C909C8254*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GETESTIMATEDTIME_OFFSET))(this, callback);
		}

		::System::UInt64 GetUsedTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GETUSEDTIME_OFFSET))(this);
		}

		::System::Void AddEventListener(::System::Action_1<::Class_0_16E4307DCC419505_330*>* startHandle, ::System::Action_1<::Class_0_16E4307DCC419505_331*>* progressHandle, ::System::Action_1<::Class_0_16E4307DCC419505_329*>* completeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_330*>*, ::System::Action_1<::Class_0_16E4307DCC419505_331*>*, ::System::Action_1<::Class_0_16E4307DCC419505_329*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ADDEVENTLISTENER_OFFSET))(this, startHandle, progressHandle, completeHandle);
		}

		::System::Void RemoveEventListener(::System::Action_1<::Class_0_16E4307DCC419505_330*>* startHandle, ::System::Action_1<::Class_0_16E4307DCC419505_331*>* progressHandle, ::System::Action_1<::Class_0_16E4307DCC419505_329*>* completeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_330*>*, ::System::Action_1<::Class_0_16E4307DCC419505_331*>*, ::System::Action_1<::Class_0_16E4307DCC419505_329*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_REMOVEEVENTLISTENER_OFFSET))(this, startHandle, progressHandle, completeHandle);
		}

		::System::Void OnStart(::Class_0_16E4307DCC419505_330* sp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_330*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONSTART_OFFSET))(this, sp);
		}

		::System::Void OnProgress(::Class_0_16E4307DCC419505_331* pp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_331*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONPROGRESS_OFFSET))(this, pp);
		}

		::System::Void TrySendPlayGoStartReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOSTARTREPORT_OFFSET))(this);
		}

		::System::Void TrySendPlayGoPopWindowReport(::System::Int32 stage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_TRYSENDPLAYGOPOPWINDOWREPORT_OFFSET))(this, stage);
		}

		::System::Void OnFinish(::Class_0_16E4307DCC419505_329* sp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_329*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_ONFINISH_OFFSET))(this, sp);
		}

		::System::Boolean get_IsFinishDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISFINISHDOWNLOAD_OFFSET))(this);
		}

		::System::Void set_IsFinishDownload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISFINISHDOWNLOAD_OFFSET))(this, value);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_PERCENT_OFFSET))(this);
		}

		::System::Void set_Percent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_PERCENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsRecordStartEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISRECORDSTARTEVENT_OFFSET))(this);
		}

		::System::Void set_IsRecordStartEvent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISRECORDSTARTEVENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsSendStartEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_ISSENDSTARTEVENT_OFFSET))(this);
		}

		::System::Void set_IsSendStartEvent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_ISSENDSTARTEVENT_OFFSET))(this, value);
		}

		::System::Single get_StartPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTPERCENT_OFFSET))(this);
		}

		::System::Void set_StartPercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTPERCENT_OFFSET))(this, value);
		}

		::System::Int64 get_StartProgressSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTPROGRESSSIZE_OFFSET))(this);
		}

		::System::Void set_StartProgressSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTPROGRESSSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_StartTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTTOTALSIZE_OFFSET))(this);
		}

		::System::Void set_StartTotalSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTTOTALSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_StartCostTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_STARTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_StartCostTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_STARTCOSTTIME_OFFSET))(this, value);
		}

		::System::Int64 get_CurrentProgressSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTPROGRESSSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentProgressSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTPROGRESSSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_CurrentTotalSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTTOTALSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentTotalSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTTOTALSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_CurrentCostTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_GET_CURRENTCOSTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentCostTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYGOMANAGER_SET_CURRENTCOSTTIME_OFFSET))(this, value);
		}
	};
}
