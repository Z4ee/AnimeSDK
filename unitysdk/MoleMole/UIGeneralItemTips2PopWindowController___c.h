#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15247F90)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15247FD0)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_10_OFFSET UNITYSDK_OFFSET(0x15247FF0)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_11_OFFSET UNITYSDK_OFFSET(0x15248000)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_4_OFFSET UNITYSDK_OFFSET(0x15248010)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__37_7_OFFSET UNITYSDK_OFFSET(0x15247FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex = 79747;

	class UIGeneralItemTips2PopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__37_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40800);
		}
		static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet___9__37_11()
		{
			return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40808);
		}
		static ::MoleMole::UIGeneralItemTips2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralItemTips2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40810);
		}
		static ::System::Action** StaticGet___9__37_7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40818);
		}
		static ::System::Action** StaticGet___9__37_10()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40820);
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
