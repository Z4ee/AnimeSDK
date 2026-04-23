#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraBlendState; }

#define RPGCAMERA_CAMERASTATEFACTORY_CREATEBLENDSTATE_OFFSET UNITYSDK_OFFSET(0x8DF1970)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateFactory_TypeDefinitionIndex = 40945;

	class CameraStateFactory : public ::System::Object
	{
	public:
		static ::RPGCamera::CameraBlendState* CreateBlendState()
		{
			return ((::RPGCamera::CameraBlendState*(*)())((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEFACTORY_CREATEBLENDSTATE_OFFSET))();
		}
	};
}
