#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICampIdlePageController; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180351A0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCLICKUNFOLD_B__0_OFFSET UNITYSDK_OFFSET(0x180351B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass22_0_TypeDefinitionIndex = 75911;

	class UICampIdlePageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UICampIdlePageController* __4__this; // 0x10
		::System::Boolean afterAnimArrowState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickUnfold_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCLICKUNFOLD_B__0_OFFSET))(this);
		}
	};
}
