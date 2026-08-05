#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199D7B20)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x199D7B30)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x199D7BD0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x199D7C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass255_0_TypeDefinitionIndex = 73684;

	class UIHollowMainPageController___c__DisplayClass255_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Action* callback; // 0x18
		::MoleMole::UIHollowMainPageController* __4__this; // 0x20
		::System::Action* __9__1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayOverloadAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _PlayOverloadAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__1_OFFSET))(this);
		}

		::System::Void _PlayOverloadAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__2_OFFSET))(this);
		}
	};
}
