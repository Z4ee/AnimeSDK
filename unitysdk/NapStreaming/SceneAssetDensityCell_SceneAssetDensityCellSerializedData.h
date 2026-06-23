#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityCell_SceneAssetDensityCellSerializedData_TypeDefinitionIndex = 76948;

	struct alignas(8) SceneAssetDensityCell_SceneAssetDensityCellSerializedData
	{
		::System::Double CenterX; // 0x10
		::System::Double CenterY; // 0x18
		::System::Double CenterZ; // 0x20
		::System::Double ExtendsX; // 0x28
		::System::Double ExtendsY; // 0x30
		::System::Double ExtendsZ; // 0x38
		::System::Double texturePixelCount; // 0x40
		::System::Int32 textureCount; // 0x48
		::System::Int32 materialCount; // 0x4C
		::System::Int32 vertexCount; // 0x50
		::System::Int32 particleCount; // 0x54
		::System::Int32 animationClipCount; // 0x58
		::System::Int32 skinnedMeshCount; // 0x5C
		::System::Int32 rendererCount; // 0x60
		::System::Int32 objectCount; // 0x64
		::System::Int32 lightCount; // 0x68
	};
}
