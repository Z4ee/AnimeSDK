#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152DD1D0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152DD210)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKKICKOFFHANDLER_B__28_1_OFFSET UNITYSDK_OFFSET(0x152DD250)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKKICKOFFHANDLER_B__28_3_OFFSET UNITYSDK_OFFSET(0x152DD240)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKSWITCHHANDLER_B__31_1_OFFSET UNITYSDK_OFFSET(0x152DD270)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__PLAYALLFADEINANIM_B__14_0_OFFSET UNITYSDK_OFFSET(0x152DD220)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__PLAYALLFADEINANIM_B__14_1_OFFSET UNITYSDK_OFFSET(0x152DD230)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__SHOWFRIENDINVITEPOPWINDOW_B__30_2_OFFSET UNITYSDK_OFFSET(0x152DD260)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c_TypeDefinitionIndex = 77466;

	class UIArcadeTeamChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40650);
		}
		static ::MoleMole::UIArcadeTeamChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeTeamChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40658);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__30_2()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40660);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40668);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__28_3()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40670);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__31_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40678);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__14_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAllFadeInAnim_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__PLAYALLFADEINANIM_B__14_0_OFFSET))(this);
		}

		::System::Void _PlayAllFadeInAnim_b__14_1(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__PLAYALLFADEINANIM_B__14_1_OFFSET))(this, ret);
		}

		::System::Void _OnClickKickoffHandler_b__28_3(::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKKICKOFFHANDLER_B__28_3_OFFSET))(this, retCode);
		}

		::System::Void _OnClickKickoffHandler_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKKICKOFFHANDLER_B__28_1_OFFSET))(this);
		}

		::System::Void _ShowFriendInvitePopWindow_b__30_2(::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__SHOWFRIENDINVITEPOPWINDOW_B__30_2_OFFSET))(this, retCode);
		}

		::System::Void _OnClickSwitchHandler_b__31_1(::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKSWITCHHANDLER_B__31_1_OFFSET))(this, retCode);
		}
	};
}
