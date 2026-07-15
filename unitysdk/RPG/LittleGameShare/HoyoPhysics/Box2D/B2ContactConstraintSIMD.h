#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray4_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FloatW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2W.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactConstraintSIMD_TypeDefinitionIndex = 35073;

	struct alignas(4) B2ContactConstraintSIMD
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray4_1<::System::Int32> indexA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray4_1<::System::Int32> indexB; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW invMassA; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW invMassB; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW invIA; // 0x50
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW invIB; // 0x60
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W normal; // 0x70
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW friction; // 0x90
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW tangentSpeed; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW rollingResistance; // 0xB0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW rollingMass; // 0xC0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW rollingImpulse; // 0xD0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW biasRate; // 0xE0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW massScale; // 0xF0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW impulseScale; // 0x100
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W anchorA1; // 0x110
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W anchorB1; // 0x130
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW normalMass1; // 0x150
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW tangentMass1; // 0x160
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW baseSeparation1; // 0x170
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW normalImpulse1; // 0x180
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW totalNormalImpulse1; // 0x190
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW tangentImpulse1; // 0x1A0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W anchorA2; // 0x1B0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W anchorB2; // 0x1D0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW baseSeparation2; // 0x1F0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW normalImpulse2; // 0x200
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW totalNormalImpulse2; // 0x210
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW tangentImpulse2; // 0x220
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW normalMass2; // 0x230
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW tangentMass2; // 0x240
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW restitution; // 0x250
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW relativeVelocity1; // 0x260
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW relativeVelocity2; // 0x270
	};
}
