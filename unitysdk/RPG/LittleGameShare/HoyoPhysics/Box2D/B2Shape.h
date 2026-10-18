#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C851130)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 36761;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::UInt32 customColor; // 0x18
		::System::Int32 nextShapeId; // 0x1C
		::System::Int32 userMaterialId; // 0x20
		::System::Boolean enableHitEvents; // 0x24
		::System::Boolean enablePreSolveEvents; // 0x25
		::System::UInt16 generation; // 0x26
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0x28
		::System::Int32 prevShapeId; // 0x38
		::System::Boolean enableSensorEvents; // 0x3C
		::System::Boolean enableContactEvents; // 0x3D
		::System::Boolean enlargedAABB; // 0x3E
		::System::Single restitution; // 0x40
		::System::Single density; // 0x44
		::System::Single rollingResistance; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0x4C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x5C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x60
		::System::Int32 proxyKey; // 0x78
		::System::Single tangentSpeed; // 0x7C
		::System::Int32 bodyId; // 0x80
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0x84
		::System::Single friction; // 0x8C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x90
		::System::Int32 sensorIndex; // 0x120
		::System::Int32 id; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET))(this);
		}
	};
}
