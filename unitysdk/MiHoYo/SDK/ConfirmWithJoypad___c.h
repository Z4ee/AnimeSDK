#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC3FB60)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3FBA0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C__SHOW_B__39_1_OFFSET UNITYSDK_OFFSET(0x1BC3FBB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithJoypad___c_TypeDefinitionIndex = 8001;

	class ConfirmWithJoypad___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ConfirmWithJoypad___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ConfirmWithJoypad___c**)Il2CppClass::FromTypeDefinitionIndex(ConfirmWithJoypad___c_TypeDefinitionIndex)->GetStaticField(0x538D0);
		}
		static ::System::Action** StaticGet___9__39_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ConfirmWithJoypad___c_TypeDefinitionIndex)->GetStaticField(0x538D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__39_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C__SHOW_B__39_1_OFFSET))(this);
		}
	};
}
