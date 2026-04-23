#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1754C800)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1754C840)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__SHOWACCOUNTLISTWINDOW_B__53_4_OFFSET UNITYSDK_OFFSET(0x1754C850)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 7360;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoPass::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x18D90);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__53_4()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x18D98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAccountListWindow_b__53_4(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__SHOWACCOUNTLISTWINDOW_B__53_4_OFFSET))(this, aid);
		}
	};
}
