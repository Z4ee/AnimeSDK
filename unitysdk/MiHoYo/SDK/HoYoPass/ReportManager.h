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

#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_BUSINESSREPORT_OFFSET UNITYSDK_OFFSET(0x1833AFA0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_DEBUG_OFFSET UNITYSDK_OFFSET(0x1833BC50)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_ERROR_OFFSET UNITYSDK_OFFSET(0x18312210)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_GETMINORLOGSTOREURL_OFFSET UNITYSDK_OFFSET(0x1833B080)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_H5LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1833BDE0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_INFO_OFFSET UNITYSDK_OFFSET(0x18313350)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PARSEANDREPORT_OFFSET UNITYSDK_OFFSET(0x1833BEC0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PREPBUSINESSREPORT_OFFSET UNITYSDK_OFFSET(0x1833B6B0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_REPORTBYLEVEL_OFFSET UNITYSDK_OFFSET(0x1833C410)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_SETREPORTTARGET_OFFSET UNITYSDK_OFFSET(0x18312D00)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_VALIDATECONTENT_OFFSET UNITYSDK_OFFSET(0x1833B990)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER_WARNING_OFFSET UNITYSDK_OFFSET(0x18310C30)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1833C4C0)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1833C4B0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int ReportManager_TypeDefinitionIndex = 8280;

	class ReportManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::ReportManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::ReportManager**)Il2CppClass::FromTypeDefinitionIndex(ReportManager_TypeDefinitionIndex)->GetStaticField(0x13880);
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

		::System::Void BusinessReport(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_BUSINESSREPORT_OFFSET))(this, a1);
		}

		::System::Void SetReportTarget(::MiHoYo::SDK::HoYoPass::ReportManager_LogLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::ReportManager_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_SETREPORTTARGET_OFFSET))(this, a1);
		}

		::System::String* GetMinorLogStoreUrl(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_GETMINORLOGSTOREURL_OFFSET))(this, a1, a2);
		}

		::System::Void PrepBusinessReport(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId a1, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportType a2, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportStage a3, ::MiHoYo::SDK::JSONObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportType, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportStage, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PREPBUSINESSREPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ValidateContent(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_VALIDATECONTENT_OFFSET))(this, a1);
		}

		::System::Void Info(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_INFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Debug(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_DEBUG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Warning(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_WARNING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Error(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_ERROR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void H5logReport(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_H5LOGREPORT_OFFSET))(this, a1);
		}

		::System::Void ParseAndReport(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_PARSEANDREPORT_OFFSET))(this, a1);
		}

		::System::Void ReportByLevel(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportLevel a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportLevel, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER_REPORTBYLEVEL_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
