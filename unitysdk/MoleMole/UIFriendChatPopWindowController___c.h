#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EE2610)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE2650)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__63_1_OFFSET UNITYSDK_OFFSET(0x19EE2660)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__63_2_OFFSET UNITYSDK_OFFSET(0x19EE2890)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c_TypeDefinitionIndex = 66611;

	class UIFriendChatPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__63_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36BF0);
		}
		static ::System::Action** StaticGet___9__63_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36BF8);
		}
		static ::MoleMole::UIFriendChatPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIFriendChatPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitFriendPanel_b__63_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__63_1_OFFSET))(this);
		}

		::System::Void _OnInitFriendPanel_b__63_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__63_2_OFFSET))(this);
		}
	};
}
