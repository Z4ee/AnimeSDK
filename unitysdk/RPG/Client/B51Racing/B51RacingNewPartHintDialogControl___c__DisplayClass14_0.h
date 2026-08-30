#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogControl; }
namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC8944C0)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS14_0__ONCLOSECLICK_B__0_OFFSET UNITYSDK_OFFSET(0xC895590)
#define RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS14_0__ONCLOSECLICK_B__1_OFFSET UNITYSDK_OFFSET(0xC895630)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewPartHintDialogControl___c__DisplayClass14_0_TypeDefinitionIndex = 80463;

	class B51RacingNewPartHintDialogControl___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::RPG::Client::B51Racing::B51RacingNewPartHintDialogControl* __4__this; // 0x18
		::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* vm; // 0x20
		::System::Action* __9__1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCloseClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS14_0__ONCLOSECLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnCloseClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWPARTHINTDIALOGCONTROL___C__DISPLAYCLASS14_0__ONCLOSECLICK_B__1_OFFSET))(this);
		}
	};
}
