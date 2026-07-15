#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportEnumDefine_ActionIdType.h"
#include "unitysdk/MiHoYo/SDK/ReportEnumDefine_ReportStage.h"
#include "unitysdk/MiHoYo/SDK/ReportEnumDefine_ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }

#define MIHOYO_SDK_SDKGENERALREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x1ABA8710)
#define MIHOYO_SDK_SDKGENERALREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABA89F0)
#define MIHOYO_SDK_SDKGENERALREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA89E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SdkGeneralReport_TypeDefinitionIndex = 44761;

	class SdkGeneralReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SdkGeneralReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::SdkGeneralReport**)Il2CppClass::FromTypeDefinitionIndex(SdkGeneralReport_TypeDefinitionIndex)->GetStaticField(0x1BA00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKGENERALREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKGENERALREPORT__CCTOR_OFFSET))();
		}

		::System::Void Report(::MiHoYo::SDK::ReportEnumDefine_ActionIdType a1, ::MiHoYo::SDK::ReportEnumDefine_ReportType a2, ::MiHoYo::SDK::ReportEnumDefine_ReportStage a3, ::MiHoYo::SDK::JSONObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportEnumDefine_ActionIdType, ::MiHoYo::SDK::ReportEnumDefine_ReportType, ::MiHoYo::SDK::ReportEnumDefine_ReportStage, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKGENERALREPORT_REPORT_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
