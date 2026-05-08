#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SdkReport/BuryPointType.h"
#include "unitysdk/MiHoYo/SDK/SdkReport/EventType.h"
#include "unitysdk/MiHoYo/SDK/SdkReport/StageType.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class MiHoYoSDKWebViewManager; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataSequence; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class AnalyzerResult_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BEGIN_OFFSET UNITYSDK_OFFSET(0x19FB9860)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_1_OFFSET UNITYSDK_OFFSET(0x19FB8130)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_OFFSET UNITYSDK_OFFSET(0x19FB80B0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x19FB9DB0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_END_OFFSET UNITYSDK_OFFSET(0x19FB99C0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_EVENT_OFFSET UNITYSDK_OFFSET(0x19FB9440)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETEVENTNAME_OFFSET UNITYSDK_OFFSET(0x19FB9620)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETSTAGENAME_OFFSET UNITYSDK_OFFSET(0x19FB97E0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GET_USERINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x19FB7200)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEGUIEEVENTSIFNEED_OFFSET UNITYSDK_OFFSET(0x19FB85F0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEPAINTIFNEED_OFFSET UNITYSDK_OFFSET(0x19FB9FF0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEREPORTSFROMWEBVIEW_OFFSET UNITYSDK_OFFSET(0x19FB8DB0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEUPDATEIFNEED_OFFSET UNITYSDK_OFFSET(0x19FB83C0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_ITEM_OFFSET UNITYSDK_OFFSET(0x19FB9B20)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_LASTENDEDITEM_OFFSET UNITYSDK_OFFSET(0x19FB9C70)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTER_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x19FB7F90)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x19FBA270)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORT_OFFSET UNITYSDK_OFFSET(0x19FB9E40)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STAGE_OFFSET UNITYSDK_OFFSET(0x19FB9670)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STARTAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x19FB7E90)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STOPAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x19FB9520)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_USEDEFAULTAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x19FB7D00)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FBAB30)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB72A0)

namespace MiHoYo::SDK::SdkReport
{
	inline static constexpr unsigned int SdkReportCenter_TypeDefinitionIndex = 35405;

	class SdkReportCenter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SdkReport::SdkReportCenter** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::SdkReport::SdkReportCenter**)Il2CppClass::FromTypeDefinitionIndex(SdkReportCenter_TypeDefinitionIndex)->GetStaticField(0x26560);
		}
		// static const ::System::String* UserInputEventName; // 0x0
		// static const ::System::String* BrowserRenderTimeEventName; // 0x0
		// static const ::System::String* UnityFrameTimeEventName; // 0x0
		// static const ::System::String* LButtonDown; // 0x0
		// static const ::System::String* LButtonUp; // 0x0
		// static const ::System::String* MButtonDown; // 0x0
		// static const ::System::String* MButtonUp; // 0x0
		// static const ::System::String* RButtonDown; // 0x0
		// static const ::System::String* RButtonUp; // 0x0
		// static const ::System::String* KeyDown; // 0x0
		// static const ::System::String* KeyUp; // 0x0
		// static const ::System::String* FrameInBrowser; // 0x0
		// static const ::System::String* FrameToScreen; // 0x0
		// static const ::System::String* FrameTotalGame; // 0x0
		// static const ::System::Int64 FrameTimeAutoReportInterval = 0xEA60; // 0x0
		// static const ::System::String* LButtonGameName; // 0x0
		// static const ::System::String* RButtonGameName; // 0x0
		// static const ::System::String* MButtonGameName; // 0x0
		::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::SdkReport::EventType, ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::SdkReport::StageType, ::System::String*>*>* nameDic; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent* get_UserInputEvent()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GET_USERINPUTEVENT_OFFSET))(this);
		}

		::System::Void UseDefaultAutoReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_USEDEFAULTAUTOREPORT_OFFSET))(this);
		}

		::System::Void Reporter_AutoReport(::MiHoYo::SDK::ReporterUtil::ReporterEvent* sender, ::System::String* stageName, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTER_AUTOREPORT_OFFSET))(this, sender, stageName, result);
		}

		::System::Void BuryPoint(::System::Object* sender, ::MiHoYo::SDK::SdkReport::BuryPointType type, ::System::Int32 eventId, ::System::Int64 param1, ::System::Int64 param2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::SdkReport::BuryPointType, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_OFFSET))(this, sender, type, eventId, param1, param2);
		}

		::System::Void BuryPoint_1(::MiHoYo::SDK::MiHoYoSDKWebViewManager* webViewManager, ::MiHoYo::SDK::SdkReport::BuryPointType type, ::System::Int32 eventId, ::System::Int64 param1, ::System::Int64 param2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::MiHoYo::SDK::SdkReport::BuryPointType, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_1_OFFSET))(this, webViewManager, type, eventId, param1, param2);
		}

		::System::Void StartAutoReport(::MiHoYo::SDK::SdkReport::EventType eventType, ::System::Int64 interval)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STARTAUTOREPORT_OFFSET))(this, eventType, interval);
		}

		::System::Void StopAutoReport(::MiHoYo::SDK::SdkReport::EventType eventType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STOPAUTOREPORT_OFFSET))(this, eventType);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent* Event(::MiHoYo::SDK::SdkReport::EventType eventType)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_EVENT_OFFSET))(this, eventType);
		}

		::System::String* GetEventName(::MiHoYo::SDK::SdkReport::EventType et)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETEVENTNAME_OFFSET))(this, et);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* Stage(::MiHoYo::SDK::SdkReport::EventType eventType, ::MiHoYo::SDK::SdkReport::StageType stageType)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STAGE_OFFSET))(this, eventType, stageType);
		}

		::System::String* GetStageName(::MiHoYo::SDK::SdkReport::EventType et, ::MiHoYo::SDK::SdkReport::StageType st)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETSTAGENAME_OFFSET))(this, et, st);
		}

		::System::Void Begin(::MiHoYo::SDK::SdkReport::EventType et, ::MiHoYo::SDK::SdkReport::StageType st, ::System::Int32 eventOwnerId, ::System::Nullable_1<::System::DateTime> utcTime)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BEGIN_OFFSET))(this, et, st, eventOwnerId, utcTime);
		}

		::System::Void End(::MiHoYo::SDK::SdkReport::EventType et, ::MiHoYo::SDK::SdkReport::StageType st, ::System::Int32 eventOwnerId, ::System::Nullable_1<::System::DateTime> utcTime)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_END_OFFSET))(this, et, st, eventOwnerId, utcTime);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Item(::MiHoYo::SDK::SdkReport::EventType et, ::MiHoYo::SDK::SdkReport::StageType st, ::System::Int32 index)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_ITEM_OFFSET))(this, et, st, index);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* LastEndedItem(::MiHoYo::SDK::SdkReport::EventType et, ::MiHoYo::SDK::SdkReport::StageType st)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_LASTENDEDITEM_OFFSET))(this, et, st);
		}

		::System::Void ClearData(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_CLEARDATA_OFFSET))(this, eventName);
		}

		::System::Void HandleUpdateIfNeed(::MiHoYo::SDK::MiHoYoSDKWebViewManager* webViewManager)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEUPDATEIFNEED_OFFSET))(this, webViewManager);
		}

		::System::Void HandleGUIEeventsIfNeed(::MiHoYo::SDK::MiHoYoSDKWebViewManager* webViewManager)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEGUIEEVENTSIFNEED_OFFSET))(this, webViewManager);
		}

		::System::Void HandleReportsFromWebView(::MiHoYo::SDK::MiHoYoSDKWebViewManager* webViewManager, ::System::Int32 eventId, ::System::Int64 param1, ::System::Int64 param2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEREPORTSFROMWEBVIEW_OFFSET))(this, webViewManager, eventId, param1, param2);
		}

		::System::Void HandlePaintIfNeed(::MiHoYo::SDK::MiHoYoSDKWebViewManager* webViewManager, ::System::Boolean isBegin)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEPAINTIFNEED_OFFSET))(this, webViewManager, isBegin);
		}

		::System::Void ReportPerformanceInfo(::MiHoYo::SDK::JSONNode* reportJson, ::System::String* url, ::System::Double ramCapacity, ::System::String* webViewLaunchId)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTPERFORMANCEINFO_OFFSET))(this, reportJson, url, ramCapacity, webViewLaunchId);
		}

		::System::Void Report(::MiHoYo::SDK::MiHoYoSDKWebViewManager* webViewManager, ::MiHoYo::SDK::SdkReport::EventType eventType, ::MiHoYo::SDK::SdkReport::StageType stageType, ::System::Int64 duration)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORT_OFFSET))(this, webViewManager, eventType, stageType, duration);
		}
	};
}
