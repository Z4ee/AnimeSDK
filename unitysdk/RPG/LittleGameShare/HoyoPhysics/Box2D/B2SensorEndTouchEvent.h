#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORENDTOUCHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0780)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SensorEndTouchEvent_TypeDefinitionIndex = 35201;

	struct alignas(8) B2SensorEndTouchEvent
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId sensorShapeId; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId visitorShapeId; // 0x28

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SENSORENDTOUCHEVENT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
