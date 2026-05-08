#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1679B600)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1679B640)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__62_1_OFFSET UNITYSDK_OFFSET(0x1679B650)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__62_2_OFFSET UNITYSDK_OFFSET(0x1679B880)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c_TypeDefinitionIndex = 58711;

	class UIFriendChatPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__62_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32740);
		}
		static ::System::Action** StaticGet___9__62_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32748);
		}
		static ::MoleMole::UIFriendChatPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIFriendChatPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitFriendPanel_b__62_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__62_1_OFFSET))(this);
		}

		::System::Void _OnInitFriendPanel_b__62_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__62_2_OFFSET))(this);
		}
	};
}
