#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B1E761D184CCDAF;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__BUILDSUITSLOTPROPERTYMAP_B__23_0_OFFSET UNITYSDK_OFFSET(0x198A0790)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A06B0)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198A06F0)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__INITUI_B__21_0_OFFSET UNITYSDK_OFFSET(0x198A0700)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__ONOKBTNCLICK_B__40_1_OFFSET UNITYSDK_OFFSET(0x198A07F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex = 86063;

	class UIRecycleSmartSetDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_3B1E761D184CCDAF*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::Class_2_3B1E761D184CCDAF*>**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7A0);
		}
		static ::System::Action** StaticGet___9__40_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7A8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__21_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7B0);
		}
		static ::MoleMole::UIRecycleSmartSetDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRecycleSmartSetDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A7B8);
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
