#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B1E761D184CCDAF;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__BUILDSUITSLOTPROPERTYMAP_B__23_0_OFFSET UNITYSDK_OFFSET(0x1614C060)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1614BF80)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1614BFC0)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__INITUI_B__21_0_OFFSET UNITYSDK_OFFSET(0x1614BFD0)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__ONOKBTNCLICK_B__40_1_OFFSET UNITYSDK_OFFSET(0x1614C0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex = 48760;

	class UIRecycleSmartSetDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRecycleSmartSetDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRecycleSmartSetDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37DB0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__21_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37DB8);
		}
		static ::System::Action** StaticGet___9__40_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37DC0);
		}
		static ::System::Comparison_1<::Class_2_3B1E761D184CCDAF*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_2_3B1E761D184CCDAF*>**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitUI_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__INITUI_B__21_0_OFFSET))(this);
		}

		::System::Int32 _BuildSuitSlotPropertyMap_b__23_0(::Class_2_3B1E761D184CCDAF* a, ::Class_2_3B1E761D184CCDAF* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*, ::Class_2_3B1E761D184CCDAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__BUILDSUITSLOTPROPERTYMAP_B__23_0_OFFSET))(this, a, b);
		}

		::System::Void _OnOKBtnClick_b__40_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__ONOKBTNCLICK_B__40_1_OFFSET))(this);
		}
	};
}
