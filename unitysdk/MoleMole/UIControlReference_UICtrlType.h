#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_UICtrlType_TypeDefinitionIndex = 50815;

	enum class UIControlReference_UICtrlType : ::System::Int32
	{
		ChildController = 2,
		UI3DModelController = 5,
		ScrollViewItemWidgetController = 6,
		PopController = 1,
		PageController = 0,
		StorePageController = 8,
		WidgetController = 3,
		CommonWidget = 4,
		BigSceneStorePageController = 7,
	};
}
