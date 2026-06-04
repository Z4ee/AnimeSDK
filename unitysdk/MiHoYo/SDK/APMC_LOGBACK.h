#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/APMC_LOGBACK_LogInfo.h"
#include "unitysdk/MiHoYo/SDK/APMC_LOGBACK_LogNativeProactiveUploadConfig.h"
#include "unitysdk/MiHoYo/SDK/APMC_LOGBACK_LogNativeRetrieveConfig.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class APMC_LOGBACK_LogProactiveUploadConfig; }
namespace MiHoYo::SDK { class APMC_LOGBACK_LogRetrieveConfig; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_LOGPLUGINSETUPLOADSEPERATECONFIG_OFFSET UNITYSDK_OFFSET(0xA1337B0)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_DISABLECALLBACK_OFFSET UNITYSDK_OFFSET(0xA133730)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_FLUSH_OFFSET UNITYSDK_OFFSET(0xA133D20)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_UPLOAD_OFFSET UNITYSDK_OFFSET(0xA133F00)
#define MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_WRITE_OFFSET UNITYSDK_OFFSET(0xA133960)
#define MIHOYO_SDK_APMC_LOGBACK_CONFIG_OFFSET UNITYSDK_OFFSET(0xA1330E0)
#define MIHOYO_SDK_APMC_LOGBACK_FLUSH_OFFSET UNITYSDK_OFFSET(0xA133BF0)
#define MIHOYO_SDK_APMC_LOGBACK_UPLOAD_OFFSET UNITYSDK_OFFSET(0xA133DA0)
#define MIHOYO_SDK_APMC_LOGBACK_WRITE_OFFSET UNITYSDK_OFFSET(0xA133830)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_TypeDefinitionIndex = 43907;

	class APMC_LOGBACK : public ::System::Object
	{
	public:
		// static const ::System::String* PUBLIC_TOKEN; // 0x0
		// static const ::System::String* LOG_LEVEL; // 0x0
		// static const ::System::String* SINGLE_FILE_MAX_SIZE; // 0x0
		// static const ::System::String* EXPIRED_DAYS; // 0x0
		// static const ::System::String* MAX_CACHE_SIZE; // 0x0
		// static const ::System::String* ENABLE_RETRIEVE; // 0x0

		static ::System::Void Config(::MiHoYo::SDK::APMC_LOGBACK_LogProactiveUploadConfig* a1, ::MiHoYo::SDK::APMC_LOGBACK_LogRetrieveConfig* a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::APMC_LOGBACK_LogProactiveUploadConfig*, ::MiHoYo::SDK::APMC_LOGBACK_LogRetrieveConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_CONFIG_OFFSET))(a1, a2);
		}

		static ::System::Int32 Write(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_WRITE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_FLUSH_OFFSET))();
		}

		static ::System::Void Upload(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_UPLOAD_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_LogPluginSetUploadSeperateConfig(::MiHoYo::SDK::APMC_LOGBACK_LogNativeProactiveUploadConfig& a1, ::MiHoYo::SDK::APMC_LOGBACK_LogNativeRetrieveConfig& a2)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::APMC_LOGBACK_LogNativeProactiveUploadConfig&, ::MiHoYo::SDK::APMC_LOGBACK_LogNativeRetrieveConfig&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_LOGPLUGINSETUPLOADSEPERATECONFIG_OFFSET))(a1, a2);
		}

		static ::System::Int32 Astrolabe_Native_Write(::MiHoYo::SDK::APMC_LOGBACK_LogInfo& a1)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::APMC_LOGBACK_LogInfo&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_WRITE_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_FLUSH_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_DisableCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_DISABLECALLBACK_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_Upload(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_ASTROLABE_NATIVE_UPLOAD_OFFSET))(a1);
		}
	};
}
