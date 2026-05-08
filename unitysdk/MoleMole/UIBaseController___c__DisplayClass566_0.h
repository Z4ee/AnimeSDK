#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS566_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142D01A0)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS566_0__SETUIMANAGERFADING_B__0_OFFSET UNITYSDK_OFFSET(0x142D01B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass566_0_TypeDefinitionIndex = 70935;

	class UIBaseController___c__DisplayClass566_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::Boolean isFadingIn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS566_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetUIManagerFading_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS566_0__SETUIMANAGERFADING_B__0_OFFSET))(this);
		}
	};
}
