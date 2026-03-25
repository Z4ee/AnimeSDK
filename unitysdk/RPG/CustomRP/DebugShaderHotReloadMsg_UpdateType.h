#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderHotReloadMsg_UpdateType_TypeDefinitionIndex = 29369;

	enum class DebugShaderHotReloadMsg_UpdateType : ::System::Int32
	{
		Shader = 0,
		Compute = 1,
	};
}
