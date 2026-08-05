#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/APMC_LOGBACK_LogInfo.h"
#include "unitysdk/MiHoYo/SDK/APMC_LOGBACK_LogNativeProactiveUploadConfig.h"
#include "unitysdk/MiHoYo/SDK/APMC_LOGBACK_LogNativeRetrieveConfig.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class APMC_LOGBACK_LogProactiveUploadConfig; }
namespace MiHoYo::SDK { class APMC_LOGBACK_LogRetrieveConfig; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_LOGPLUGINSETUPLOADSEPERATECONFIG_OFFSET UNITYSDK_OFFSET(0x1DFFA7F0)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_DISABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DFFA770)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1DFFAD90)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_UPLOAD_OFFSET UNITYSDK_OFFSET(0x1DFFAF70)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_WRITE_OFFSET UNITYSDK_OFFSET(0x1DFFAAD0)
#define MIHOYO_SDK_APMC_LOGBACK_CONFIG_OFFSET UNITYSDK_OFFSET(0x1DFFA1F0)
#define MIHOYO_SDK_APMC_LOGBACK_FLUSH_OFFSET UNITYSDK_OFFSET(0x1DFFAC60)
#define MIHOYO_SDK_APMC_LOGBACK_UPLOAD_OFFSET UNITYSDK_OFFSET(0x1DFFAE10)
#define MIHOYO_SDK_APMC_LOGBACK_WRITE_OFFSET UNITYSDK_OFFSET(0x1DFFA870)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_TypeDefinitionIndex = 37543;

	class APMC_LOGBACK : public ::System::Object
	{
	public:
		// static const ::System::String* PUBLIC_TOKEN; // 0x0
		// static const ::System::String* LOG_LEVEL; // 0x0
		// static const ::System::String* SINGLE_FILE_MAX_SIZE; // 0x0
		// static const ::System::String* EXPIRED_DAYS; // 0x0
		// static const ::System::String* MAX_CACHE_SIZE; // 0x0
		// static const ::System::String* ENABLE_RETRIEVE; // 0x0

		static ::System::Void Config(::MiHoYo::SDK::APMC_LOGBACK_LogProactiveUploadConfig* uploadConfig, ::MiHoYo::SDK::APMC_LOGBACK_LogRetrieveConfig* retrieveConfig)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::APMC_LOGBACK_LogProactiveUploadConfig*, ::MiHoYo::SDK::APMC_LOGBACK_LogRetrieveConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_CONFIG_OFFSET))(uploadConfig, retrieveConfig);
		}

		static ::System::Int32 Write(::System::Int32 level, ::System::String* loginfo, ::System::String* moduleinfo, ::System::String* tag, ::System::String* filename, ::System::String* funcname, ::System::Int32 line)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_WRITE_OFFSET))(level, loginfo, moduleinfo, tag, filename, funcname, line);
		}

		static ::System::Void Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_FLUSH_OFFSET))();
		}

		static ::System::Void Upload(::System::String* attachment)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_UPLOAD_OFFSET))(attachment);
		}

		static ::System::Void Astrolabe_LogPluginSetUploadSeperateConfig(::MiHoYo::SDK::APMC_LOGBACK_LogNativeProactiveUploadConfig& proactiveUploadConfig, ::MiHoYo::SDK::APMC_LOGBACK_LogNativeRetrieveConfig& retrieveConfig)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::APMC_LOGBACK_LogNativeProactiveUploadConfig&, ::MiHoYo::SDK::APMC_LOGBACK_LogNativeRetrieveConfig&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_LOGPLUGINSETUPLOADSEPERATECONFIG_OFFSET))(proactiveUploadConfig, retrieveConfig);
		}

		static ::System::Int32 Astrolabe_Native_Write(::MiHoYo::SDK::APMC_LOGBACK_LogInfo& info)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::APMC_LOGBACK_LogInfo&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_WRITE_OFFSET))(info);
		}

		static ::System::Void Astrolabe_Native_Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_FLUSH_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_DisableCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_DISABLECALLBACK_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_Upload(::System::String* attachment)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_UPLOAD_OFFSET))(attachment);
		}
	};
}
