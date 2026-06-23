#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1691DB90)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1691DBD0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__71_0_OFFSET UNITYSDK_OFFSET(0x1691DC00)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__72_1_OFFSET UNITYSDK_OFFSET(0x1691DDB0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__72_2_OFFSET UNITYSDK_OFFSET(0x1691DEA0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__REFRESHRIDUSGOTBOO_B__2_0_OFFSET UNITYSDK_OFFSET(0x1691DBE0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__TRYOVERRIDETUTORIALGROUPLIST_RIDUSGOTBOO_B__3_0_OFFSET UNITYSDK_OFFSET(0x1691DBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex = 86469;

	class UIInLevelPauseDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__72_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CAE0);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CAE8);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CAF0);
		}
		static ::MoleMole::UIInLevelPauseDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPauseDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CAF8);
		}
		static ::System::Action** StaticGet___9__71_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CB00);
		}
		static ::System::Action** StaticGet___9__72_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CB08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshRidusGotBoo_b__2_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__REFRESHRIDUSGOTBOO_B__2_0_OFFSET))(this, x);
		}

		::System::Boolean _TryOverrideTutorialGroupList_RidusGotBoo_b__3_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__TRYOVERRIDETUTORIALGROUPLIST_RIDUSGOTBOO_B__3_0_OFFSET))(this, x);
		}

		::System::Void _OnClickQuitBattleBtn_b__71_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__71_0_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__72_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__72_1_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__72_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__72_2_OFFSET))(this);
		}
	};
}
