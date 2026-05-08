#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class RiskCheckManager; }
namespace MiHoYo::SDK::PC::OS { class GeetestV4Model; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CREATERISKCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x1A17A710)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CREATERISKCHECK_B__1_OFFSET UNITYSDK_OFFSET(0x1A17ABE0)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CREATERISKCHECK_B__2_OFFSET UNITYSDK_OFFSET(0x1A17AC60)
#define MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17A700)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int RiskCheckManager___c__DisplayClass9_0_TypeDefinitionIndex = 19198;

	class RiskCheckManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::GeetestV4Model* aigisParams; // 0x10
		::MiHoYo::SDK::HoYoPass::RiskCheckManager* __4__this; // 0x18
		::MiHoYo::SDK::Web* geetestV4Web; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateRiskCheck_b__0(::MiHoYo::SDK::Web* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CREATERISKCHECK_B__0_OFFSET))(this, webView);
		}

		::System::Void _CreateRiskCheck_b__1(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CREATERISKCHECK_B__1_OFFSET))(this, node);
		}

		::System::Void _CreateRiskCheck_b__2(::MiHoYo::SDK::Web* web, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_RISKCHECKMANAGER___C__DISPLAYCLASS9_0__CREATERISKCHECK_B__2_OFFSET))(this, web, url, errorCode, errorMessage);
		}
	};
}
