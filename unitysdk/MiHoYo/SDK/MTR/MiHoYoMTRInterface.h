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

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDMTRRESULT_OFFSET UNITYSDK_OFFSET(0x1C7083B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDRESOLVERRESULT_OFFSET UNITYSDK_OFFSET(0x1C7084B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDURLCHECKRESULT_OFFSET UNITYSDK_OFFSET(0x1C708430)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_CHECKURLUSAGE_OFFSET UNITYSDK_OFFSET(0x1C705CD0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_COULDINSERTMTRTASK_OFFSET UNITYSDK_OFFSET(0x1C705590)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_COULDINSERTURLTASK_OFFSET UNITYSDK_OFFSET(0x1C706080)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_1_OFFSET UNITYSDK_OFFSET(0x1C7051F0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_OFFSET UNITYSDK_OFFSET(0x1C7051A0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ENABLEDEBUGLOGGER_OFFSET UNITYSDK_OFFSET(0x1C706D50)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GENERATERESOLVERTASKID_OFFSET UNITYSDK_OFFSET(0x1C707250)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETHOSTRESOLVEINFO_OFFSET UNITYSDK_OFFSET(0x1C706F40)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETLOCALDNSS_OFFSET UNITYSDK_OFFSET(0x1C7065D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_INITENV_OFFSET UNITYSDK_OFFSET(0x1C705710)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CHECKURLUSAGESYNC_OFFSET UNITYSDK_OFFSET(0x1C7086B0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CREATEMTRHANDLE_OFFSET UNITYSDK_OFFSET(0x1C7073D0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_DOMTRSYNC_OFFSET UNITYSDK_OFFSET(0x1C708530)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_ENABLEDEBUGLOGGER_OFFSET UNITYSDK_OFFSET(0x1C706EC0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETHOSTRESOLVEINFO_OFFSET UNITYSDK_OFFSET(0x1C708870)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETLOCALDNSS_OFFSET UNITYSDK_OFFSET(0x1C7067F0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEDNSSRESULT_OFFSET UNITYSDK_OFFSET(0x1C706870)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEHEAPBUFFER_OFFSET UNITYSDK_OFFSET(0x1C708910)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEMTRRESULT_OFFSET UNITYSDK_OFFSET(0x1C708630)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEURLUSAGERESULT_OFFSET UNITYSDK_OFFSET(0x1C7087F0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTMTRTASKID_OFFSET UNITYSDK_OFFSET(0x1C705900)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTURLUSAGETASKID_OFFSET UNITYSDK_OFFSET(0x1C706200)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETMTRCONFIG_OFFSET UNITYSDK_OFFSET(0x1C706A90)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETURLCHECKCONFIG_OFFSET UNITYSDK_OFFSET(0x1C706CB0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPMTRTASK_OFFSET UNITYSDK_OFFSET(0x1C707780)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPURLUSAGETASK_OFFSET UNITYSDK_OFFSET(0x1C707A40)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ONQUITTING_OFFSET UNITYSDK_OFFSET(0x1C707AC0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_PEEKMTRTASK_OFFSET UNITYSDK_OFFSET(0x1C707DD0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_PEEKURLTASK_OFFSET UNITYSDK_OFFSET(0x1C708100)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTMTRTASK_OFFSET UNITYSDK_OFFSET(0x1C705980)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTURLTASK_OFFSET UNITYSDK_OFFSET(0x1C706280)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_RESETMTRRUNNINGTASKID_OFFSET UNITYSDK_OFFSET(0x1C707D30)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_RESETURLRUNNINGTASKID_OFFSET UNITYSDK_OFFSET(0x1C708080)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETMTRCONFIG_OFFSET UNITYSDK_OFFSET(0x1C7068F0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETURLCHECKCONFIG_OFFSET UNITYSDK_OFFSET(0x1C706B30)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPALLTASKS_OFFSET UNITYSDK_OFFSET(0x1C707BA0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTRPROC_OFFSET UNITYSDK_OFFSET(0x1C707540)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTR_OFFSET UNITYSDK_OFFSET(0x1C705BC0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGEPROC_OFFSET UNITYSDK_OFFSET(0x1C707800)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGE_OFFSET UNITYSDK_OFFSET(0x1C7064C0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7089A0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C708990)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_TypeDefinitionIndex = 47136;

	class MiHoYoMTRInterface : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>** StaticGet_sm_lstMTRTaskResult()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x53480);
		}
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>** StaticGet_sm_lstResolverTaskResult()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x53488);
		}
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask*>** StaticGet_sm_urlTaskPoolMgr()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x53490);
		}
		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRTask*>** StaticGet_sm_mtrTaskPoolMgr()
		{
			return (::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskPoolManager_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MTRTask*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x53498);
		}
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>** StaticGet_sm_lstUrlCheckTaskResult()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_TaskResult_1<::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x534A0);
		}
		static ::System::Object** StaticGet_sm_lockForResolver()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x534A8);
		}
		static ::System::Int32* StaticGet_MAX_PENDING_TASK_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x11250);
		}
		static ::System::Boolean* StaticGet_sm_bIsStoppedAllTasks()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x11254);
		}
		static ::System::Int32* StaticGet_sm_nMTRHandle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x11258);
		}
		static ::System::Int32* StaticGet_sm_nResolverTaskIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x1125C);
		}
		static ::System::Int32* StaticGet_sm_nRunningResolverTaskCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_TypeDefinitionIndex)->GetStaticField(0x11260);
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

		static ::System::Int32 DoMTR(::System::String* a1, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 DoMTR_1(::System::String* a1, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_DOMTR_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void StopMTR(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTR_OFFSET))(a1);
		}

		static ::System::Int32 CheckUrlUsage(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_CHECKURLUSAGE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void StopUrlUsage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGE_OFFSET))(a1);
		}

		static ::System::String* GetLocalDNSs()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETLOCALDNSS_OFFSET))();
		}

		static ::System::Void SetMTRConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETMTRCONFIG_OFFSET))(a1);
		}

		static ::System::Void SetUrlCheckConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_SETURLCHECKCONFIG_OFFSET))(a1);
		}

		static ::System::Void EnableDebugLogger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ENABLEDEBUGLOGGER_OFFSET))(a1);
		}

		static ::System::Int32 GetHostResolveInfo(::System::String* a1, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GETHOSTRESOLVEINFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 GenerateResolverTaskID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_GENERATERESOLVERTASKID_OFFSET))();
		}

		static ::System::Int32 InitEnv()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_INITENV_OFFSET))();
		}

		static ::System::Void StopMTRProc(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPMTRPROC_OFFSET))(a1);
		}

		static ::System::Void StopUrlUsageProc(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_STOPURLUSAGEPROC_OFFSET))(a1);
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

		static ::System::Void PostMTRTask(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTMTRTASK_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
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

		static ::System::Void PostUrlTask(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Single a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_POSTURLTASK_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Boolean CouldInsertUrlTask()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_COULDINSERTURLTASK_OFFSET))();
		}

		static ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask* PeekUrlTask()
		{
			return ((::MiHoYo::SDK::MTR::MiHoYoMTRInterface_UrlCheckTask*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_PEEKURLTASK_OFFSET))();
		}

		static ::System::Void AddMTRResult(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoMTRCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDMTRRESULT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddUrlCheckResult(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoUrlUsageCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDURLCHECKRESULT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddResolverResult(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::MiHoYo::SDK::MTR::MiHoYoMTRInterface_MiHoYoResolverCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_ADDRESOLVERRESULT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 MiHoYoMTR_CreateMTRHandle(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CREATEMTRHANDLE_OFFSET))(a1);
		}

		static ::System::Int32 MiHoYoMTR_RequestMTRTaskID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTMTRTASKID_OFFSET))(a1);
		}

		static ::System::IntPtr MiHoYoMTR_DoMTRSync(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_DOMTRSYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void MiHoYoMTR_ReleaseMTRResult(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEMTRRESULT_OFFSET))(a1, a2);
		}

		static ::System::Void MiHoYoMTR_StopMTRTask(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPMTRTASK_OFFSET))(a1, a2);
		}

		static ::System::Int32 MiHoYoMTR_RequestUrlUsageTaskID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_REQUESTURLUSAGETASKID_OFFSET))(a1);
		}

		static ::System::IntPtr MiHoYoMTR_CheckUrlUsageSync(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Single a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_CHECKURLUSAGESYNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void MiHoYoMTR_ReleaseUrlUsageResult(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEURLUSAGERESULT_OFFSET))(a1, a2);
		}

		static ::System::Void MiHoYoMTR_StopUrlUsageTask(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_STOPURLUSAGETASK_OFFSET))(a1, a2);
		}

		static ::System::IntPtr MiHoYoMTR_GetLocalDNSs(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETLOCALDNSS_OFFSET))(a1);
		}

		static ::System::Void MiHoYoMTR_ReleaseDNSsResult(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEDNSSRESULT_OFFSET))(a1, a2);
		}

		static ::System::Void MiHoYoMTR_SetMTRConfig(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETMTRCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void MiHoYoMTR_EnableDebugLogger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_ENABLEDEBUGLOGGER_OFFSET))(a1);
		}

		static ::System::Void MiHoYoMTR_SetUrlCheckConfig(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_SETURLCHECKCONFIG_OFFSET))(a1, a2);
		}

		static ::System::IntPtr MiHoYoMTR_GetHostResolveInfo(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_GETHOSTRESOLVEINFO_OFFSET))(a1, a2);
		}

		static ::System::Void MiHoYoMTR_ReleaseHeapBuffer(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MIHOYOMTR_RELEASEHEAPBUFFER_OFFSET))(a1, a2);
		}
	};
}
