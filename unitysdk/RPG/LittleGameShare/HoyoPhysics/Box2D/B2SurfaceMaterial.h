#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SurfaceMaterial_TypeDefinitionIndex = 35237;

	struct alignas(4) B2SurfaceMaterial
	{
		::System::Single friction; // 0x10
		::System::Single restitution; // 0x14
		::System::Single rollingResistance; // 0x18
		::System::Single tangentSpeed; // 0x1C
		::System::Int32 userMaterialId; // 0x20
		::System::UInt32 customColor; // 0x24
	};
}
