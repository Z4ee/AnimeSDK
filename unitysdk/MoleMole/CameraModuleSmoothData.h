#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CAMERAMODULESMOOTHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167EBCE0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleSmoothData_TypeDefinitionIndex = 64945;

	class CameraModuleSmoothData : public ::System::Object
	{
	public:
		::System::Single SMOOTH_FACTOR_SPHERICAL_X; // 0x10
		::System::Single SMOOTH_FACTOR_SPHERICAL_Y; // 0x14
		::System::Single SMOOTH_FACTOR_SPHERICAL_Z; // 0x18
		::System::Single SMOOTH_FACTOR_POSITION_LERP_XZ; // 0x1C
		::System::Single SMOOTH_FACTOR_POSITION_LERP_Y; // 0x20
		::System::Single SMOOTH_FACTOR_ROTATION_LERP; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULESMOOTHDATA__CTOR_OFFSET))(this);
		}
	};
}
