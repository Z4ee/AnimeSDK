#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastLevelWidgetController___c__DisplayClass14_0; }

#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x155FFD70)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_1__DOPLAYPROGRESSANIM_B__0_OFFSET UNITYSDK_OFFSET(0x155FFD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastLevelWidgetController___c__DisplayClass14_1_TypeDefinitionIndex = 48865;

	class UIOverlordFeastLevelWidgetController___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastLevelWidgetController___c__DisplayClass14_0* CS___8__locals1; // 0x10
		::System::Single timer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayProgressAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_1__DOPLAYPROGRESSANIM_B__0_OFFSET))(this);
		}
	};
}
