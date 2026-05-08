#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E87F7C93CB0CC57E;

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE23C0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_1__ONRECEIVEFRIENDCHATLIST_B__1_OFFSET UNITYSDK_OFFSET(0x14EE23D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass70_1_TypeDefinitionIndex = 58713;

	class UIFriendChatPopWindowController___c__DisplayClass70_1 : public ::System::Object
	{
	public:
		::System::UInt32 lastSelectedFriendUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnReceiveFriendChatList_b__1(::Class_1_E87F7C93CB0CC57E* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E87F7C93CB0CC57E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_1__ONRECEIVEFRIENDCHATLIST_B__1_OFFSET))(this, item);
		}
	};
}
