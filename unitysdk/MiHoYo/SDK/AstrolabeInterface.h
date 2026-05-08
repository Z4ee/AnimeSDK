#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_BLOCKREPORT_OFFSET UNITYSDK_OFFSET(0x198BB430)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTDELETEUNSENT_OFFSET UNITYSDK_OFFSET(0x198BAC00)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTSETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x198BADE0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORT_OFFSET UNITYSDK_OFFSET(0x198BB000)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_GAMELOGREPORT_OFFSET UNITYSDK_OFFSET(0x198BA700)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x198B85E0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTDELETEUNSENT_OFFSET UNITYSDK_OFFSET(0x198BAD60)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTSETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x198BAF60)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORT_OFFSET UNITYSDK_OFFSET(0x198BB390)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_GAMELOGREPORT_OFFSET UNITYSDK_OFFSET(0x198BAAF0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INIT_OFFSET UNITYSDK_OFFSET(0x198B8F30)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLCRASHREPORT_OFFSET UNITYSDK_OFFSET(0x198BA280)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLGAMELOG_OFFSET UNITYSDK_OFFSET(0x198BA170)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLHANG_OFFSET UNITYSDK_OFFSET(0x198BA320)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLLOGPLUGIN_OFFSET UNITYSDK_OFFSET(0x198BA3C0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLREPLAY_OFFSET UNITYSDK_OFFSET(0x198BA200)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_ONHANG_OFFSET UNITYSDK_OFFSET(0x198BBAE0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x198B8FE0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x198BA660)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETFTCSWITCH_OFFSET UNITYSDK_OFFSET(0x198BBF30)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETLRSAG_OFFSET UNITYSDK_OFFSET(0x198BBD50)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_START_OFFSET UNITYSDK_OFFSET(0x198BA460)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x198B9080)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x198BA4E0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETFTCSWITCH_OFFSET UNITYSDK_OFFSET(0x198BBDD0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETLRSAG_OFFSET UNITYSDK_OFFSET(0x198BBBF0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_START_OFFSET UNITYSDK_OFFSET(0x198B9200)
#define MIHOYO_SDK_ASTROLABEINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198BBFC0)
#define MIHOYO_SDK_ASTROLABEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x198BBFB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AstrolabeInterface_TypeDefinitionIndex = 35329;

	class AstrolabeInterface : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_sensitiveKeys()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x26C40);
		}
		static ::System::String** StaticGet_crashDumpPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x26C48);
		}
		static ::System::String** StaticGet_crashCustomData()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x26C50);
		}
		static ::System::Int32* StaticGet_maxStackDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x8450);
		}
		static ::System::Boolean* StaticGet_isSensitiveEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x8454);
		}
		// static const ::System::String* MODULE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Void Astrolabe_InitConfig(::System::String* config, ::System::String* work_path)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_INITCONFIG_OFFSET))(config, work_path);
		}

		static ::System::Void Astrolabe_SetConfig(::System::String* config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCONFIG_OFFSET))(config);
		}

		static ::System::Void Astrolabe_Start(::System::String* config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_START_OFFSET))(config);
		}

		static ::System::Void Astrolabe_SetCustomData(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCUSTOMDATA_OFFSET))(data);
		}

		static ::System::Void Astrolabe_GameLogReport(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_GAMELOGREPORT_OFFSET))(jsonString);
		}

		static ::System::Void Astrolabe_CrashReportDeleteUnSent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTDELETEUNSENT_OFFSET))();
		}

		static ::System::Void Astrolabe_CrashReportSetCustomData(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTSETCUSTOMDATA_OFFSET))(data);
		}

		static ::System::Void Astrolabe_CrashReport(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORT_OFFSET))(jsonString);
		}

		static ::System::Void Astrolabe_BlockReport(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_BLOCKREPORT_OFFSET))(jsonString);
		}

		static ::System::Void Astrolabe_SetLrsag(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETLRSAG_OFFSET))(value);
		}

		static ::System::Void Astrolabe_SetFtcSwitch(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETFTCSWITCH_OFFSET))(value);
		}

		static ::System::Void Astrolabe_Native_Init(::System::String* file_path, ::System::Int32 log_level, ::System::Int32 log_dest, ::System::Int32 max_database_count)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INIT_OFFSET))(file_path, log_level, log_dest, max_database_count);
		}

		static ::System::Void Astrolabe_Native_SetConfig(::System::String* common_info)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCONFIG_OFFSET))(common_info);
		}

		static ::System::Void Astrolabe_Native_Start()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_START_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_SetCustomData(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCUSTOMDATA_OFFSET))(data);
		}

		static ::System::Void Astrolabe_Native_InstallGameLog(::System::Int32 report_count, ::System::Int32 cache_count, ::System::Int32 report_time_interval, ::System::Int32 expired_seconds_before)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLGAMELOG_OFFSET))(report_count, cache_count, report_time_interval, expired_seconds_before);
		}

		static ::System::Void Astrolabe_Native_GameLogReport(::System::String* custom_data, ::System::String* log_type, ::System::String* stack_trace, ::System::String* title, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_GAMELOGREPORT_OFFSET))(custom_data, log_type, stack_trace, title, priority);
		}

		static ::System::Void Astrolabe_Native_InstallCrashReport(::System::String* info)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLCRASHREPORT_OFFSET))(info);
		}

		static ::System::Void Astrolabe_Native_CrashReportDeleteUnSent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTDELETEUNSENT_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_CrashReportSetCustomData(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTSETCUSTOMDATA_OFFSET))(data);
		}

		static ::System::Void Astrolabe_Native_CrashReport(::System::String* file_path, ::System::Boolean remain_file)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORT_OFFSET))(file_path, remain_file);
		}

		static ::System::Void Astrolabe_Native_InstallHang(::System::String* info)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLHANG_OFFSET))(info);
		}

		static ::System::Void Astrolabe_Native_OnHang(::System::UInt64 hang_dur_ms, ::System::UInt64 timestamp_ms, ::System::UInt32 thread_id, ::System::String* thread_tag, ::System::UInt32 max_stack_depth, ::System::Int32 dmp_flag, ::System::Int32 suspend_flag, ::System::String* custom_data)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_ONHANG_OFFSET))(hang_dur_ms, timestamp_ms, thread_id, thread_tag, max_stack_depth, dmp_flag, suspend_flag, custom_data);
		}

		static ::System::Void Astrolabe_Native_InstallLogPlugin(::System::String* config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLLOGPLUGIN_OFFSET))(config);
		}

		static ::System::Void Astrolabe_Native_InstallReplay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLREPLAY_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_SetLrsag(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETLRSAG_OFFSET))(value);
		}

		static ::System::Void Astrolabe_Native_SetFtcSwitch(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETFTCSWITCH_OFFSET))(value);
		}
	};
}
