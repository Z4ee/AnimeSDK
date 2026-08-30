#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class LoginByAccount; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD69510)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD69550)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__SHOW_B__60_0_OFFSET UNITYSDK_OFFSET(0x1CD69560)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int LoginByAccount___c_TypeDefinitionIndex = 8382;

	class LoginByAccount___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*>** StaticGet___9__60_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*>**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccount___c_TypeDefinitionIndex)->GetStaticField(0x25F20);
		}
		static ::MiHoYo::SDK::UI::Internal::OS::LoginByAccount___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::LoginByAccount___c**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccount___c_TypeDefinitionIndex)->GetStaticField(0x25F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__60_0(::MiHoYo::SDK::UI::Internal::OS::LoginByAccount* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::LoginByAccount*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT___C__SHOW_B__60_0_OFFSET))(this, a1);
		}
	};
}
