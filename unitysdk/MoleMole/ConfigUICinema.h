#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaDistanceRatioRotationStruct.h"
#include "unitysdk/MoleMole/CinemaProjectorStruct.h"
#include "unitysdk/MoleMole/CinemaSingleClickCurveParamsStruct.h"
#include "unitysdk/MoleMole/CinemaSinglePushPullParamsStruct.h"
#include "unitysdk/MoleMole/ConfigCinemaDepthOfFieldParam.h"
#include "unitysdk/MoleMole/ConfigCinemaFogParam.h"

namespace MoleMole { class ConfigCinemaMoveCurve; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGUICINEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x16275FA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICinema_TypeDefinitionIndex = 41068;

	class ConfigUICinema : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaProjectorStruct>* projectDict; // 0x58
		::UnityEngine::AnimationCurve* dateEnterCurve; // 0x60
		::UnityEngine::AnimationCurve* cameraDefaultCurve; // 0x68
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaMoveCurve*>* cameraPushCurve; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::CinemaCameraPosEnum>* defaultPushList; // 0x78
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::CinemaDistanceRatioRotationStruct>* cameraRotateCurve; // 0x80
		::MoleMole::CinemaSinglePushPullParamsStruct singleCameraPushCurveParam; // 0x88
		::MoleMole::CinemaSinglePushPullParamsStruct singleCameraPullCurveParam; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CinemaSingleClickCurveParamsStruct>* singleCameraClickCurveDic; // 0xA8
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaFogParam>* fogParamEffect; // 0xB0
		::MoleMole::ConfigCinemaDepthOfFieldParam defaultDepth; // 0xB8
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::MoleMole::ConfigCinemaDepthOfFieldParam>* depthParamEffect; // 0xC8
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0xD0
		::System::Single specificNoiseAmplitudeGain; // 0xD8
		::System::Single noiseDelayTime; // 0xDC
		::System::Single noiseBlendDuration; // 0xE0
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0xE8
		::System::Single countDownEffectTime; // 0xF0
		::System::Single npcAnimspeed; // 0xF4
		::System::Single protectTimeAfterBubbleDisappear; // 0xF8
		::System::Single protectTimeAfterClickMiss; // 0xFC
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::System::Collections::Generic::List_1<::System::Int32>*>* cameraHideSite; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA__CTOR_OFFSET))(this);
		}
	};
}
