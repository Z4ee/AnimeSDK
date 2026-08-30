#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ROT__CTOR_OFFSET UNITYSDK_OFFSET(0x6B9800)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Rot_TypeDefinitionIndex = 36054;

	struct alignas(4) B2Rot
	{
		::System::Single c; // 0x10
		::System::Single s; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ROT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
