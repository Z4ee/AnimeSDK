#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_PHYSICSCOLLIDER2DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB34000)

namespace RPG::LittleGameShare::HoyoPhysics
{
	inline static constexpr unsigned int PhysicsCollider2DConfig_TypeDefinitionIndex = 35017;

	class PhysicsCollider2DConfig : public ::System::Object
	{
	public:
		::System::Single Density; // 0x10
		::System::Single Friction; // 0x14
		::System::Boolean IsSensor; // 0x18
		::System::Single Restitution; // 0x1C
		::System::Boolean EnableCollisionEvent; // 0x20
		::System::Boolean EnableTriggerEvent; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_PHYSICSCOLLIDER2DCONFIG__CTOR_OFFSET))(this);
		}
	};
}
