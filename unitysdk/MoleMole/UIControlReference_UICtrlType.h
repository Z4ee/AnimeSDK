#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_UICtrlType_TypeDefinitionIndex = 82777;

	enum class UIControlReference_UICtrlType : ::System::Int32
	{
		PageController = 0,
		ChildController = 2,
		BigSceneStorePageController = 7,
		WidgetController = 3,
		StorePageController = 8,
		ScrollViewItemWidgetController = 6,
		CommonWidget = 4,
		UI3DModelController = 5,
		PopController = 1,
	};
}
