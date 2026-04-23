#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATControllerBase_DrawMode_TypeDefinitionIndex = 67801;

	enum class BATControllerBase_DrawMode : ::System::Int32
	{
		DrawMesh = 0,
		DrawMeshInstanced = 1,
		DrawMeshInstancedProcedural = 2,
		DrawMeshInstancedIndirect = 3,
	};
}
