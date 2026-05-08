#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_9EDE5D0623B668B8;

#define MOLEMOLE_UIFRIENDCHATCOMMONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1699AC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatCommonContext_TypeDefinitionIndex = 47295;

	class UIFriendChatCommonContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_9EDE5D0623B668B8* Item; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATCOMMONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
