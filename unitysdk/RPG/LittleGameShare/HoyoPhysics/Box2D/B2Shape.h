#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C300E80)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 36074;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Int32 userMaterialId; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0x20
		::System::Single restitution; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x2C
		::System::UInt16 generation; // 0xBC
		::System::Boolean enableContactEvents; // 0xBE
		::System::Boolean enableSensorEvents; // 0xBF
		::System::Int32 nextShapeId; // 0xC0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0xC4
		::System::Int32 bodyId; // 0xD4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0xD8
		::System::Single density; // 0xE8
		::System::Single friction; // 0xEC
		::System::Single tangentSpeed; // 0xF0
		::System::Int32 proxyKey; // 0xF4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0xF8
		::System::Int32 id; // 0x110
		::System::Boolean enableHitEvents; // 0x114
		::System::Boolean enablePreSolveEvents; // 0x115
		::System::Boolean enlargedAABB; // 0x116
		::System::Int32 prevShapeId; // 0x118
		::System::UInt32 customColor; // 0x11C
		::System::Int32 sensorIndex; // 0x120
		::System::Single rollingResistance; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET))(this);
		}
	};
}
