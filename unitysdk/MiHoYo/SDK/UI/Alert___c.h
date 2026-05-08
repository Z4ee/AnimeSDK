#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_ALERT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4057C0)
#define MIHOYO_SDK_UI_ALERT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A405800)
#define MIHOYO_SDK_UI_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET UNITYSDK_OFFSET(0x1A405810)
#define MIHOYO_SDK_UI_ALERT___C__SHOW_B__21_1_OFFSET UNITYSDK_OFFSET(0x1A4058B0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Alert___c_TypeDefinitionIndex = 19247;

	class Alert___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Alert___c_TypeDefinitionIndex)->GetStaticField(0xAC00);
		}
		static ::System::Action** StaticGet___9__20_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Alert___c_TypeDefinitionIndex)->GetStaticField(0xAC08);
		}
		static ::MiHoYo::SDK::UI::Alert___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::UI::Alert___c**)Il2CppClass::FromTypeDefinitionIndex(Alert___c_TypeDefinitionIndex)->GetStaticField(0xAC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__SHOWPLUGINUI_B__20_2_OFFSET))(this);
		}

		::System::Void _Show_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__SHOW_B__21_1_OFFSET))(this);
		}
	};
}
