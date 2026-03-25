#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_UI3DFREELOOKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA651D90)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DFreeLookController_TypeDefinitionIndex = 59839;

	class UI3DFreeLookController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DefaultZoom; // 0x18
		::System::Single ZoomRatioMin; // 0x1C
		::System::Single ZoomRatioMax; // 0x20
		::System::Single ZoomSpeed; // 0x24
		::UnityEngine::AnimationCurve* FreeLookCameraZoomCurve; // 0x28
		::System::Single LerpDuration; // 0x30
		::UnityEngine::AnimationCurve* CameraLerpCurve; // 0x38
		::UnityEngine::AnimationCurve* OrbitsHeightCurve; // 0x40
		::UnityEngine::AnimationCurve* YAxisValueClampCurve; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DFREELOOKCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
