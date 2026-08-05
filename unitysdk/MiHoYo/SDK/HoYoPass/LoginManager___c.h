#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnWebViewPageClose; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7C1180)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C11C0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__OPENURLWITHLOGINSTATUS_B__38_2_OFFSET UNITYSDK_OFFSET(0x1C7C11D0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__SHOWACCOUNTLISTWINDOW_B__58_4_OFFSET UNITYSDK_OFFSET(0x1C7C1290)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 20421;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Web_OnWebViewPageClose** StaticGet___9__38_2()
		{
			return (::MiHoYo::SDK::Web_OnWebViewPageClose**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0xAE80);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__58_4()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0xAE88);
		}
		static ::MiHoYo::SDK::HoYoPass::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoPass::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0xAE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUrlWithLoginStatus_b__38_2(::MiHoYo::SDK::Web* Web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__OPENURLWITHLOGINSTATUS_B__38_2_OFFSET))(this, Web);
		}

		::System::Void _ShowAccountListWindow_b__58_4(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__SHOWACCOUNTLISTWINDOW_B__58_4_OFFSET))(this, aid);
		}
	};
}
