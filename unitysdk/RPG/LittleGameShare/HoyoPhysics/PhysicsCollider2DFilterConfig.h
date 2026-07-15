#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_PHYSICSCOLLIDER2DFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB34010)

namespace RPG::LittleGameShare::HoyoPhysics
{
	inline static constexpr unsigned int PhysicsCollider2DFilterConfig_TypeDefinitionIndex = 35018;

	class PhysicsCollider2DFilterConfig : public ::System::Object
	{
	public:
		::System::UInt64 CategoryBits; // 0x10
		::System::UInt64 MaskBits; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_PHYSICSCOLLIDER2DFILTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
