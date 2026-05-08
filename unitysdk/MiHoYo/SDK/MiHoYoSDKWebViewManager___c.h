#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser_VisibleChangedDelegate; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D18860)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D188A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__INIT_B__147_0_OFFSET UNITYSDK_OFFSET(0x18D188B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___c_TypeDefinitionIndex = 35393;

	class MiHoYoSDKWebViewManager___c : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::Browser_VisibleChangedDelegate** StaticGet___9__147_0()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Browser_VisibleChangedDelegate**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewManager___c_TypeDefinitionIndex)->GetStaticField(0x26C20);
		}
		static ::MiHoYo::SDK::MiHoYoSDKWebViewManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDKWebViewManager___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewManager___c_TypeDefinitionIndex)->GetStaticField(0x26C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__147_0(::ZenFulcrum::EmbeddedBrowser::Browser* sender, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEWMANAGER___C__INIT_B__147_0_OFFSET))(this, sender, visible);
		}
	};
}
