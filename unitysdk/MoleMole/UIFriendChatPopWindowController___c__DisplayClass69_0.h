#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_1_E87F7C93CB0CC57E;
namespace MoleMole { class UIFriendChatItemContext; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBA6E0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS69_0__ONUPDATEFRIENDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x16DBA6F0)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS69_0__ONUPDATEFRIENDINFO_B__1_OFFSET UNITYSDK_OFFSET(0x16DBA770)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass69_0_TypeDefinitionIndex = 66608;

	class UIFriendChatPopWindowController___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::Class_1_BE6BF7909AD9D940* newPlayerBrief; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdateFriendInfo_b__0(::Class_1_E87F7C93CB0CC57E* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_E87F7C93CB0CC57E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS69_0__ONUPDATEFRIENDINFO_B__0_OFFSET))(this, item);
		}

		::System::Boolean _OnUpdateFriendInfo_b__1(::MoleMole::UIFriendChatItemContext* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIFriendChatItemContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS69_0__ONUPDATEFRIENDINFO_B__1_OFFSET))(this, item);
		}
	};
}
