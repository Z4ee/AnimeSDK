#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_MeshVertexChannelFlags_TypeDefinitionIndex = 90605;

	enum class MB_MeshVertexChannelFlags : ::System::Int32
	{
		none = 0,
		vertex = 1,
		normal = 2,
		tangent = 4,
		colors = 8,
		uv0 = 16,
		nuvsSliceIdx = 32,
		uv2 = 64,
		uv3 = 128,
		uv4 = 256,
		uv5 = 512,
		uv6 = 1024,
		uv7 = 2048,
		uv8 = 4096,
		blendWeight = 8192,
		blendIndices = 16384,
	};
}
