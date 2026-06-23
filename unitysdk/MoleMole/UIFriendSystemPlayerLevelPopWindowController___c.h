#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166D1150)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166D1190)
#define MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__INITINTERKNOTREWARDS_B__7_2_OFFSET UNITYSDK_OFFSET(0x166D11A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPlayerLevelPopWindowController___c_TypeDefinitionIndex = 80982;

	class UIFriendSystemPlayerLevelPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__7_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemPlayerLevelPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x379C0);
		}
		static ::MoleMole::UIFriendSystemPlayerLevelPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIFriendSystemPlayerLevelPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemPlayerLevelPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x379C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitInterKnotRewards_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERLEVELPOPWINDOWCONTROLLER___C__INITINTERKNOTREWARDS_B__7_2_OFFSET))(this);
		}
	};
}
