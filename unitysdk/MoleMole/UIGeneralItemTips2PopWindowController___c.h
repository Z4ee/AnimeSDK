#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1730EE20)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1730EE60)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_10_OFFSET UNITYSDK_OFFSET(0x1730EE80)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_11_OFFSET UNITYSDK_OFFSET(0x1730EE90)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_4_OFFSET UNITYSDK_OFFSET(0x1730EEA0)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_7_OFFSET UNITYSDK_OFFSET(0x1730EE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex = 80219;

	class UIGeneralItemTips2PopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralItemTips2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralItemTips2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43280);
		}
		static ::System::Action** StaticGet___9__37_7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43288);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__37_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43290);
		}
		static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet___9__37_11()
		{
			return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43298);
		}
		static ::System::Action** StaticGet___9__37_10()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x432A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GetUseItemAction_b__37_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_7_OFFSET))(this);
		}

		::System::Void _GetUseItemAction_b__37_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_10_OFFSET))(this);
		}

		::System::Void _GetUseItemAction_b__37_11(::System::Int32 selectedItemIndex, ::System::Int32 selectedItemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_11_OFFSET))(this, selectedItemIndex, selectedItemID);
		}

		::System::Void _GetUseItemAction_b__37_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_4_OFFSET))(this);
		}
	};
}
