#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODY__CTOR_OFFSET UNITYSDK_OFFSET(0xB60A1A0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Body_TypeDefinitionIndex = 35043;

	class B2Body : public ::System::Object
	{
	public:
		::System::Object* userData; // 0x10
		::System::String* name; // 0x18
		::System::Int32 headShapeId; // 0x20
		::System::Int32 bodyMoveIndex; // 0x24
		::System::Int32 headChainId; // 0x28
		::System::Int32 headJointKey; // 0x2C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType type; // 0x30
		::System::Single sleepTime; // 0x34
		::System::Int32 jointCount; // 0x38
		::System::Int32 id; // 0x3C
		::System::Int32 islandPrev; // 0x40
		::System::Int32 localIndex; // 0x44
		::System::Int32 islandId; // 0x48
		::System::Single inertia; // 0x4C
		::System::Int32 islandNext; // 0x50
		::System::UInt32 flags; // 0x54
		::System::Int32 shapeCount; // 0x58
		::System::Boolean enableSleep; // 0x5C
		::System::Boolean isMarked; // 0x5D
		::System::UInt16 generation; // 0x5E
		::System::Int32 headContactKey; // 0x60
		::System::Int32 contactCount; // 0x64
		::System::Single sleepThreshold; // 0x68
		::System::Single mass; // 0x6C
		::System::Int32 setIndex; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODY__CTOR_OFFSET))(this);
		}
	};
}
