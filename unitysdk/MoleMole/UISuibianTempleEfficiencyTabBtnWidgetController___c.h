#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_115;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151A1580)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151A15C0)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x151A15D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleEfficiencyTabBtnWidgetController___c_TypeDefinitionIndex = 61360;

	class UISuibianTempleEfficiencyTabBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleEfficiencyTabBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleEfficiencyTabBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyTabBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D3F0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_115*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_115*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyTabBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D3F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__7_0(::Class_2_208CC9941471731A_115* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_115*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYTABBTNWIDGETCONTROLLER___C__REFRESHVIEW_B__7_0_OFFSET))(this, item);
		}
	};
}
