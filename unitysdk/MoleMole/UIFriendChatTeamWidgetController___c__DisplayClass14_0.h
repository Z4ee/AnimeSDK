#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

class Class_2_292898978640E62C_2_Class_2_F03B0164AF5E38A9_1;
class Class_3_77AD13F7A919C0D8;
namespace MoleMole { class UIFriendChatTeamWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7E420)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D7E430)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET UNITYSDK_OFFSET(0x18D7E530)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__3_OFFSET UNITYSDK_OFFSET(0x18D7E8B0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_G__SETTEAMBTNASINVALID_1_OFFSET UNITYSDK_OFFSET(0x18D7E7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatTeamWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 60864;

	class UIFriendChatTeamWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::Class_2_292898978640E62C_2_Class_2_F03B0164AF5E38A9_1* viewWidget; // 0x10
		::System::Action* __9__3; // 0x18
		::MoleMole::UIFriendChatTeamWidgetController* __4__this; // 0x20
		::System::Action_1<::Class_3_77AD13F7A919C0D8*>* __9__2; // 0x28
		::Struct_2_019938BC9C50B169_2 identifier; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__2(::Class_3_77AD13F7A919C0D8* shareData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_77AD13F7A919C0D8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET))(this, shareData);
		}

		::System::Void _SetupTeamUIWithContent_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__3_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_g__SetTeamBtnAsInvalid_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_G__SETTEAMBTNASINVALID_1_OFFSET))(this);
		}
	};
}
