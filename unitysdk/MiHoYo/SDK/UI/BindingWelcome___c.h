#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class BindingWelcome; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_BINDINGWELCOME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF4C3B0)
#define MIHOYO_SDK_UI_BINDINGWELCOME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF4C3F0)
#define MIHOYO_SDK_UI_BINDINGWELCOME___C__SHOW_B__36_0_OFFSET UNITYSDK_OFFSET(0x1CF4C400)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int BindingWelcome___c_TypeDefinitionIndex = 20500;

	class BindingWelcome___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::BindingWelcome___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::BindingWelcome___c**)Il2CppClass::FromTypeDefinitionIndex(BindingWelcome___c_TypeDefinitionIndex)->GetStaticField(0xA970);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::BindingWelcome*>** StaticGet___9__36_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::BindingWelcome*>**)Il2CppClass::FromTypeDefinitionIndex(BindingWelcome___c_TypeDefinitionIndex)->GetStaticField(0xA978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__36_0(::MiHoYo::SDK::UI::BindingWelcome* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::BindingWelcome*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME___C__SHOW_B__36_0_OFFSET))(this, dialog);
		}
	};
}
