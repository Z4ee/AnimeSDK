#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CollisionStrategyAlgorithm.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class AdvancedCollisionConfigData; }
namespace MoleMole { class CameraDelayDatas; }
namespace MoleMole { class CameraModelSphereData; }
namespace MoleMole { class CameraScreenDragConfig; }
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class DelayBlenderSettings; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAMODULEAVATARDATACONFIG_INNERINIT_OFFSET UNITYSDK_OFFSET(0x1742B2A0)
#define MOLEMOLE_CAMERAMODULEAVATARDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1742B300)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleAvatarDataConfig_TypeDefinitionIndex = 72032;

	class CameraModuleAvatarDataConfig : public ::System::Object
	{
	public:
		::System::Single NearClipPlane; // 0x10
		::System::Single FarClipPlane; // 0x14
		::UnityEngine::Vector2 DRAG_ELEVATION_REGIOIN; // 0x18
		::System::Single CAMERA_LOCATE_RADIUS; // 0x20
		::System::Single ELEVATION_ANGLE; // 0x24
		::MoleMole::CameraModelSphereData* DEFAULTSPHEREDATA; // 0x28
		::System::Single ROTATE_STATETRANSITION_TIME; // 0x30
		::UnityEngine::AnimationCurve* ROTATE_STATETRANSITION_CURVER; // 0x38
		::System::Single CHANGEAVATAR_STATETRANSITION_TIME; // 0x40
		::UnityEngine::AnimationCurve* CHANGEAVATAR_STATETRANSITION_CURVER; // 0x48
		::System::Boolean MUTE_DELAY_USING; // 0x50
		::System::Single DEFAULT_SMOOTH_TIME; // 0x54
		::System::Boolean DELAY_ISAUTOCHANGECAMERASTATE; // 0x58
		::System::Boolean DELAY_ISCHANGEFOLLOWANIM; // 0x59
		::MoleMole::Config::CameraDelayMoveMode DELAY_CameraDelayMoveMode; // 0x5C
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::CameraDelayDatas*>* DELAYDATAS; // 0x60
		::MoleMole::Cameras::DelayBlenderSettings* DELAY_CustomBlendDatas; // 0x68
		::System::Single DELAY_SPEED_SMOOTH_TIME; // 0x70
		::MoleMole::CameraScreenDragConfig* DragConfig; // 0x78
		::System::Single camUpVelocityY; // 0x80
		::System::Single camUpDumperY; // 0x84
		::System::Single camUpDumperTimer; // 0x88
		::UnityEngine::AnimationCurve* CamUpDumperCurve; // 0x90
		::System::Single camDropVelocityY; // 0x98
		::System::Single camDropDumperY; // 0x9C
		::System::Single camDropDumperTimer; // 0xA0
		::UnityEngine::AnimationCurve* CamDropDumperCurve; // 0xA8
		::System::Single camOverAxisProtectRadius; // 0xB0
		::System::Boolean ENABLE_CAMERA_STATE_OVERRIDE; // 0xB4
		::MoleMole::Config::InlevelCameraState OverrideInlevelCameraState; // 0xB8
		::System::Boolean MUTE_CAMERA_ZOOM; // 0xBC
		::System::Boolean MUTE_CAMERA_SHAKE; // 0xBD
		::System::Boolean MUTE_CAMERA_SHAKE_ADVANCED_PROCESS; // 0xBE
		::System::Boolean MUTE_CAMERA_STRETCH; // 0xBF
		::System::Boolean MUTE_CAMERA_STRETCH_END_AUTO_END_PITCH; // 0xC0
		::System::Boolean MUTE_CAMERA_COLLIDER; // 0xC1
		::MoleMole::CollisionStrategyAlgorithm CollisionStrategyAlgorithmType; // 0xC4
		::MoleMole::AdvancedCollisionConfigData* CinemachineCollisionConfig; // 0xC8
		::MoleMole::CustomCollisionConfigData* CustomCollisionConfig; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEAVATARDATACONFIG__CTOR_OFFSET))(this);
		}

		::System::Void InnerInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEAVATARDATACONFIG_INNERINIT_OFFSET))(this);
		}
	};
}
