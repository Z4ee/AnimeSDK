#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

class Class_2_292898978640E62C_1_Class_2_F03B0164AF5E38A9;
class Class_3_CE3642B3ECB61D27_31;
namespace MoleMole { class UIFriendChatTeamWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F339B0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0x16F339C0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET UNITYSDK_OFFSET(0x16F33AC0)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__3_OFFSET UNITYSDK_OFFSET(0x16F33E40)
#define MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_G__SETTEAMBTNASINVALID_1_OFFSET UNITYSDK_OFFSET(0x16F33D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatTeamWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 58163;

	class UIFriendChatTeamWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIFriendChatTeamWidgetController* __4__this; // 0x18
		::Class_2_292898978640E62C_1_Class_2_F03B0164AF5E38A9* viewWidget; // 0x20
		::System::Action_1<::Class_3_CE3642B3ECB61D27_31*>* __9__2; // 0x28
		::Struct_2_019938BC9C50B169_2 identifier; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__0_OFFSET))(this);
		}

		::System::Void _SetupTeamUIWithContent_b__2(::Class_3_CE3642B3ECB61D27_31* shareData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_CE3642B3ECB61D27_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATTEAMWIDGETCONTROLLER___C__DISPLAYCLASS14_0__SETUPTEAMUIWITHCONTENT_B__2_OFFSET))(this, shareData);
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
