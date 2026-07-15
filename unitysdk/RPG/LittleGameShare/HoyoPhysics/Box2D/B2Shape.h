#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xB65A480)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 35213;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Boolean enableSensorEvents; // 0x18
		::System::Boolean enableContactEvents; // 0x19
		::System::UInt16 generation; // 0x1A
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0xAC
		::System::Single friction; // 0xB4
		::System::Single tangentSpeed; // 0xB8
		::System::UInt32 customColor; // 0xBC
		::System::Int32 sensorIndex; // 0xC0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0xC4
		::System::Int32 userMaterialId; // 0xD4
		::System::Single rollingResistance; // 0xD8
		::System::Single restitution; // 0xDC
		::System::Int32 bodyId; // 0xE0
		::System::Boolean enlargedAABB; // 0xE4
		::System::Boolean enablePreSolveEvents; // 0xE5
		::System::Boolean enableHitEvents; // 0xE6
		::System::Single density; // 0xE8
		::System::Int32 nextShapeId; // 0xEC
		::System::Int32 proxyKey; // 0xF0
		::System::Int32 id; // 0xF4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0xF8
		::System::Int32 prevShapeId; // 0x108
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x10C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET))(this);
		}
	};
}
