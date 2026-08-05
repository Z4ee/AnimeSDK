#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovPreparePageController; }
namespace MoleMole { class UIZenkovPreparePageController_Context; }

#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B12290)
#define MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS26_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x15B122A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPreparePageController___c__DisplayClass26_0_TypeDefinitionIndex = 80717;

	class UIZenkovPreparePageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovPreparePageController* __4__this; // 0x10
		::MoleMole::UIZenkovPreparePageController_Context* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREPAGECONTROLLER___C__DISPLAYCLASS26_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
