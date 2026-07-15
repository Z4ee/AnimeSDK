#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Visitor_TypeDefinitionIndex = 35258;

	struct alignas(4) B2Visitor
	{
		::System::Int32 shapeId; // 0x10
		::System::UInt16 generation; // 0x14
	};
}
