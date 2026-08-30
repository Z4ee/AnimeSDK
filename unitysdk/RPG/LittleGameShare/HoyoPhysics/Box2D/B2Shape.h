#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Filter.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xC31FBF0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Shape_TypeDefinitionIndex = 36074;

	class B2Shape : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::Int32 nextShapeId; // 0x18
		::System::Int32 bodyId; // 0x1C
		::System::Single restitution; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeUnion us; // 0x24
		::System::Single rollingResistance; // 0xB4
		::System::Int32 proxyKey; // 0xB8
		::System::Int32 id; // 0xBC
		::System::Boolean enableSensorEvents; // 0xC0
		::System::Boolean enableHitEvents; // 0xC1
		::System::Boolean enablePreSolveEvents; // 0xC2
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCentroid; // 0xC4
		::System::Single tangentSpeed; // 0xCC
		::System::Single density; // 0xD0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB aabb; // 0xD4
		::System::Boolean enlargedAABB; // 0xE4
		::System::Boolean enableContactEvents; // 0xE5
		::System::UInt16 generation; // 0xE6
		::System::Int32 sensorIndex; // 0xE8
		::System::Int32 userMaterialId; // 0xEC
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB fatAABB; // 0xF0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Filter filter; // 0x100
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeType type; // 0x118
		::System::Int32 prevShapeId; // 0x11C
		::System::UInt32 customColor; // 0x120
		::System::Single friction; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SHAPE__CTOR_OFFSET))(this);
		}
	};
}
