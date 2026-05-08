#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CC8F53861C28C2;
namespace MoleMole { class UIFriendChatPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE2330)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_0__ONRECEIVEFRIENDCHATLIST_B__0_OFFSET UNITYSDK_OFFSET(0x14EE2340)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c__DisplayClass70_0_TypeDefinitionIndex = 58712;

	class UIFriendChatPopWindowController___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendChatPopWindowController* __4__this; // 0x10
		::System::Boolean needShowUI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnReceiveFriendChatList_b__0(::System::Collections::Generic::List_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__DISPLAYCLASS70_0__ONRECEIVEFRIENDCHATLIST_B__0_OFFSET))(this, msgList);
		}
	};
}
