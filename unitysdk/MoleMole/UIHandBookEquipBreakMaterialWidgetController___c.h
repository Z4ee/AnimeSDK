#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C2EE9BE6ADE8BB7;
class Class_2_208CC9941471731A_131;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149F7420)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149F7460)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x149F7910)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_1_OFFSET UNITYSDK_OFFSET(0x149F7CF0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_2_OFFSET UNITYSDK_OFFSET(0x149F7D30)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_3_OFFSET UNITYSDK_OFFSET(0x149F7D60)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET UNITYSDK_OFFSET(0x149F7470)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex = 39727;

	class UIHandBookEquipBreakMaterialWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookEquipBreakMaterialWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookEquipBreakMaterialWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x327F0);
		}
		static ::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_131*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_131*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x327F8);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32800);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_131*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32808);
		}
		static ::System::Func_2<::Class_1_8C2EE9BE6ADE8BB7*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_8C2EE9BE6ADE8BB7*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32810);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__5_0(::Class_1_8C2EE9BE6ADE8BB7* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8C2EE9BE6ADE8BB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}

		::Class_2_208CC9941471731A_131* _OnShow_b__5_1(::System::Int32 itemID)
		{
			return ((::Class_2_208CC9941471731A_131*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_1_OFFSET))(this, itemID);
		}

		::System::Boolean _OnShow_b__5_2(::Class_2_208CC9941471731A_131* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_2_OFFSET))(this, itemTemplate);
		}

		::System::Boolean _OnShow_b__5_3(::Class_2_208CC9941471731A_131* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_3_OFFSET))(this, itemTemplate);
		}
	};
}
