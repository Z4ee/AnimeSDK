#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnWebViewPageBeforeHide; }

#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEAC850)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAC890)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__OPENWEBPAGE_B__7_1_OFFSET UNITYSDK_OFFSET(0x1AEAC8A0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager___c_TypeDefinitionIndex = 8303;

	class WebPageManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::WebPageManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoPass::WebPageManager___c**)Il2CppClass::FromTypeDefinitionIndex(WebPageManager___c_TypeDefinitionIndex)->GetStaticField(0x14C50);
		}
		static ::MiHoYo::SDK::Web_OnWebViewPageBeforeHide** StaticGet___9__7_1()
		{
			return (::MiHoYo::SDK::Web_OnWebViewPageBeforeHide**)Il2CppClass::FromTypeDefinitionIndex(WebPageManager___c_TypeDefinitionIndex)->GetStaticField(0x14C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenWebPage_b__7_1(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__OPENWEBPAGE_B__7_1_OFFSET))(this, a1);
		}
	};
}
