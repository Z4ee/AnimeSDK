#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_CONFIRM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1843EFB0)
#define MIHOYO_SDK_UI_CONFIRM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1843EFF0)
#define MIHOYO_SDK_UI_CONFIRM___C__SHOWPLUGINUI_B__23_2_OFFSET UNITYSDK_OFFSET(0x1843F000)
#define MIHOYO_SDK_UI_CONFIRM___C__SHOW_B__24_1_OFFSET UNITYSDK_OFFSET(0x1843F0A0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm___c_TypeDefinitionIndex = 8329;

	class Confirm___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Confirm___c_TypeDefinitionIndex)->GetStaticField(0x238A0);
		}
		static ::MiHoYo::SDK::UI::Confirm___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::Confirm___c**)Il2CppClass::FromTypeDefinitionIndex(Confirm___c_TypeDefinitionIndex)->GetStaticField(0x238A8);
		}
		static ::System::Action** StaticGet___9__23_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Confirm___c_TypeDefinitionIndex)->GetStaticField(0x238B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__23_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__SHOWPLUGINUI_B__23_2_OFFSET))(this);
		}

		::System::Void _Show_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__SHOW_B__24_1_OFFSET))(this);
		}
	};
}
