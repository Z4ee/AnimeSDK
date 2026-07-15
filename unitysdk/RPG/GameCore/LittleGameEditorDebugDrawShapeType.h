#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEditorDebugDrawShapeType_TypeDefinitionIndex = 18123;

	enum class LittleGameEditorDebugDrawShapeType : ::System::Int32
	{
		Sphere = 0,
		Box = 1,
		Capsule = 2,
		FiveDimGridView = 3,
	};
}
