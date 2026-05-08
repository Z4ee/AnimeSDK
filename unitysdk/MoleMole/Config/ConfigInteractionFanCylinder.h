#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCircularSector3D.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractionFanCylinder_TypeDefinitionIndex = 71923;

	struct alignas(4) ConfigInteractionFanCylinder
	{
		::MoleMole::Config::ConfigCircularSector3D CircularSector3D; // 0x10
		::System::Boolean EnableVerticalCheck; // 0x30
		::System::Single HeightOffsetFromOrigin; // 0x34
	};
}
