#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_716;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186466A0)
#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186466E0)
#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__INITEQUIPMENT_B__11_0_OFFSET UNITYSDK_OFFSET(0x186467C0)
#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x186466F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex = 75151;

	class UIAbyssS2EquipmentSelectDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_716*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_716*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39F90);
		}
		static ::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_716*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Int32, ::Class_2_208CC9941471731A_716*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39F98);
		}
		static ::MoleMole::UIAbyssS2EquipmentSelectDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2EquipmentSelectDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_716* _OnUIOpen_b__6_0(::System::Int32 x)
		{
			return ((::Class_2_208CC9941471731A_716*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, x);
		}

		::System::Int32 _InitEquipment_b__11_0(::Class_2_208CC9941471731A_716* x, ::Class_2_208CC9941471731A_716* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_716*, ::Class_2_208CC9941471731A_716*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__INITEQUIPMENT_B__11_0_OFFSET))(this, x, y);
		}
	};
}
