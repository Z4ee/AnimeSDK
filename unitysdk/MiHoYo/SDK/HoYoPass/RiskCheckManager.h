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

#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CLOSEGEETESTV4WEBVIEW_OFFSET UNITYSDK_OFFSET(0x1B977A80)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_1_OFFSET UNITYSDK_OFFSET(0x1B977090)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_2_OFFSET UNITYSDK_OFFSET(0x1B976C60)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_OFFSET UNITYSDK_OFFSET(0x1B95C8C0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ISGEETESTV4_OFFSET UNITYSDK_OFFSET(0x1B95C6F0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONGETGEETESTRESULT_OFFSET UNITYSDK_OFFSET(0x1B977200)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONPAGERESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B977460)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1B977BE0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1B977C30)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B977FF0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CREATERISKCHECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1B978040)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B977FE0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int RiskCheckManager_TypeDefinitionIndex = 8297;

	class RiskCheckManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::RiskCheckManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::RiskCheckManager**)Il2CppClass::FromTypeDefinitionIndex(RiskCheckManager_TypeDefinitionIndex)->GetStaticField(0x124D0);
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

		::System::Boolean IsGeetestV4(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ISGEETESTV4_OFFSET))(this, a1);
		}

		::System::Void CreateRiskCheck(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateRiskCheck_1(::MiHoYo::SDK::MmtManager_GeetestModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_1_OFFSET))(this, a1);
		}

		::System::Void CreateRiskCheck_2(::MiHoYo::SDK::PC::OS::GeetestV4Model* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::GeetestV4Model*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CREATERISKCHECK_2_OFFSET))(this, a1);
		}

		::System::Void OnGetGeetestResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONGETGEETESTRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void OnPageResultCallback(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONPAGERESULTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void CloseGeetestV4Webview(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_CLOSEGEETESTV4WEBVIEW_OFFSET))(this, a1);
		}

		::System::Void OnWebPageClose(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnWebPageError(::MiHoYo::SDK::Web* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER_ONWEBPAGEERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CreateRiskCheck_b__8_0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER__CREATERISKCHECK_B__8_0_OFFSET))(this, a1, a2);
		}
	};
}
