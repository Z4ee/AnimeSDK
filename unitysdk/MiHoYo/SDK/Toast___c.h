#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_TOAST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5CC540)
#define MIHOYO_SDK_TOAST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CC580)
#define MIHOYO_SDK_TOAST___C__SHOWPLUGINUI_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B5CC590)
#define MIHOYO_SDK_TOAST___C__SHOW_B__8_1_OFFSET UNITYSDK_OFFSET(0x1B5CC630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Toast___c_TypeDefinitionIndex = 19991;

	class Toast___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Toast___c_TypeDefinitionIndex)->GetStaticField(0xA1F0);
		}
		static ::MiHoYo::SDK::Toast___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Toast___c**)Il2CppClass::FromTypeDefinitionIndex(Toast___c_TypeDefinitionIndex)->GetStaticField(0xA1F8);
		}
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Toast___c_TypeDefinitionIndex)->GetStaticField(0xA200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__SHOWPLUGINUI_B__7_0_OFFSET))(this);
		}

		::System::Void _Show_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST___C__SHOW_B__8_1_OFFSET))(this);
		}
	};
}
