#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E50E50)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E50E90)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKKICKOFFHANDLER_B__28_1_OFFSET UNITYSDK_OFFSET(0x15E50ED0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKKICKOFFHANDLER_B__28_3_OFFSET UNITYSDK_OFFSET(0x15E50EC0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__ONCLICKSWITCHHANDLER_B__31_1_OFFSET UNITYSDK_OFFSET(0x15E50EF0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__PLAYALLFADEINANIM_B__14_0_OFFSET UNITYSDK_OFFSET(0x15E50EA0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__PLAYALLFADEINANIM_B__14_1_OFFSET UNITYSDK_OFFSET(0x15E50EB0)
#define MOLEMOLE_UIARCADETEAMCHILDWINDOWCONTROLLER___C__SHOWFRIENDINVITEPOPWINDOW_B__30_2_OFFSET UNITYSDK_OFFSET(0x15E50EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeTeamChildWindowController___c_TypeDefinitionIndex = 60534;

	class UIArcadeTeamChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__14_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x430B0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__31_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x430B8);
		}
		static ::MoleMole::UIArcadeTeamChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeTeamChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x430C0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__28_3()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x430C8);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__30_2()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x430D0);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x430D8);
		}
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeTeamChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x430E0);
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
