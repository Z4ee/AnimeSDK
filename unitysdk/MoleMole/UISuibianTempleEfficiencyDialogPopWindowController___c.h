#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_115;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175B1110)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175B1150)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__ONSHOW_B__7_0_OFFSET UNITYSDK_OFFSET(0x175B1160)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex = 66656;

	class UISuibianTempleEfficiencyDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_115*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_115*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36FF0);
		}
		static ::MoleMole::UISuibianTempleEfficiencyDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleEfficiencyDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__7_0(::Class_2_208CC9941471731A_115* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_115*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__ONSHOW_B__7_0_OFFSET))(this, item);
		}
	};
}
