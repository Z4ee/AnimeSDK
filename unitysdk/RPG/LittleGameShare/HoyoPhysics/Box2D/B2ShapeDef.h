#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SurfaceMaterial.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeDef_TypeDefinitionIndex = 35216;

	struct alignas(8) B2ShapeDef
	{
		::System::Object* userData; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial material; // 0x18
		::System::Single density; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x38
		::System::Boolean isSensor; // 0x50
		::System::Boolean enableSensorEvents; // 0x51
		::System::Boolean enableContactEvents; // 0x52
		::System::Boolean enableHitEvents; // 0x53
		::System::Boolean enablePreSolveEvents; // 0x54
		::System::Boolean invokeContactCreation; // 0x55
		::System::Boolean updateBodyMass; // 0x56
		::System::Int32 internalValue; // 0x58
	};
}
