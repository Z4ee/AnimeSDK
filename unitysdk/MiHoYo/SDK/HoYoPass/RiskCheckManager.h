#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::PC::OS { class GeetestV4Model; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CLOSEGEETESTV4WEBVIEW_OFFSET UNITYSDK_OFFSET(0x1999ADB0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_1_OFFSET UNITYSDK_OFFSET(0x1999A5F0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_2_OFFSET UNITYSDK_OFFSET(0x1999A230)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_OFFSET UNITYSDK_OFFSET(0x1999A070)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ISGEETESTV4_OFFSET UNITYSDK_OFFSET(0x19999FE0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONGETGEETESTRESULT_OFFSET UNITYSDK_OFFSET(0x1999A730)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONPAGERESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1999A980)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1999AEB0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1999AF00)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1999B2F0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CREATERISKCHECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1999B340)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1999B2E0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int RiskCheckManager_TypeDefinitionIndex = 19197;

	class RiskCheckManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::RiskCheckManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::RiskCheckManager**)Il2CppClass::FromTypeDefinitionIndex(RiskCheckManager_TypeDefinitionIndex)->GetStaticField(0xAEF0);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* USE_V4; // 0x0
		::System::Action* OnRiskCheckCanceled; // 0x10
		::System::Action_1<::System::String*>* OnRiskCheckCompletes; // 0x18
		::System::Boolean riskCheckInProgress; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean IsGeetestV4(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ISGEETESTV4_OFFSET))(this, data);
		}

		::System::Void CreateRiskCheck(::System::String* aigisStr, ::System::String* sessionId, ::System::Boolean useV4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_OFFSET))(this, aigisStr, sessionId, useV4);
		}

		::System::Void CreateRiskCheck_1(::MiHoYo::SDK::MmtManager_GeetestModel* aigisParams)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_1_OFFSET))(this, aigisParams);
		}

		::System::Void CreateRiskCheck_2(::MiHoYo::SDK::PC::OS::GeetestV4Model* aigisParams)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GeetestV4Model*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_2_OFFSET))(this, aigisParams);
		}

		::System::Void OnGetGeetestResult(::System::Int32 code, ::System::String* resultStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONGETGEETESTRESULT_OFFSET))(this, code, resultStr);
		}

		::System::Void OnPageResultCallback(::MiHoYo::SDK::Web* webview, ::MiHoYo::SDK::JSONNode* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONPAGERESULTCALLBACK_OFFSET))(this, webview, parameters);
		}

		::System::Void CloseGeetestV4Webview(::MiHoYo::SDK::Web* webview)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CLOSEGEETESTV4WEBVIEW_OFFSET))(this, webview);
		}

		::System::Void OnWebPageClose(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGECLOSE_OFFSET))(this, web);
		}

		::System::Void OnWebPageError(::MiHoYo::SDK::Web* webview, ::System::Int32 retcode, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGEERROR_OFFSET))(this, webview, retcode, message);
		}

		::System::Void _CreateRiskCheck_b__8_0(::System::Int32 code, ::System::String* mmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CREATERISKCHECK_B__8_0_OFFSET))(this, code, mmt);
		}
	};
}
