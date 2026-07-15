#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class PS4BindEmailDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16411930)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16411970)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__SHOW_B__53_0_OFFSET UNITYSDK_OFFSET(0x16411980)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PS4BindEmailDialog___c_TypeDefinitionIndex = 8690;

	class PS4BindEmailDialog___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::PS4BindEmailDialog___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::PS4BindEmailDialog___c**)Il2CppClass::FromTypeDefinitionIndex(PS4BindEmailDialog___c_TypeDefinitionIndex)->GetStaticField(0x1AFC0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Console::PS4BindEmailDialog*>** StaticGet___9__53_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Console::PS4BindEmailDialog*>**)Il2CppClass::FromTypeDefinitionIndex(PS4BindEmailDialog___c_TypeDefinitionIndex)->GetStaticField(0x1AFC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__53_0(::MiHoYo::SDK::Console::PS4BindEmailDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::PS4BindEmailDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG___C__SHOW_B__53_0_OFFSET))(this, a1);
		}
	};
}
