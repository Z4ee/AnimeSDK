#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISelectMonsterCardWidgetController_ItemRootTurningPhase.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISelectMonsterCardWidgetController_ItemRootTurningState_TypeDefinitionIndex = 62381;

	struct alignas(4) UISelectMonsterCardWidgetController_ItemRootTurningState
	{
		::MoleMole::UISelectMonsterCardWidgetController_ItemRootTurningPhase phase; // 0x10
		::System::Boolean targetValue; // 0x14
	};
}
