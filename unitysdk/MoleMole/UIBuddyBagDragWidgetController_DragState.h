#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyBagDragWidgetController_DragState_TypeDefinitionIndex = 59147;

	enum class UIBuddyBagDragWidgetController_DragState : ::System::Int32
	{
		DragEnd = 4,
		Draging_Component = 3,
		Draging_Item = 2,
		StartDrag = 1,
		None = 0,
	};
}
