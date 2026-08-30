#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOFTNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x14A260)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Softness_TypeDefinitionIndex = 36088;

	struct alignas(4) B2Softness
	{
		::System::Single biasRate; // 0x10
		::System::Single massScale; // 0x14
		::System::Single impulseScale; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOFTNESS__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
