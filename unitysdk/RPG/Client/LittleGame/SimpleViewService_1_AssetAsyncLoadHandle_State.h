#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleViewService_1_AssetAsyncLoadHandle_State_TypeDefinitionIndex = 72615;

	enum class SimpleViewService_1_AssetAsyncLoadHandle_State : ::System::Int32
	{
		Loading = 0,
		PostLoading = 1,
		Finish = 2,
		Cancel = 3,
	};
}
