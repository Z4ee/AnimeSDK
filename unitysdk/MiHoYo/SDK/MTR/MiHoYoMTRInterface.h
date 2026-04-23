#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MTRTask; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoMTRCallback; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoResolverCallback; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_MiHoYoUrlUsageCallback; }
namespace MiHoYo::SDK::MTR { class MiHoYoMTRInterface_UrlCheckTask; }
namespace MiHoYo::SDK::MTR { template <typename T> class MiHoYoMTRInterface_TaskPoolManager_1; }
namespace MiHoYo::SDK::MTR { template <typename T> class MiHoYoMTRInterface_TaskResult_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDMTRRESULT_OFFSET UNITYSDK_OFFSET(0x8D324D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDRESOLVERRESULT_OFFSET UNITYSDK_OFFSET(0x8D325D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDURLCHECKRESULT_OFFSET UNITYSDK_OFFSET(0x8D32550)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_CHECKURLUSAGE_OFFSET UNITYSDK_OFFSET(0x8D2FE40)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_COULDINSERTMTRTASK_OFFSET UNITYSDK_OFFSET(0x8D2F790)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_COULDINSERTURLTASK_OFFSET UNITYSDK_OFFSET(0x8D301E0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_1_OFFSET UNITYSDK_OFFSET(0x8D2F400)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_OFFSET UNITYSDK_OFFSET(0x8D2F3B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ENABLEDEBUGLOGGER_OFFSET UNITYSDK_OFFSET(0x8D30E40)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GENERATERESOLVERTASKID_OFFSET UNITYSDK_OFFSET(0x8D31330)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETHOSTRESOLVEINFO_OFFSET UNITYSDK_OFFSET(0x8D31030)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETLOCALDNSS_OFFSET UNITYSDK_OFFSET(0x8D306B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_INITENV_OFFSET UNITYSDK_OFFSET(0x8D2F910)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CHECKURLUSAGESYNC_OFFSET UNITYSDK_OFFSET(0x8D327D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CREATEMTRHANDLE_OFFSET UNITYSDK_OFFSET(0x8D314B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_DOMTRSYNC_OFFSET UNITYSDK_OFFSET(0x8D32650)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_ENABLEDEBUGLOGGER_OFFSET UNITYSDK_OFFSET(0x8D30FB0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETHOSTRESOLVEINFO_OFFSET UNITYSDK_OFFSET(0x8D32990)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETLOCALDNSS_OFFSET UNITYSDK_OFFSET(0x8D308D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEDNSSRESULT_OFFSET UNITYSDK_OFFSET(0x8D30950)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEHEAPBUFFER_OFFSET UNITYSDK_OFFSET(0x8D32A30)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEMTRRESULT_OFFSET UNITYSDK_OFFSET(0x8D32750)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEURLUSAGERESULT_OFFSET UNITYSDK_OFFSET(0x8D32910)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTMTRTASKID_OFFSET UNITYSDK_OFFSET(0x8D2FB00)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTURLUSAGETASKID_OFFSET UNITYSDK_OFFSET(0x8D30360)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETMTRCONFIG_OFFSET UNITYSDK_OFFSET(0x8D30B70)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETURLCHECKCONFIG_OFFSET UNITYSDK_OFFSET(0x8D30DA0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPMTRTASK_OFFSET UNITYSDK_OFFSET(0x8D31860)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPURLUSAGETASK_OFFSET UNITYSDK_OFFSET(0x8D31B20)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ONQUITTING_OFFSET UNITYSDK_OFFSET(0x8D31BA0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_PEEKMTRTASK_OFFSET UNITYSDK_OFFSET(0x8D31EB0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_PEEKURLTASK_OFFSET UNITYSDK_OFFSET(0x8D32210)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTMTRTASK_OFFSET UNITYSDK_OFFSET(0x8D2FB80)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTURLTASK_OFFSET UNITYSDK_OFFSET(0x8D303E0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_RESETMTRRUNNINGTASKID_OFFSET UNITYSDK_OFFSET(0x8D31E10)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_RESETURLRUNNINGTASKID_OFFSET UNITYSDK_OFFSET(0x8D32170)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETMTRCONFIG_OFFSET UNITYSDK_OFFSET(0x8D309D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETURLCHECKCONFIG_OFFSET UNITYSDK_OFFSET(0x8D30C10)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPALLTASKS_OFFSET UNITYSDK_OFFSET(0x8D31C80)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTRPROC_OFFSET UNITYSDK_OFFSET(0x8D31620)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTR_OFFSET UNITYSDK_OFFSET(0x8D2FD60)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGEPROC_OFFSET UNITYSDK_OFFSET(0x8D318E0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGE_OFFSET UNITYSDK_OFFSET(0x8D305D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D32AC0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D32AB0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_TypeDefinitionIndex = 43235;

	class MiHoYoMTRInterface : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRTask*>** StaticGet_sm_mtrTaskPoolMgr()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRTask*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x4B690);
		}
		static ::System::Object** StaticGet_sm_lockForResolver()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x4B698);
		}
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>** StaticGet_sm_lstUrlCheckTaskResult()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x4B6A0);
		}
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>** StaticGet_sm_lstMTRTaskResult()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x4B6A8);
		}
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask*>** StaticGet_sm_urlTaskPoolMgr()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x4B6B0);
		}
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>** StaticGet_sm_lstResolverTaskResult()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x4B6B8);
		}
		static ::System::Boolean* StaticGet_sm_bIsStoppedAllTasks()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0xFAB0);
		}
		static ::System::Int32* StaticGet_sm_nResolverTaskIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0xFAB4);
		}
		static ::System::Int32* StaticGet_MAX_PENDING_TASK_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0xFAB8);
		}
		static ::System::Int32* StaticGet_sm_nMTRHandle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0xFABC);
		}
		static ::System::Int32* StaticGet_sm_nRunningResolverTaskCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0xFAC0);
		}
		// static const ::System::String* CLID_MIHOYO_MTR_SDK; // 0x0
		// static const ::System::String* MTR_MODULE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Int32 DoMTR(::System::String* hostStr, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* miHoYoMTRCallback, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_OFFSET))(hostStr, miHoYoMTRCallback, count);
		}

		static ::System::Int32 DoMTR_1(::System::String* strHost, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* callback, ::System::Int32 nTimeIntervalMillisec, ::System::Int32 nCount, ::System::Single fTimeoutMillisec, ::System::Int32 nAbortTimeoutCount, ::System::Int32 nMaxTTL)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_1_OFFSET))(strHost, callback, nTimeIntervalMillisec, nCount, fTimeoutMillisec, nAbortTimeoutCount, nMaxTTL);
		}

		static ::System::Void StopMTR(::System::Int32 nTaskID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTR_OFFSET))(nTaskID);
		}

		static ::System::Int32 CheckUrlUsage(::System::String* strUrl, ::System::String* strDestIP, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback* callback, ::System::Int32 nTimeIntervalMillisec, ::System::Int32 nCount, ::System::Single fTimeoutMillisec, ::System::Int32 nAbortTimeoutCount, ::System::Boolean bCheckAllIP)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_CHECKURLUSAGE_OFFSET))(strUrl, strDestIP, callback, nTimeIntervalMillisec, nCount, fTimeoutMillisec, nAbortTimeoutCount, bCheckAllIP);
		}

		static ::System::Void StopUrlUsage(::System::Int32 nTaskID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGE_OFFSET))(nTaskID);
		}

		static ::System::String* GetLocalDNSs()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETLOCALDNSS_OFFSET))();
		}

		static ::System::Void SetMTRConfig(::System::String* strConfig)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETMTRCONFIG_OFFSET))(strConfig);
		}

		static ::System::Void SetUrlCheckConfig(::System::String* strConfig)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETURLCHECKCONFIG_OFFSET))(strConfig);
		}

		static ::System::Void EnableDebugLogger(::System::Boolean bIsEnableDebugLogger)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ENABLEDEBUGLOGGER_OFFSET))(bIsEnableDebugLogger);
		}

		static ::System::Int32 GetHostResolveInfo(::System::String* strHost, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback* callback)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETHOSTRESOLVEINFO_OFFSET))(strHost, callback);
		}

		static ::System::Int32 GenerateResolverTaskID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GENERATERESOLVERTASKID_OFFSET))();
		}

		static ::System::Int32 InitEnv()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_INITENV_OFFSET))();
		}

		static ::System::Void StopMTRProc(::System::Object* data)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTRPROC_OFFSET))(data);
		}

		static ::System::Void StopUrlUsageProc(::System::Object* data)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGEPROC_OFFSET))(data);
		}

		static ::System::Void OnQuitting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ONQUITTING_OFFSET))();
		}

		static ::System::Void StopAllTasks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPALLTASKS_OFFSET))();
		}

		static ::System::Void ResetMTRRunningTaskID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_RESETMTRRUNNINGTASKID_OFFSET))();
		}

		static ::System::Void PostMTRTask(::System::Int32 nTaskID, ::System::String* strHost, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* callback, ::System::Int32 nTimeIntervalMillisec, ::System::Int32 nCount, ::System::Single fTimeoutMillisec, ::System::Int32 nAbortTimeoutCount, ::System::Int32 nMaxTTL)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTMTRTASK_OFFSET))(nTaskID, strHost, callback, nTimeIntervalMillisec, nCount, fTimeoutMillisec, nAbortTimeoutCount, nMaxTTL);
		}

		static ::System::Boolean CouldInsertMTRTask()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_COULDINSERTMTRTASK_OFFSET))();
		}

		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRTask* PeekMTRTask()
		{
			return ((::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRTask*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_PEEKMTRTASK_OFFSET))();
		}

		static ::System::Void ResetUrlRunningTaskID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_RESETURLRUNNINGTASKID_OFFSET))();
		}

		static ::System::Void PostUrlTask(::System::Int32 nTaskID, ::System::String* strUrl, ::System::String* strDestIP, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback* callback, ::System::Int32 nTimeIntervalMillisec, ::System::Int32 nCount, ::System::Single fTimeoutMillisec, ::System::Int32 nAbortTimeoutCount, ::System::Boolean bCheckAllIP)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTURLTASK_OFFSET))(nTaskID, strUrl, strDestIP, callback, nTimeIntervalMillisec, nCount, fTimeoutMillisec, nAbortTimeoutCount, bCheckAllIP);
		}

		static ::System::Boolean CouldInsertUrlTask()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_COULDINSERTURLTASK_OFFSET))();
		}

		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask* PeekUrlTask()
		{
			return ((::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_PEEKURLTASK_OFFSET))();
		}

		static ::System::Void AddMTRResult(::System::Int32 nTaskID, ::System::String* strResult, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDMTRRESULT_OFFSET))(nTaskID, strResult, callback);
		}

		static ::System::Void AddUrlCheckResult(::System::Int32 nTaskID, ::System::String* strResult, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDURLCHECKRESULT_OFFSET))(nTaskID, strResult, callback);
		}

		static ::System::Void AddResolverResult(::System::Int32 nTaskID, ::System::String* strResult, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDRESOLVERRESULT_OFFSET))(nTaskID, strResult, callback);
		}

		static ::System::Int32 MiHoYoMTR_CreateMTRHandle(::System::String* strClassID)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CREATEMTRHANDLE_OFFSET))(strClassID);
		}

		static ::System::Int32 MiHoYoMTR_RequestMTRTaskID(::System::Int32 nHandle)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTMTRTASKID_OFFSET))(nHandle);
		}

		static ::System::IntPtr MiHoYoMTR_DoMTRSync(::System::Int32 nHandle, ::System::Int32 nTaskID, ::System::String* strHost, ::System::Int32 nTimeIntervalMillisec, ::System::Int32 nCount, ::System::Single fTimeoutMillisec, ::System::Int32 nAbortTimeoutCount, ::System::Int32 nMaxTTL)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_DOMTRSYNC_OFFSET))(nHandle, nTaskID, strHost, nTimeIntervalMillisec, nCount, fTimeoutMillisec, nAbortTimeoutCount, nMaxTTL);
		}

		static ::System::Void MiHoYoMTR_ReleaseMTRResult(::System::Int32 nHandle, ::System::IntPtr pBuffer)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEMTRRESULT_OFFSET))(nHandle, pBuffer);
		}

		static ::System::Void MiHoYoMTR_StopMTRTask(::System::Int32 nHandle, ::System::Int32 nTaskID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPMTRTASK_OFFSET))(nHandle, nTaskID);
		}

		static ::System::Int32 MiHoYoMTR_RequestUrlUsageTaskID(::System::Int32 nHandle)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTURLUSAGETASKID_OFFSET))(nHandle);
		}

		static ::System::IntPtr MiHoYoMTR_CheckUrlUsageSync(::System::Int32 nHandle, ::System::Int32 nTaskID, ::System::String* strUrl, ::System::String* strDestIP, ::System::Int32 nTimeIntervalMillisec, ::System::Int32 nCount, ::System::Single fTimeoutMillisec, ::System::Int32 nAbortTimeoutCount, ::System::Boolean bCheckAllIP)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CHECKURLUSAGESYNC_OFFSET))(nHandle, nTaskID, strUrl, strDestIP, nTimeIntervalMillisec, nCount, fTimeoutMillisec, nAbortTimeoutCount, bCheckAllIP);
		}

		static ::System::Void MiHoYoMTR_ReleaseUrlUsageResult(::System::Int32 nHandle, ::System::IntPtr pBuffer)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEURLUSAGERESULT_OFFSET))(nHandle, pBuffer);
		}

		static ::System::Void MiHoYoMTR_StopUrlUsageTask(::System::Int32 nHandle, ::System::Int32 nTaskID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPURLUSAGETASK_OFFSET))(nHandle, nTaskID);
		}

		static ::System::IntPtr MiHoYoMTR_GetLocalDNSs(::System::Int32 nHandle)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETLOCALDNSS_OFFSET))(nHandle);
		}

		static ::System::Void MiHoYoMTR_ReleaseDNSsResult(::System::Int32 nHandle, ::System::IntPtr pBuffer)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEDNSSRESULT_OFFSET))(nHandle, pBuffer);
		}

		static ::System::Void MiHoYoMTR_SetMTRConfig(::System::Int32 nHandle, ::System::String* strConfig)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETMTRCONFIG_OFFSET))(nHandle, strConfig);
		}

		static ::System::Void MiHoYoMTR_EnableDebugLogger(::System::Boolean bIsEnableDebugLogger)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_ENABLEDEBUGLOGGER_OFFSET))(bIsEnableDebugLogger);
		}

		static ::System::Void MiHoYoMTR_SetUrlCheckConfig(::System::Int32 nHandle, ::System::String* strConfig)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETURLCHECKCONFIG_OFFSET))(nHandle, strConfig);
		}

		static ::System::IntPtr MiHoYoMTR_GetHostResolveInfo(::System::Int32 nHandle, ::System::String* strHost)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETHOSTRESOLVEINFO_OFFSET))(nHandle, strHost);
		}

		static ::System::Void MiHoYoMTR_ReleaseHeapBuffer(::System::Int32 nHandle, ::System::IntPtr pBuffer)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEHEAPBUFFER_OFFSET))(nHandle, pBuffer);
		}
	};
}
