#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnWebViewPageBeforeHide; }

#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F13750)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F13790)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__OPENWEBPAGE_B__7_1_OFFSET UNITYSDK_OFFSET(0x15F137A0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager___c_TypeDefinitionIndex = 7325;

	class WebPageManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Web_OnWebViewPageBeforeHide** StaticGet___9__7_1()
		{
			return (::MiHoYo::SDK::Web_OnWebViewPageBeforeHide**)Il2CppClass::FromTypeDefinitionIndex(WebPageManager___c_TypeDefinitionIndex)->GetStaticField(0x14150);
		}
		static ::MiHoYo::SDK::HoYoPass::WebPageManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoPass::WebPageManager___c**)Il2CppClass::FromTypeDefinitionIndex(WebPageManager___c_TypeDefinitionIndex)->GetStaticField(0x14158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenWebPage_b__7_1(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER___C__OPENWEBPAGE_B__7_1_OFFSET))(this, web);
		}
	};
}
