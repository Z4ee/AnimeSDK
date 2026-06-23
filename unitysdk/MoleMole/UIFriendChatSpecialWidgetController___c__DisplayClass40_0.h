#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendChatSpecialWidgetController_ForumPostDataResult.h"
#include "unitysdk/System/Object.h"

class Class_3_920D00A4D2C57DD8_18;
namespace MoleMole { class UIFriendChatSpecialWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F33200)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__INITSHAREPLAYERFORUMPOSTUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16F33210)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__INITSHAREPLAYERFORUMPOSTUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16F334C0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__INITSHAREPLAYERFORUMPOSTUIVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x16F33650)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass40_0_TypeDefinitionIndex = 84085;

	class UIFriendChatSpecialWidgetController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* __9__1; // 0x10
		::MoleMole::UIFriendChatSpecialWidgetController* __4__this; // 0x18
		::System::Action_1<::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult>* __9__2; // 0x20
		::Class_3_920D00A4D2C57DD8_18* forumPost; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitSharePlayerForumPostUIView_b__0(::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__INITSHAREPLAYERFORUMPOSTUIVIEW_B__0_OFFSET))(this, result);
		}

		::System::Void _InitSharePlayerForumPostUIView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__INITSHAREPLAYERFORUMPOSTUIVIEW_B__1_OFFSET))(this);
		}

		::System::Void _InitSharePlayerForumPostUIView_b__2(::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult resultClick)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS40_0__INITSHAREPLAYERFORUMPOSTUIVIEW_B__2_OFFSET))(this, resultClick);
		}
	};
}
