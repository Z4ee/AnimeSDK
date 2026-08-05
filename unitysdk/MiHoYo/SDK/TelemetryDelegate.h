#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class TelemetryDelegate_InitDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_SetConfigDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopKibanaDelegate; }

#define MIHOYO_SDK_TELEMETRYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BA600)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_TypeDefinitionIndex = 19802;

	class TelemetryDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate** StaticGet_StartKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC30);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate** StaticGet_StopKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC38);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate** StaticGet_StopDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC40);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate** StaticGet_ReportToDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC48);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC50);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate** StaticGet_ReportToKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC58);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate** StaticGet_SetConfig()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC60);
		}
		static ::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate** StaticGet_StartDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate**)Il2CppClass::FromTypeDefinitionIndex(TelemetryDelegate_TypeDefinitionIndex)->GetStaticField(0xAC68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
