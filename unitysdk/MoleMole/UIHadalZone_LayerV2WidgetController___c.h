#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_401;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184690D0)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18469110)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___BINDGAMEPAD_B__18_0_OFFSET UNITYSDK_OFFSET(0x18469120)
#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___UPDATEZONES_B__28_0_OFFSET UNITYSDK_OFFSET(0x184691B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex = 62773;

	class UIHadalZone_LayerV2WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_5DA2E7556103D5A3_401*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_1_5DA2E7556103D5A3_401*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F140);
		}
		static ::MoleMole::UIHadalZone_LayerV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_LayerV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F148);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__18_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LayerV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3F150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __BindGamepad_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___BINDGAMEPAD_B__18_0_OFFSET))(this);
		}

		::System::Boolean __UpdateZones_b__28_0(::Class_1_5DA2E7556103D5A3_401* entrance)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_401*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER___C___UPDATEZONES_B__28_0_OFFSET))(this, entrance);
		}
	};
}
