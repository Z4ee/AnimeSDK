#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeType_TypeDefinitionIndex = 35221;

	enum class B2ShapeType : ::System::Int32
	{
		b2_circleShape = 0,
		b2_capsuleShape = 1,
		b2_segmentShape = 2,
		b2_polygonShape = 3,
		b2_chainSegmentShape = 4,
		b2_shapeTypeCount = 5,
	};
}
