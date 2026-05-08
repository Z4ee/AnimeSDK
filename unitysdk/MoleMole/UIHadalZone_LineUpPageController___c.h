#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_336;
namespace MoleMole { class UIHadalLineUp_LayerClipWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A30AE0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A30B20)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__ONUIOPEN_B__8_0_OFFSET UNITYSDK_OFFSET(0x15A30B30)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___ONLAYERCLIPCLICK_B__16_0_OFFSET UNITYSDK_OFFSET(0x15A30B80)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_1_OFFSET UNITYSDK_OFFSET(0x15A30BA0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_2_OFFSET UNITYSDK_OFFSET(0x15A30BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineUpPageController___c_TypeDefinitionIndex = 71250;

	class UIHadalZone_LineUpPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHadalZone_LineUpPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_LineUpPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x37D40);
		}
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x37D48);
		}
		static ::System::Action** StaticGet___9__22_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x37D50);
		}
		static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_336*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_336*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x37D58);
		}
		static ::System::Action_1<::MoleMole::UIHadalLineUp_LayerClipWidgetController*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::MoleMole::UIHadalLineUp_LayerClipWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineUpPageController___c_TypeDefinitionIndex)->GetStaticField(0x37D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__8_0(::Class_1_5DA2E7556103D5A3_336* l, ::Class_1_5DA2E7556103D5A3_336* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_336*, ::Class_1_5DA2E7556103D5A3_336*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__ONUIOPEN_B__8_0_OFFSET))(this, l, r);
		}

		::System::Void __OnLayerClipClick_b__16_0(::MoleMole::UIHadalLineUp_LayerClipWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalLineUp_LayerClipWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___ONLAYERCLIPCLICK_B__16_0_OFFSET))(this, t);
		}

		::System::Void __RefreshLayer_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_1_OFFSET))(this);
		}

		::System::Void __RefreshLayer_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C___REFRESHLAYER_B__22_2_OFFSET))(this);
		}
	};
}
