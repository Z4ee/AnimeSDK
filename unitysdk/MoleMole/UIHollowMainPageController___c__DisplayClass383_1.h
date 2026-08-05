#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole { class UIHollowMainPageController_CardSlot; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18999B00)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_1__RUNCARDCHANGEANIM_B__1_OFFSET UNITYSDK_OFFSET(0x18999B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass383_1_TypeDefinitionIndex = 73694;

	class UIHollowMainPageController___c__DisplayClass383_1 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::MoleMole::UIHollowMainPageController_CardSlot* target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_1__CTOR_OFFSET))(this);
		}

		::System::Void _RunCardChangeAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_1__RUNCARDCHANGEANIM_B__1_OFFSET))(this);
		}
	};
}
