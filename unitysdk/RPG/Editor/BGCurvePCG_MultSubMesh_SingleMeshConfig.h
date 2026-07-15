#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MultSubMesh_SingleMeshConfig_TypeDefinitionIndex = 49661;

	struct alignas(4) BGCurvePCG_MultSubMesh_SingleMeshConfig
	{
		::System::Int32 TrailID; // 0x10
		::System::Single Position; // 0x14
		::System::Single Length; // 0x18
	};
}
