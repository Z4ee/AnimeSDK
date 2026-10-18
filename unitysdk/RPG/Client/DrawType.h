#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DrawType_TypeDefinitionIndex = 68896;

	enum class DrawType : ::System::Int32
	{
		DrawMeshInstanced = 0,
		DrawMeshInstancedIndirect = 1,
		GraphicsDrawMesh = 2,
	};
}
