#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIControlReference_UICtrlType_TypeDefinitionIndex = 89455;

	enum class UIControlReference_UICtrlType : ::System::Int32
	{
		WidgetController = 3,
		CommonWidget = 4,
		StorePageController = 8,
		BigSceneStorePageController = 7,
		ScrollViewItemWidgetController = 6,
		UI3DModelController = 5,
		ChildController = 2,
		PageController = 0,
		PopController = 1,
	};
}
