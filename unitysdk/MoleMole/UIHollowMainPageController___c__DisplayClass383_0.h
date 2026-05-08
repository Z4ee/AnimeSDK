#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole { class UIHollowMainPageController_CardSlot; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14819320)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_0__RUNCARDCHANGEANIM_B__0_OFFSET UNITYSDK_OFFSET(0x14819330)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass383_0_TypeDefinitionIndex = 44958;

	class UIHollowMainPageController___c__DisplayClass383_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController_CardSlot* nextTmp; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_0__CTOR_OFFSET))(this);
		}

		::System::Void _RunCardChangeAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS383_0__RUNCARDCHANGEANIM_B__0_OFFSET))(this);
		}
	};
}
