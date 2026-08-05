#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFriendChatSpecialWidgetController_ForumPostDataResult.h"
#include "unitysdk/System/Object.h"

class Class_3_48C7D152812F0173;
class Class_3_920D00A4D2C57DD8_7;
namespace MoleMole { class UIFriendChatSpecialWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7E2D0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__PROCESSFORUMPOSTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x18D7E2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass42_0_TypeDefinitionIndex = 87527;

	class UIFriendChatSpecialWidgetController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIFriendChatSpecialWidgetController_ForumPostDataResult>* onSuccess; // 0x10
		::MoleMole::UIFriendChatSpecialWidgetController* __4__this; // 0x18
		::Class_3_920D00A4D2C57DD8_7* forumPost; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessForumPostData_b__0(::Class_3_48C7D152812F0173* postData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48C7D152812F0173*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS42_0__PROCESSFORUMPOSTDATA_B__0_OFFSET))(this, postData);
		}
	};
}
