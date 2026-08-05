#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReadyFlag_TypeDefinitionIndex = 55560;

	enum class ViewObjectManager_GroupOrderReadyFlag : ::System::Int32
	{
		None = 0,
		LoadingFlag = 1,
		PostLoadedFlag = 2,
	};
}
