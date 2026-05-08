#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelPlayerInfoWidgetController; }
namespace MoleMole { class UIABStandbyPhaseWidgetController___c__DisplayClass47_0; }

#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2EDF0)
#define MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__TOGGLEPLAYERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x12B2EE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIABStandbyPhaseWidgetController___c__DisplayClass47_1_TypeDefinitionIndex = 71651;

	class UIABStandbyPhaseWidgetController___c__DisplayClass47_1 : public ::System::Object
	{
	public:
		::MoleMole::UIABStandbyPhaseWidgetController___c__DisplayClass47_0* CS___8__locals1; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__CTOR_OFFSET))(this);
		}

		::System::Void _TogglePlayerInfo_b__0(::MoleMole::UIABInLevelPlayerInfoWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelPlayerInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYPHASEWIDGETCONTROLLER___C__DISPLAYCLASS47_1__TOGGLEPLAYERINFO_B__0_OFFSET))(this, controller);
		}
	};
}
