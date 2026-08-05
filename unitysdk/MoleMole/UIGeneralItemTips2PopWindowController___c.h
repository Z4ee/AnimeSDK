#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D9B210)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9B250)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_10_OFFSET UNITYSDK_OFFSET(0x17D9B270)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_11_OFFSET UNITYSDK_OFFSET(0x17D9B280)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_4_OFFSET UNITYSDK_OFFSET(0x17D9B290)
#define MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_7_OFFSET UNITYSDK_OFFSET(0x17D9B260)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex = 91256;

	class UIGeneralItemTips2PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet___9__36_11()
		{
			return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47130);
		}
		static ::System::Action** StaticGet___9__36_10()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47138);
		}
		static ::MoleMole::UIGeneralItemTips2PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralItemTips2PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47140);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__36_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47148);
		}
		static ::System::Action** StaticGet___9__36_7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemTips2PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x47150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GetUseItemAction_b__36_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_7_OFFSET))(this);
		}

		::System::Void _GetUseItemAction_b__36_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_10_OFFSET))(this);
		}

		::System::Void _GetUseItemAction_b__36_11(::System::Int32 selectedItemIndex, ::System::Int32 selectedItemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_11_OFFSET))(this, selectedItemIndex, selectedItemID);
		}

		::System::Void _GetUseItemAction_b__36_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPS2POPWINDOWCONTROLLER___C__GETUSEITEMACTION_B__36_4_OFFSET))(this);
		}
	};
}
