#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraPieceAudioVolumeRank.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraSafeZone.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigHollowChessboardCameraDragSpeed; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::Config { class ConfigHollowCameraAutoKey; }
namespace MoleMole::Config { class ConfigHollowCameraBounce; }
namespace MoleMole::Config { class ConfigHollowCameraDrag; }
namespace MoleMole::Config { class ConfigHollowCameraEasing; }
namespace MoleMole::Config { class ConfigHollowCameraFollow; }
namespace MoleMole::Config { class ConfigHollowCameraInit; }
namespace MoleMole::Config { class ConfigHollowCameraLight; }
namespace MoleMole::Config { class ConfigHollowCameraMoveToCenter; }
namespace MoleMole::Config { class ConfigHollowCameraPredicate; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace MoleMole::Config { class ConfigHollowCameraTranslation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_GETCAMERASTRETCHV2_OFFSET UNITYSDK_OFFSET(0x181CA760)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x181CA8F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardCamera_TypeDefinitionIndex = 61998;

	class ConfigHollowChessboardCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigHollowCameraInit* configCameraInit; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>* configCameraStretchDictonaryMultiPlatformV2; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::EUILayoutPlatform, ::MoleMole::Config::ConfigHollowCameraStretchV2*>*>* configCameraStretchDictonaryMultiPlatformV2_B; // 0x68
		::MoleMole::Config::ConfigHollowCameraDrag* configCameraDrag; // 0x70
		::MoleMole::ConfigHollowChessboardCameraDragSpeed* CameraDragSpeed; // 0x78
		::MoleMole::Config::ConfigHollowCameraEasing* configCameraEasing; // 0x80
		::MoleMole::Config::ConfigHollowCameraBounce* configCameraBounce; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraShake*>* configShakeDictonary; // 0x90
		::MoleMole::Config::ConfigHollowCameraTranslation* configTranslation; // 0x98
		::MoleMole::Config::ConfigHollowCameraLight* configCameraLight; // 0xA0
		::MoleMole::Config::ConfigHollowCameraTranslation* configPushBackTranslation; // 0xA8
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0xB0
		::System::Single noiseDelayTime; // 0xB8
		::System::Single noiseBlendDuration; // 0xBC
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>* AnimationCurveDict; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraMoveToCenter*>* configMoveToCenterDic; // 0xD0
		::System::Boolean IsTriggerSafeArea; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraSafeZone>* ConfigHollowCameraSafeArea; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowCameraFollow*>* configFolloCameraDict; // 0xE8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowCameraPieceAudioVolumeRank>* configPieceAudioVolumeRankList; // 0xF0
		::MoleMole::Config::ConfigHollowCameraPredicate* ConfigHollowCameraPredicate; // 0xF8
		::MoleMole::Config::ConfigHollowCameraAutoKey* ConfigHollowCameraAutoKey; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigHollowCameraStretchV2* GetCameraStretchV2(::System::String* key, ::MoleMole::EUILayoutPlatform platform)
		{
			return ((::MoleMole::Config::ConfigHollowCameraStretchV2*(*)(::PVOID, ::System::String*, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_GETCAMERASTRETCHV2_OFFSET))(this, key, platform);
		}
	};
}
