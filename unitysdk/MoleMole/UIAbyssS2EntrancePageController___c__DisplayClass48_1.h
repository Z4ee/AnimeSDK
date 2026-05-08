#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2EntrancePageController___c__DisplayClass48_0; }
namespace MoleMole { class UIAbyssS2EventContext; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2F300)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS48_1__ONLIMBOENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0x12B2F310)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c__DisplayClass48_1_TypeDefinitionIndex = 75400;

	class UIAbyssS2EntrancePageController___c__DisplayClass48_1 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2EntrancePageController___c__DisplayClass48_0* CS___8__locals1; // 0x10
		::MoleMole::UIAbyssS2EventContext* contextBase; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnLimboEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS48_1__ONLIMBOENTRANCE_B__0_OFFSET))(this);
		}
	};
}
