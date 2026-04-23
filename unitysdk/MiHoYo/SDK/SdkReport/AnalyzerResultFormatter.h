#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class AnalyzerResult_1; }
namespace System { class String; }

#define MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_ANALYZERRESULTTOJSON_OFFSET UNITYSDK_OFFSET(0x8DB0680)
#define MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_BUILDJSON_1_OFFSET UNITYSDK_OFFSET(0x8DB0580)
#define MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_BUILDJSON_OFFSET UNITYSDK_OFFSET(0x8DB03C0)
#define MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_CREATEEMPTYNOTE_OFFSET UNITYSDK_OFFSET(0x8DB0540)
#define MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_FILLHEADERS_OFFSET UNITYSDK_OFFSET(0x8DB0D20)
#define MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB10B0)

namespace MiHoYo::SDK::SdkReport
{
	inline static constexpr unsigned int AnalyzerResultFormatter_TypeDefinitionIndex = 43190;

	class AnalyzerResultFormatter : public ::System::Object
	{
	public:
		// static const ::System::String* NodeNameLogTime; // 0x0
		// static const ::System::String* NodeNamePerformanceType; // 0x0
		// static const ::System::String* NodeNameAppLaunchId; // 0x0
		// static const ::System::String* NodeNameWebViewUrl; // 0x0
		// static const ::System::String* NodeNameWebViewLaunchId; // 0x0
		// static const ::System::String* NodeNameMainAvg; // 0x0
		// static const ::System::String* NodeNameFractionAvg; // 0x0
		// static const ::System::String* NodeNameDuration; // 0x0
		// static const ::System::String* NodeNameEvent; // 0x0
		// static const ::System::String* NodeNameStage; // 0x0
		// static const ::System::String* NodeNameSamplesCount; // 0x0
		// static const ::System::String* NodeNameRenderMethod; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* BuildJSON(::System::String* eventName, ::System::String* stageName, ::System::Int64 duration, ::MiHoYo::SDK::JSONNode* node)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_BUILDJSON_OFFSET))(this, eventName, stageName, duration, node);
		}

		::MiHoYo::SDK::JSONNode* BuildJSON_1(::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* result, ::System::String* eventName, ::System::String* stageName, ::MiHoYo::SDK::JSONNode* node)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*, ::System::String*, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_BUILDJSON_1_OFFSET))(this, result, eventName, stageName, node);
		}

		::MiHoYo::SDK::JSONNode* CreateEmptyNote()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_CREATEEMPTYNOTE_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* FillHeaders(::System::String* url, ::System::String* webViewLaunchId, ::MiHoYo::SDK::JSONNode* node)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_FILLHEADERS_OFFSET))(this, url, webViewLaunchId, node);
		}

		::MiHoYo::SDK::JSONNode* AnalyzerResultToJson(::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* result, ::MiHoYo::SDK::JSONNode* node)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ANALYZERRESULTFORMATTER_ANALYZERRESULTTOJSON_OFFSET))(this, result, node);
		}
	};
}
