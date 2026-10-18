#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8230D0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 36761;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Boolean enablePreSolveEvents; // 0x18
		::System::UInt16 generation; // 0x1A
		::System::Int32 bodyId; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x20
		::System::Int32 nextShapeId; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0x3C
		::System::Int32 userMaterialId; // 0x4C
		::System::Int32 sensorIndex; // 0x50
		::System::Single friction; // 0x54
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0x68
		::System::Int32 id; // 0x70
		::System::Single rollingResistance; // 0x74
		::System::UInt32 customColor; // 0x78
		::System::Int32 prevShapeId; // 0x7C
		::System::Boolean enlargedAABB; // 0x80
		::System::Boolean enableHitEvents; // 0x81
		::System::Boolean enableContactEvents; // 0x82
		::System::Boolean enableSensorEvents; // 0x83
		::System::Single restitution; // 0x84
		::System::Int32 proxyKey; // 0x88
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x8C
		::System::Single tangentSpeed; // 0x11C
		::System::Single density; // 0x120
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET))(this);
		}
	};
}
