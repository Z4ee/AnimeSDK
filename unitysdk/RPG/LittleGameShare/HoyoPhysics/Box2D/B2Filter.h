#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x27330)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Filter_TypeDefinitionIndex = 35980;

	struct alignas(8) B2Filter
	{
		::System::UInt64 categoryBits; // 0x10
		::System::UInt64 maskBits; // 0x18
		::System::Int32 groupIndex; // 0x20

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2FILTER__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
