#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_UI3DMAP3DCAMERASETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF63A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DMap3DCameraSettings_TypeDefinitionIndex = 69674;

	class UI3DMap3DCameraSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DefaultZoom; // 0x18
		::System::Single ZoomRatioMin; // 0x1C
		::System::Single ZoomRatioMax; // 0x20
		::System::Single ZoomSpeed; // 0x24
		::System::Single ZoomOuterRatio; // 0x28
		::System::Single ZoomRecoverTime; // 0x2C
		::System::Single ZoomOuterStopVelocity; // 0x30
		::System::Single GamepadZoomScale; // 0x34
		::System::Single GamepadTranslationScale; // 0x38
		::System::Single VirtualJoyTranslationScale; // 0x3C
		::UnityEngine::Vector2 PlayerInitRangeX; // 0x40
		::UnityEngine::Vector2 PlayerInitRangeY; // 0x48
		::System::Single TranslationSpeed; // 0x50
		::System::Single TranslationDamping; // 0x54
		::System::Single TranslationDampingOuter; // 0x58
		::System::Single TranslationStopOuter; // 0x5C
		::UnityEngine::Vector2 SafeRangeX; // 0x60
		::UnityEngine::Vector2 SafeRangeY; // 0x68
		::System::Single CenteringLerpTime; // 0x70
		::System::Single InnerBoundRatio; // 0x74
		::System::Single OuterBoundRatio; // 0x78
		::System::Single RecoverToBoundTime; // 0x7C
		::System::Boolean CenteringWhenScreenBiggerThanCanvas; // 0x80
		::System::Single ResetDuration; // 0x84
		::UnityEngine::AnimationCurve* CenteringCurve; // 0x88
		::UnityEngine::AnimationCurve* ResetCurve; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DMAP3DCAMERASETTINGS__CTOR_OFFSET))(this);
		}
	};
}
