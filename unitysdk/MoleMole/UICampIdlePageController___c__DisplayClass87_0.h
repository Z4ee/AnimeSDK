#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICampIdlePageController; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6435C0)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS87_0__SCROLLTOID_B__0_OFFSET UNITYSDK_OFFSET(0x1A6435D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass87_0_TypeDefinitionIndex = 75914;

	class UICampIdlePageController___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::MoleMole::UICampIdlePageController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScrollToID_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS87_0__SCROLLTOID_B__0_OFFSET))(this);
		}
	};
}
