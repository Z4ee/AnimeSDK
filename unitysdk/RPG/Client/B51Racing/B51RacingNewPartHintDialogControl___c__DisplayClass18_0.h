#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogControl; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC894B50)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_0__ONCONFIRMCLICK_B__0_OFFSET UNITYSDK_OFFSET(0xC895680)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewPartHintDialogControl___c__DisplayClass18_0_TypeDefinitionIndex = 80464;

	class B51RacingNewPartHintDialogControl___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingNewPartHintDialogControl* __4__this; // 0x10
		::System::Action* onComplete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirmClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS18_0__ONCONFIRMCLICK_B__0_OFFSET))(this);
		}
	};
}
