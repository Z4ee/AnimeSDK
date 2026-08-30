#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTIONLOCKS__CTOR_OFFSET UNITYSDK_OFFSET(0x3B784F0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MotionLocks_TypeDefinitionIndex = 36024;

	struct alignas(1) B2MotionLocks
	{
		::System::Boolean linearX; // 0x10
		::System::Boolean linearY; // 0x11
		::System::Boolean angularZ; // 0x12

		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOTIONLOCKS__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
