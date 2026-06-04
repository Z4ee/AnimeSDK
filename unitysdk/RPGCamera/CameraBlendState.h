#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/BaseCameraState.h"

#define RPGCAMERA_CAMERABLENDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA23D7C0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraBlendState_TypeDefinitionIndex = 41757;

	class CameraBlendState : public ::RPGCamera::BaseCameraState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERABLENDSTATE__CTOR_OFFSET))(this);
		}
	};
}
