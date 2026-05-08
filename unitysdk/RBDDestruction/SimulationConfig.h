#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RBDDESTRUCTION_SIMULATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EBB40)

namespace RBDDestruction
{
	inline static constexpr unsigned int SimulationConfig_TypeDefinitionIndex = 29702;

	class SimulationConfig : public ::System::Object
	{
	public:
		::System::Single gravityFactor; // 0x10
		::System::Single speedFactor; // 0x14
		::System::Single speedDamping; // 0x18
		::System::Single rotationSpeedFactor; // 0x1C
		::System::Single rotationDamping; // 0x20
		::System::Single stiffness; // 0x24
		::System::Single destroyThreshold; // 0x28
		::System::Single fadeDelay; // 0x2C
		::System::Single fadeDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_SIMULATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
