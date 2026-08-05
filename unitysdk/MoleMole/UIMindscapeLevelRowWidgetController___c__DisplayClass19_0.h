#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMindscapeLevelRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179EFF30)
#define MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__PLAYUNLOCKEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x179EFF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeLevelRowWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 40370;

	class UIMindscapeLevelRowWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMindscapeLevelRowWidgetController* __4__this; // 0x10
		::System::Action* unlockCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayUnlockEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPELEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__PLAYUNLOCKEFFECT_B__0_OFFSET))(this);
		}
	};
}
