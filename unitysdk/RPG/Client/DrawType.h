#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DrawType_TypeDefinitionIndex = 64452;

	enum class DrawType : ::System::Int32
	{
		DrawMeshInstanced = 0,
	};
}
