#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int AttachmentType_TypeDefinitionIndex = 37496;

	enum class AttachmentType : ::System::Int32
	{
		Region = 0,
		Boundingbox = 1,
		Mesh = 2,
		Linkedmesh = 3,
		Path = 4,
		Point = 5,
		Clipping = 6,
		Sequence = 7,
	};
}
