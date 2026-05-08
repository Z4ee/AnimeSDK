#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TELEMETRYINTERFACE_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1A9EBCF0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_DESTORY_OFFSET UNITYSDK_OFFSET(0x1A9EBDB0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_INITCUSTOM_OFFSET UNITYSDK_OFFSET(0x1A9EBB60)
#define MIHOYO_SDK_TELEMETRYINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0x1A9EB440)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1A9ECB40)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMKIBANA_OFFSET UNITYSDK_OFFSET(0x1A9ED4E0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTODATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1A9EC850)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOKIBANA_OFFSET UNITYSDK_OFFSET(0x1A9ED1F0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1A9EBE50)
#define MIHOYO_SDK_TELEMETRYINTERFACE_SETCUSTOMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A9EB990)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STARTDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1A9EC3E0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STARTKIBANA_OFFSET UNITYSDK_OFFSET(0x1A9ECD80)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STOPDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1A9EC630)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STOPKIBANA_OFFSET UNITYSDK_OFFSET(0x1A9ECFD0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_INITENV_OFFSET UNITYSDK_OFFSET(0x1A9EB8F0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOKIBANA_OFFSET UNITYSDK_OFFSET(0x1A9ED410)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOLOGUPLOAD_OFFSET UNITYSDK_OFFSET(0x1A9ECA70)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1A9EC340)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTKIBANASERVICE_OFFSET UNITYSDK_OFFSET(0x1A9ECF30)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTLOGUPLOADSERVICE_OFFSET UNITYSDK_OFFSET(0x1A9EC590)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPKIBANASERVICE_OFFSET UNITYSDK_OFFSET(0x1A9ED150)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPLOGUPLOADSERVICE_OFFSET UNITYSDK_OFFSET(0x1A9EC7B0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_UNINITENV_OFFSET UNITYSDK_OFFSET(0x1A9ED720)
#define MIHOYO_SDK_TELEMETRYINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9ED7B0)
#define MIHOYO_SDK_TELEMETRYINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9ED7A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryInterface_TypeDefinitionIndex = 35355;

	class TelemetryInterface : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_kibanaUrl()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TelemetryInterface_TypeDefinitionIndex)->GetStaticField(0x26BE0);
		}
		static ::System::String** StaticGet_dataUploadUrl()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TelemetryInterface_TypeDefinitionIndex)->GetStaticField(0x26BE8);
		}
		static ::System::Boolean* StaticGet_isInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TelemetryInterface_TypeDefinitionIndex)->GetStaticField(0x8430);
		}
		// static const ::System::String* MODULE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_INIT_OFFSET))();
		}

		static ::System::Void InitCustom(::System::String* work_path, ::System::Int32 log_level, ::System::Int32 log_dest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_INITCUSTOM_OFFSET))(work_path, log_level, log_dest);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_CHECKINIT_OFFSET))();
		}

		static ::System::Void Destory(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_DESTORY_OFFSET))(callback);
		}

		static ::System::Void SetConfig(::System::Boolean isOverSea, ::System::String* launchTraceId, ::System::Int32 memoryCacheSize, ::System::Int32 diskCacheSize)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_SETCONFIG_OFFSET))(isOverSea, launchTraceId, memoryCacheSize, diskCacheSize);
		}

		static ::System::Void SetCustomConfig(::System::String* custom_config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_SETCUSTOMCONFIG_OFFSET))(custom_config);
		}

		static ::System::Void StartDataUpload(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STARTDATAUPLOAD_OFFSET))(url);
		}

		static ::System::Void StopDataUpload(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STOPDATAUPLOAD_OFFSET))(url);
		}

		static ::System::Void ReportToDataUpload(::System::String* custom_data, ::System::Int32 priority, ::System::String* url)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTODATAUPLOAD_OFFSET))(custom_data, priority, url);
		}

		static ::System::Void ReportToCustomDataUpload(::System::String* custom_data, ::System::Int32 priority, ::System::String* url, ::System::Boolean isAppendExtraData)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMDATAUPLOAD_OFFSET))(custom_data, priority, url, isAppendExtraData);
		}

		static ::System::Void StartKibana(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STARTKIBANA_OFFSET))(url);
		}

		static ::System::Void StopKibana(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STOPKIBANA_OFFSET))(url);
		}

		static ::System::Void ReportToKibana(::System::String* custom_data, ::System::Int32 priority, ::System::String* url)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOKIBANA_OFFSET))(custom_data, priority, url);
		}

		static ::System::Void ReportToCustomKibana(::System::String* custom_data, ::System::Int32 priority, ::System::String* url, ::System::Boolean isAppendExtraData)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMKIBANA_OFFSET))(custom_data, priority, url, isAppendExtraData);
		}

		static ::System::Void Telemetry_Native_InitEnv(::System::String* file_path, ::System::Int32 log_level, ::System::Int32 log_dest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_INITENV_OFFSET))(file_path, log_level, log_dest);
		}

		static ::System::Void Telemetry_Native_SetConfig(::System::String* config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_SETCONFIG_OFFSET))(config);
		}

		static ::System::Void Telemetry_Native_ReportToLogUpload(::System::String* url, ::System::String* custom_data, ::System::Int32 priority, ::System::Boolean append_common_data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOLOGUPLOAD_OFFSET))(url, custom_data, priority, append_common_data);
		}

		static ::System::Void Telemetry_Native_StartLogUploadService(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTLOGUPLOADSERVICE_OFFSET))(url);
		}

		static ::System::Void Telemetry_Native_StopLogUploadService(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPLOGUPLOADSERVICE_OFFSET))(url);
		}

		static ::System::Void Telemetry_Native_ReportToKibana(::System::String* url, ::System::String* custom_data, ::System::Int32 priority, ::System::Boolean append_common_data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOKIBANA_OFFSET))(url, custom_data, priority, append_common_data);
		}

		static ::System::Void Telemetry_Native_StartKibanaService(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTKIBANASERVICE_OFFSET))(url);
		}

		static ::System::Void Telemetry_Native_StopKibanaService(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPKIBANASERVICE_OFFSET))(url);
		}

		static ::System::Void Telemetry_Native_UnInitEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_UNINITENV_OFFSET))();
		}
	};
}
