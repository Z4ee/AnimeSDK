#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class ICameraState; }

namespace RPGCamera
{
	inline static constexpr unsigned int BaseCameraStateRunner_1_TypeDefinitionIndex = 42632;

	template <typename CameraStateType>
	class BaseCameraStateRunner_1 : public ::System::Object
	{
	public:
		::System::Boolean _isBackground; // 0x0
		CameraStateType _state; // 0x0
		::RPGCamera::CameraStateData _retData; // 0x0
	};
}
