#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIZenkovWorkbenchDialogPageController_BenchDisplayData.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E7F900)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E7F940)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__GETBENCHLISTBYPAGE_B__69_0_OFFSET UNITYSDK_OFFSET(0x12E7FBB0)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__INITINFOPANEL_B__70_2_OFFSET UNITYSDK_OFFSET(0x12E7FBF0)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__44_1_OFFSET UNITYSDK_OFFSET(0x12E7F950)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__44_6_OFFSET UNITYSDK_OFFSET(0x12E7F9E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex = 41180;

	class UIZenkovWorkbenchDialogPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData>** StaticGet___9__69_0()
		{
			return (::System::Comparison_1<::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x453F0);
		}
		static ::MoleMole::UIZenkovWorkbenchDialogPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovWorkbenchDialogPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x453F8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__44_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x45400);
		}
		static ::System::Action** StaticGet___9__44_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x45408);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__70_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x45410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__44_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__44_1_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__44_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__44_6_OFFSET))(this);
		}

		::System::Int32 _GetBenchListByPage_b__69_0(::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData a, ::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData, ::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__GETBENCHLISTBYPAGE_B__69_0_OFFSET))(this, a, b);
		}

		::System::Void _InitInfoPanel_b__70_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__INITINFOPANEL_B__70_2_OFFSET))(this);
		}
	};
}
