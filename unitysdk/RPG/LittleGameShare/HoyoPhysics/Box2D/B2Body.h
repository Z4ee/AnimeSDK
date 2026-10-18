#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C800C30)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Body_TypeDefinitionIndex = 36591;

	class B2Body : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Object* userData; // 0x18
		::System::Int32 islandPrev; // 0x20
		::System::UInt16 generation; // 0x24
		::System::Boolean enableSleep; // 0x26
		::System::Boolean isMarked; // 0x27
		::System::Int32 contactCount; // 0x28
		::System::Int32 id; // 0x2C
		::System::Single sleepTime; // 0x30
		::System::Single mass; // 0x34
		::System::Int32 setIndex; // 0x38
		::System::Int32 headShapeId; // 0x3C
		::System::Int32 bodyMoveIndex; // 0x40
		::System::Int32 headJointKey; // 0x44
		::System::Int32 shapeCount; // 0x48
		::System::Int32 headContactKey; // 0x4C
		::System::Int32 headChainId; // 0x50
		::System::Single inertia; // 0x54
		::System::UInt32 flags; // 0x58
		::System::Int32 islandNext; // 0x5C
		::System::Int32 localIndex; // 0x60
		::System::Int32 islandId; // 0x64
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType type; // 0x68
		::System::Int32 jointCount; // 0x6C
		::System::Single sleepThreshold; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODY__CTOR_OFFSET))(this);
		}
	};
}
