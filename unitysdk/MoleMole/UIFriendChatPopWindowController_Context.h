#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170E60E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController_Context_TypeDefinitionIndex = 66610;

	class UIFriendChatPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* friendBriefInfo; // 0x28
		::Class_2_E23E4CB2769CC93F* CircleDataExt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
