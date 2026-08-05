#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D048BBBEAD733B3;
class Class_2_208CC9941471731A_477;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18829F70)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18829FB0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x18829FC0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_1_OFFSET UNITYSDK_OFFSET(0x1882A3B0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_2_OFFSET UNITYSDK_OFFSET(0x1882A3F0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_3_OFFSET UNITYSDK_OFFSET(0x1882A420)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex = 44402;

	class UIHandBookEquipBreakMaterialWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36CA0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_477*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36CA8);
		}
		static ::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_477*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_477*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36CB0);
		}
		static ::System::Func_2<::Class_1_5D048BBBEAD733B3*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_5D048BBBEAD733B3*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36CB8);
		}
		static ::MoleMole::UIHandBookEquipBreakMaterialWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookEquipBreakMaterialWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__5_0(::Class_1_5D048BBBEAD733B3* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5D048BBBEAD733B3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}

		::Class_2_208CC9941471731A_477* _OnShow_b__5_1(::System::Int32 itemID)
		{
			return ((::Class_2_208CC9941471731A_477*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_1_OFFSET))(this, itemID);
		}

		::System::Boolean _OnShow_b__5_2(::Class_2_208CC9941471731A_477* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_2_OFFSET))(this, itemTemplate);
		}

		::System::Boolean _OnShow_b__5_3(::Class_2_208CC9941471731A_477* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_3_OFFSET))(this, itemTemplate);
		}
	};
}
