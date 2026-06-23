#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAOUTELEVATION_CONSTRAINTELEVATION_OFFSET UNITYSDK_OFFSET(0x7D5500)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAOUTELEVATION_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x144C5D80)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraOutElevation_TypeDefinitionIndex = 42911;

	struct alignas(4) OverShoulderCameraOutElevation
	{
		::System::Single min; // 0x10
		::System::Single max; // 0x14
		::System::Single targetElevation; // 0x18
		::System::Single targetElevationFactor; // 0x1C

		static ::MoleMole::Cameras::OverShoulderCameraOutElevation GetDefault()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraOutElevation(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAOUTELEVATION_GETDEFAULT_OFFSET))();
		}

		::System::Single ConstraintElevation(::System::Single val)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAOUTELEVATION_CONSTRAINTELEVATION_OFFSET))(this, val);
		}
	};
}
