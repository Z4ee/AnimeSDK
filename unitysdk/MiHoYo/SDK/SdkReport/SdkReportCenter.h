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

#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1C6C0910)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_1_OFFSET UNITYSDK_OFFSET(0x1C6BF820)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_OFFSET UNITYSDK_OFFSET(0x1C6BF780)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1C6C0E60)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_END_OFFSET UNITYSDK_OFFSET(0x1C6C0A70)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_EVENT_OFFSET UNITYSDK_OFFSET(0x1C6C0540)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETEVENTNAME_OFFSET UNITYSDK_OFFSET(0x1C6C07A0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETSTAGENAME_OFFSET UNITYSDK_OFFSET(0x1C6C0890)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GET_USERINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1C6BE9D0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEGUIEEVENTSIFNEED_OFFSET UNITYSDK_OFFSET(0x1C6BF980)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEPAINTIFNEED_OFFSET UNITYSDK_OFFSET(0x1C6C1080)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEREPORTSFROMWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1C6BFED0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEUPDATEIFNEED_OFFSET UNITYSDK_OFFSET(0x1C6BF890)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_ITEM_OFFSET UNITYSDK_OFFSET(0x1C6C0BD0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_LASTENDEDITEM_OFFSET UNITYSDK_OFFSET(0x1C6C0D20)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTER_AUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6BF680)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x1C6C1200)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORT_OFFSET UNITYSDK_OFFSET(0x1C6C0EF0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STAGE_OFFSET UNITYSDK_OFFSET(0x1C6C07F0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STARTAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6BF650)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STOPAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6C0620)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_USEDEFAULTAUTOREPORT_OFFSET UNITYSDK_OFFSET(0x1C6BF4C0)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6C1A70)
#define MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BEA70)

namespace MiHoYo::SDK::SdkReport
{
	inline static constexpr unsigned int SdkReportCenter_TypeDefinitionIndex = 47095;

	class SdkReportCenter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SdkReport::SdkReportCenter** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::SdkReport::SdkReportCenter**)Il2CppClass::FromTypeDefinitionIndex(SdkReportCenter_TypeDefinitionIndex)->GetStaticField(0x58F80);
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

		::System::Void Reporter_AutoReport(::MiHoYo::SDK::ReporterUtil::ReporterEvent* a1, ::System::String* a2, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTER_AUTOREPORT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BuryPoint(::System::Object* a1, ::MiHoYo::SDK::SdkReport::BuryPointType a2, ::System::Int32 a3, ::System::Int64 a4, ::System::Int64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::SdkReport::BuryPointType, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BuryPoint_1(::MiHoYo::SDK::MiHoYoSDKWebViewManager* a1, ::MiHoYo::SDK::SdkReport::BuryPointType a2, ::System::Int32 a3, ::System::Int64 a4, ::System::Int64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::MiHoYo::SDK::SdkReport::BuryPointType, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BURYPOINT_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartAutoReport(::MiHoYo::SDK::SdkReport::EventType a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STARTAUTOREPORT_OFFSET))(this, a1, a2);
		}

		::System::Void StopAutoReport(::MiHoYo::SDK::SdkReport::EventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STOPAUTOREPORT_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterEvent* Event(::MiHoYo::SDK::SdkReport::EventType a1)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterEvent*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_EVENT_OFFSET))(this, a1);
		}

		::System::String* GetEventName(::MiHoYo::SDK::SdkReport::EventType a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETEVENTNAME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* Stage(::MiHoYo::SDK::SdkReport::EventType a1, ::MiHoYo::SDK::SdkReport::StageType a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_STAGE_OFFSET))(this, a1, a2);
		}

		::System::String* GetStageName(::MiHoYo::SDK::SdkReport::EventType a1, ::MiHoYo::SDK::SdkReport::StageType a2)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_GETSTAGENAME_OFFSET))(this, a1, a2);
		}

		::System::Void Begin(::MiHoYo::SDK::SdkReport::EventType a1, ::MiHoYo::SDK::SdkReport::StageType a2, ::System::Int32 a3, ::System::Nullable_1<::System::DateTime> a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_BEGIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void End(::MiHoYo::SDK::SdkReport::EventType a1, ::MiHoYo::SDK::SdkReport::StageType a2, ::System::Int32 a3, ::System::Nullable_1<::System::DateTime> a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int32, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_END_OFFSET))(this, a1, a2, a3, a4);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* Item(::MiHoYo::SDK::SdkReport::EventType a1, ::MiHoYo::SDK::SdkReport::StageType a2, ::System::Int32 a3)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_ITEM_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* LastEndedItem(::MiHoYo::SDK::SdkReport::EventType a1, ::MiHoYo::SDK::SdkReport::StageType a2)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_LASTENDEDITEM_OFFSET))(this, a1, a2);
		}

		::System::Void ClearData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_CLEARDATA_OFFSET))(this, a1);
		}

		::System::Void HandleUpdateIfNeed(::MiHoYo::SDK::MiHoYoSDKWebViewManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEUPDATEIFNEED_OFFSET))(this, a1);
		}

		::System::Void HandleGUIEeventsIfNeed(::MiHoYo::SDK::MiHoYoSDKWebViewManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEGUIEEVENTSIFNEED_OFFSET))(this, a1);
		}

		::System::Void HandleReportsFromWebView(::MiHoYo::SDK::MiHoYoSDKWebViewManager* a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEREPORTSFROMWEBVIEW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HandlePaintIfNeed(::MiHoYo::SDK::MiHoYoSDKWebViewManager* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_HANDLEPAINTIFNEED_OFFSET))(this, a1, a2);
		}

		::System::Void ReportPerformanceInfo(::MiHoYo::SDK::JSONNode* a1, ::System::String* a2, ::System::Double a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORTPERFORMANCEINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Report(::MiHoYo::SDK::MiHoYoSDKWebViewManager* a1, ::MiHoYo::SDK::SdkReport::EventType a2, ::MiHoYo::SDK::SdkReport::StageType a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebViewManager*, ::MiHoYo::SDK::SdkReport::EventType, ::MiHoYo::SDK::SdkReport::StageType, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SDKREPORTCENTER_REPORT_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
