#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFX_SkinnedMesh_ThreadGroupsByMesh_TypeDefinitionIndex = 73585;

	enum class AstraFX_SkinnedMesh_ThreadGroupsByMesh : ::System::Int32
	{
		TriangleCount = 0,
		VertexCount = 1,
		IndexCount = 2,
	};
}
