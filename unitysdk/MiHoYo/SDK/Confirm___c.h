#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_CONFIRM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1820C670)
#define MIHOYO_SDK_CONFIRM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1820C6B0)
#define MIHOYO_SDK_CONFIRM___C__SHOWPLUGINUI_B__23_2_OFFSET UNITYSDK_OFFSET(0x1820C6C0)
#define MIHOYO_SDK_CONFIRM___C__SHOW_B__24_1_OFFSET UNITYSDK_OFFSET(0x1820C760)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm___c_TypeDefinitionIndex = 8177;

	class Confirm___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Confirm___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Confirm___c**)Il2CppClass::FromTypeDefinitionIndex(Confirm___c_TypeDefinitionIndex)->GetStaticField(0xD900);
		}
		static ::System::Action** StaticGet___9__23_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Confirm___c_TypeDefinitionIndex)->GetStaticField(0xD908);
		}
		static ::System::Action** StaticGet___9__24_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Confirm___c_TypeDefinitionIndex)->GetStaticField(0xD910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__23_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM___C__SHOWPLUGINUI_B__23_2_OFFSET))(this);
		}

		::System::Void _Show_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM___C__SHOW_B__24_1_OFFSET))(this);
		}
	};
}
