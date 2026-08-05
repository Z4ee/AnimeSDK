#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_34.h"
#include "unitysdk/System/Object.h"

class Class_3_7881E33311C1DE63;
namespace MoleMole { class UIFriendChatSpecialWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE28F0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x19EE2900)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19EE2B00)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x19EE2FA0)
#define MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x19EE2F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatSpecialWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 87529;

	class UIFriendChatSpecialWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Enum_3_0A3761FE34514D6C_34>* __9__3; // 0x10
		::MoleMole::UIFriendChatSpecialWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::Class_3_7881E33311C1DE63* joinGameContent; // 0x28
		::System::Action_1<::System::Int32>* __9__2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__0_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__1_OFFSET))(this);
		}

		::System::Void _InitInviteUIView_b__3(::Enum_3_0A3761FE34514D6C_34 currState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_34))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__3_OFFSET))(this, currState);
		}

		::System::Void _InitInviteUIView_b__2(::System::Int32 retCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATSPECIALWIDGETCONTROLLER___C__DISPLAYCLASS23_0__INITINVITEUIVIEW_B__2_OFFSET))(this, retCode);
		}
	};
}
