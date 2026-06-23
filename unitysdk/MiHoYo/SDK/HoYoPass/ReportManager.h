#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ReportActionId.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ReportLevel.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ReportStage.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ReportType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/ReportManager_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_BUSINESSREPORT_OFFSET UNITYSDK_OFFSET(0x1BF65A60)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_DEBUG_OFFSET UNITYSDK_OFFSET(0x1BF66E60)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_ERROR_OFFSET UNITYSDK_OFFSET(0x1BF67040)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_GETMINORLOGSTOREURL_OFFSET UNITYSDK_OFFSET(0x1BF65FD0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_H5LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1BF67130)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_INFO_OFFSET UNITYSDK_OFFSET(0x1BF66D70)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PARSEANDREPORT_OFFSET UNITYSDK_OFFSET(0x1BF671E0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PREPBUSINESSREPORT_OFFSET UNITYSDK_OFFSET(0x1BF666A0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_REPORTBYLEVEL_OFFSET UNITYSDK_OFFSET(0x1BF67410)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_SETREPORTTARGET_OFFSET UNITYSDK_OFFSET(0x1BF65B10)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_VALIDATECONTENT_OFFSET UNITYSDK_OFFSET(0x1BF66AA0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_WARNING_OFFSET UNITYSDK_OFFSET(0x1BF66F50)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF674C0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF674B0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int ReportManager_TypeDefinitionIndex = 20109;

	class ReportManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::ReportManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::ReportManager**)Il2CppClass::FromTypeDefinitionIndex(ReportManager_TypeDefinitionIndex)->GetStaticField(0xA150);
		}
		// static const ::System::String* SUPER_MODULE; // 0x0
		// static const ::System::String* CPP_MODULE; // 0x0
		// static const ::System::String* REPORT_ACTION_ID; // 0x0
		// static const ::System::String* MODULE; // 0x0
		// static const ::System::String* REPORT_TYPE; // 0x0
		// static const ::System::String* REPORT_STAGE; // 0x0
		// static const ::System::String* REPORT_DATA; // 0x0
		// static const ::System::String* EVENT_NAME; // 0x0
		// static const ::System::String* TK_CODE; // 0x0
		// static const ::System::String* TK_MESSAGE; // 0x0
		// static const ::System::String* MESSAGE; // 0x0
		// static const ::System::String* MINOR_LOG_STORE_TOPIC; // 0x0
		// static const ::System::String* MINOR_LOG_STORE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void BusinessReport(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_BUSINESSREPORT_OFFSET))(this, content);
		}

		::System::Void SetReportTarget(::MiHoYo::SDK::HoYoPass::ReportManager_LogLevel strategy)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::ReportManager_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_SETREPORTTARGET_OFFSET))(this, strategy);
		}

		::System::String* GetMinorLogStoreUrl(::System::String* url, ::System::String* storeName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_GETMINORLOGSTOREURL_OFFSET))(this, url, storeName);
		}

		::System::Void PrepBusinessReport(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId actionId, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportType reportType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportStage reportStage, ::MiHoYo::SDK::JSONObject* cBody)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportStage, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PREPBUSINESSREPORT_OFFSET))(this, actionId, reportType, reportStage, cBody);
		}

		::System::Boolean ValidateContent(::MiHoYo::SDK::JSONNode* content)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_VALIDATECONTENT_OFFSET))(this, content);
		}

		::System::Void Info(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_INFO_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void Debug(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_DEBUG_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void Warning(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_WARNING_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void Error(::System::String* module, ::System::String* eventName, ::System::String* msg, ::System::Int32 tkCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_ERROR_OFFSET))(this, module, eventName, msg, tkCode);
		}

		::System::Void H5logReport(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_H5LOGREPORT_OFFSET))(this, content);
		}

		::System::Void ParseAndReport(::MiHoYo::SDK::JSONNode* content)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PARSEANDREPORT_OFFSET))(this, content);
		}

		::System::Void ReportByLevel(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportLevel level, ::System::String* module, ::System::String* eventName, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportLevel, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_REPORTBYLEVEL_OFFSET))(this, level, module, eventName, msg);
		}
	};
}
