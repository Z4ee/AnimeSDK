#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerEffectFuncType_TypeDefinitionIndex = 16813;

	enum class ServerEffectFuncType : ::System::Int32
	{
		Unknow = 0,
		AddItemRatio = 1,
		AddItemValue = 2,
	};
}
