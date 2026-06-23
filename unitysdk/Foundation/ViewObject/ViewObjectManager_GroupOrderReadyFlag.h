#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReadyFlag_TypeDefinitionIndex = 73622;

	enum class ViewObjectManager_GroupOrderReadyFlag : ::System::Int32
	{
		PostLoadedFlag = 2,
		LoadingFlag = 1,
		None = 0,
	};
}
