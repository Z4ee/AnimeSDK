#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1481FE70)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1481FEB0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__64_0_OFFSET UNITYSDK_OFFSET(0x1481FEE0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__65_1_OFFSET UNITYSDK_OFFSET(0x14820080)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__65_2_OFFSET UNITYSDK_OFFSET(0x14820170)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__REFRESHRIDUSGOTBOO_B__2_0_OFFSET UNITYSDK_OFFSET(0x1481FEC0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__TRYOVERRIDETUTORIALGROUPLIST_RIDUSGOTBOO_B__3_0_OFFSET UNITYSDK_OFFSET(0x1481FED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex = 64460;

	class UIInLevelPauseDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__65_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x351F0);
		}
		static ::System::Action** StaticGet___9__64_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x351F8);
		}
		static ::MoleMole::UIInLevelPauseDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPauseDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35200);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35208);
		}
		static ::System::Action** StaticGet___9__65_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35210);
		}
		static ::System::Predicate_1<::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35218);
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

		::System::Void _OnClickQuitBattleBtn_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__64_0_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__65_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__65_1_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__65_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__ONCLICKQUITBATTLEBTN_B__65_2_OFFSET))(this);
		}
	};
}
