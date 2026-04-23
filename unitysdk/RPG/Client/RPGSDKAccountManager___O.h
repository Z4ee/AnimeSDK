#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnUniWebViewMessageDelegate; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewPageBeforeHide; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewPageClose; }
namespace MiHoYo::SDK { class MiHoYoSDKWebView_OnWebViewPageFinish; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager___O_TypeDefinitionIndex = 56336;

	class RPGSDKAccountManager___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet__0____OnSwitchRoleResponse()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RPGSDKAccountManager___O_TypeDefinitionIndex)->GetStaticField(0x11980);
		}
		static ::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate** StaticGet__4____OnUniWebViewMessage()
		{
			return (::MiHoYo::SDK::MiHoYoSDKWebView_OnUniWebViewMessageDelegate**)Il2CppClass::FromTypeDefinitionIndex(RPGSDKAccountManager___O_TypeDefinitionIndex)->GetStaticField(0x11988);
		}
		static ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide** StaticGet__3____OnGetOnPageBeforeHide()
		{
			return (::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageBeforeHide**)Il2CppClass::FromTypeDefinitionIndex(RPGSDKAccountManager___O_TypeDefinitionIndex)->GetStaticField(0x11990);
		}
		static ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish** StaticGet__1____OnGetPageFinish()
		{
			return (::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageFinish**)Il2CppClass::FromTypeDefinitionIndex(RPGSDKAccountManager___O_TypeDefinitionIndex)->GetStaticField(0x11998);
		}
		static ::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose** StaticGet__2____OnGetPageClose()
		{
			return (::MiHoYo::SDK::MiHoYoSDKWebView_OnWebViewPageClose**)Il2CppClass::FromTypeDefinitionIndex(RPGSDKAccountManager___O_TypeDefinitionIndex)->GetStaticField(0x119A0);
		}
	};
}
