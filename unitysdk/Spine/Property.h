#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int Property_TypeDefinitionIndex = 37440;

	enum class Property : ::System::Int32
	{
		Rotate = 0,
		X = 1,
		Y = 2,
		ScaleX = 3,
		ScaleY = 4,
		ShearX = 5,
		ShearY = 6,
		RGB = 7,
		Alpha = 8,
		RGB2 = 9,
		Attachment = 10,
		Deform = 11,
		Event = 12,
		DrawOrder = 13,
		IkConstraint = 14,
		TransformConstraint = 15,
		PathConstraintPosition = 16,
		PathConstraintSpacing = 17,
		PathConstraintMix = 18,
		Sequence = 19,
	};
}
