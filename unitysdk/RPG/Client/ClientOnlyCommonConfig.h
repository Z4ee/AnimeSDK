#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class ClientOnlyCommonConfig_MainLightOffsetItem; }
namespace RPG::Client { class NamedCurve; }
namespace RPG::Client { class NpcEyeConfig; }
namespace RPG::Client { class RootMotionBakedConfig; }
namespace RPG::Client { class SpringBoneCommonConfig; }
namespace RPG::Client { class TiltCommonConfig; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPGTools::Timeline::CharacterStoryMove { class CharacterStoryMoveSequenceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOFORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA08E370)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOFORPC_OFFSET UNITYSDK_OFFSET(0xA08E450)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOFORPHONE_OFFSET UNITYSDK_OFFSET(0xA08E3E0)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA090BB0)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOGEARSETTING_OFFSET UNITYSDK_OFFSET(0xA090210)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_GAMEPADVIBRATIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xA090BD0)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_ZOOMSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA090BC0)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_ZOOMSPEEDRATIOGEARSETTING_OFFSET UNITYSDK_OFFSET(0xA090190)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_INITCONFIGALL_OFFSET UNITYSDK_OFFSET(0xA08EF10)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SAVEPLAYERPREFSCONFIG_OFFSET UNITYSDK_OFFSET(0xA08FF60)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_CAMERAROTATIONSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA090A70)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_CAMERAROTATIONSPEEDRATIOGEARSETTING_OFFSET UNITYSDK_OFFSET(0xA090880)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_GAMEPADVIBRATIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xA090B20)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_ZOOMSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA0909C0)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_ZOOMSPEEDRATIOGEARSETTING_OFFSET UNITYSDK_OFFSET(0xA090740)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA090BE0)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xA090290)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITCURVECONFIGALL_OFFSET UNITYSDK_OFFSET(0xA08EF80)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITGAMEPADCONFIG_OFFSET UNITYSDK_OFFSET(0xA090550)
#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITPLAYERPREFSCONFIG_OFFSET UNITYSDK_OFFSET(0xA08FF10)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientOnlyCommonConfig_TypeDefinitionIndex = 55381;

	class ClientOnlyCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* EnvSystemDefaultProfilePath; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ClientOnlyCommonConfig_MainLightOffsetItem*>* MainLightOffsetPresets; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* BlendCurveList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* TimeSlowCurveList; // 0x30
		::System::Single ControllerDpi; // 0x38
		::System::Single DefaultShakeTime; // 0x3C
		::System::Single Amplitude; // 0x40
		::UnityEngine::Vector3 Direction; // 0x44
		::UnityEngine::AnimationCurve* HitTimeSlowCurve; // 0x50
		::UnityEngine::AnimationCurve* ChooseShake_Curve; // 0x58
		::System::Single ChooseShake_DefaultDistance; // 0x60
		::System::Single ChooseShake_DefaultAmplitude; // 0x64
		::System::Boolean ChooseShake_IsMainCamOrtho; // 0x68
		::System::Boolean IsCovertDragDir; // 0x69
		::System::Single DragMinDistanceForChangeTarget; // 0x6C
		::System::Single DragMaxDistanceForChangeTarget; // 0x70
		::System::Single DragMinDistanceForChangeTargetRow; // 0x74
		::System::Single DragMaxDistanceForChangeTargetRow; // 0x78
		::UnityEngine::AnimationCurve* DragDistanceScaleCurve; // 0x80
		::System::Single DragDistanceScaleCurveXMax; // 0x88
		::UnityEngine::AnimationCurve* DragDistanceScaleCurveByTargetCount; // 0x90
		::System::Single DragFlashDistanceMagnification; // 0x98
		::System::Single DragFlashMaxTime; // 0x9C
		::System::Single SpeedUpRatio; // 0xA0
		::System::Boolean DisableTurnPageEffect; // 0xA4
		::System::Single DelayCloseFrameCaptureUIDuration; // 0xA8
		::System::Single FrameCaptureFadeDuration; // 0xAC
		::System::Single AutoDelayCloseFrameCaptureUIDuration; // 0xB0
		::System::Single AutoFrameCaptureFadeDuration; // 0xB4
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* HitTimeSlowCurveList; // 0xB8
		::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* StoryBlendCurveList; // 0xC0
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryCameraLookAtShiftCurveList; // 0xC8
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryDollyPointAnimCurveList; // 0xD0
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryDollyPointSoftSelectCurveList; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryLookAtCurveList; // 0xE0
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryLookAtAdditiveCurveList; // 0xE8
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryLookAtTileCurveList; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StorySteerCurveList; // 0xF8
		::RPGTools::Timeline::CharacterStoryMove::CharacterStoryMoveSequenceConfig* StoryMoveSequenceConfig; // 0x100
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryDollyTrackCurveList; // 0x108
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* StoryBodyControlIKCurveList; // 0x110
		::System::String* BattleDefaultSceneName; // 0x118
		::System::Boolean UseStackCamera; // 0x120
		::System::Single ZoomSpeedRatio; // 0x124
		::System::Single ZoomSpeedRatioForPC; // 0x128
		::System::Single ZoomSpeedRatioForController; // 0x12C
		::System::Single CameraRotationSpeedRatioScale; // 0x130
		::UnityEngine::Vector2 _CameraRotationSpeedRatioForPC; // 0x134
		::UnityEngine::Vector2 _CameraRotationSpeedRatioForPhone; // 0x13C
		::UnityEngine::Vector2 _CameraRotationSpeedRatioForController; // 0x144
		::System::Int32 _CameraRotationSpeedRatioGearForPC; // 0x14C
		::System::Int32 _CameraRotationSpeedRatioGearForPhone; // 0x150
		::System::Int32 _cameraRotationSpeedRatioGearForController; // 0x154
		::System::Int32 _ZoomSpeedRatioGear; // 0x158
		::System::Int32 _ZoomSpeedRatioGearForPC; // 0x15C
		::System::Int32 _ZoomSpeedRatioGearForController; // 0x160
		::System::UInt32 _GamepadVibrationIntensity; // 0x164
		::System::Boolean ForbidDynamicOffsetInUltraSkill; // 0x168
		::System::Boolean UseTurnBackAnim; // 0x169
		::RPG::Client::TiltCommonConfig* CharacterTiltConfig; // 0x170
		::RPG::Client::RootMotionBakedConfig* CharacterRootMotionBakedConfig; // 0x178
		::RPG::Client::NpcEyeConfig* NpcEyeConfig; // 0x180
		::RPG::Client::NamedCurve* CharacterWaterInteractSpeedToRadiusCurve; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* CharacterModelFloatingCurveList; // 0x190
		::UnityEngine::AnimationCurve* CameraSpeedChangeCurve; // 0x198
		::System::String* ADVCableAttachPointName; // 0x1A0
		::System::String* ADVCableConfigPrefabPath; // 0x1A8
		::RPG::Client::NamedCurve* ADVMovementStepToGroundCurve; // 0x1B0
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* ADVMovementStepToGroundSpeciallyCurveList; // 0x1B8
		::RPG::Client::NamedCurve* ADVMovementForwardGroundNormalWeightCurve; // 0x1C0
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* RadialBlurCurveList; // 0x1C8
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* ColorGradingCurveList; // 0x1D0
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* WalkingEffectCurveList; // 0x1D8
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* TransitionCurveList; // 0x1E0
		::System::Single ADVMapRotationSmoothTime; // 0x1E8
		::System::Single ADVMapRotationDampingSmoothTime; // 0x1EC
		::System::Single HitShakeAmplitude; // 0x1F0
		::System::Single HitShakeDuration; // 0x1F4
		::UnityEngine::AnimationCurve* HitShakeCurve; // 0x1F8
		::System::Collections::Generic::List_1<::RPG::GameCore::VCameraState>* BlendRecoverState; // 0x200
		::System::Single FollowRadiusAdd; // 0x208
		::UnityEngine::Vector3 AnchorOffsetAdd; // 0x20C
		::RPG::GameCore::VCameraBlend* RecoverBlend; // 0x218
		::System::Single TimelineClampYOffsetThreshold; // 0x220
		::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* CustomHitShakeCurves; // 0x228
		::UnityEngine::AnimationCurve* BodyLookAtWeightCurve; // 0x230
		::UnityEngine::AnimationCurve* FootIKStepUpRotationRatioCurve; // 0x238
		::RPG::Client::SpringBoneCommonConfig* springBoneCommonConfig; // 0x240
		::UnityEngine::AnimationCurve* VideoVolumePsCurve; // 0x248

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void InitConfigAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_INITCONFIGALL_OFFSET))(this);
		}

		::System::Void SavePlayerPrefsConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SAVEPLAYERPREFSCONFIG_OFFSET))(this);
		}

		::System::Void _InitCurveConfigAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITCURVECONFIGALL_OFFSET))(this);
		}

		::System::Void _InitPlayerPrefsConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITPLAYERPREFSCONFIG_OFFSET))(this);
		}

		::System::Void _InitCameraConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITCAMERACONFIG_OFFSET))(this);
		}

		::System::Void _InitGamepadConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG__INITGAMEPADCONFIG_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraRotationSpeedRatioForPC()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOFORPC_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraRotationSpeedRatioForPhone()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOFORPHONE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraRotationSpeedRatioForController()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOFORCONTROLLER_OFFSET))(this);
		}

		::System::Int32 get_CameraRotationSpeedRatioGearSetting()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOGEARSETTING_OFFSET))(this);
		}

		::System::Void set_CameraRotationSpeedRatioGearSetting(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_CAMERAROTATIONSPEEDRATIOGEARSETTING_OFFSET))(this, value);
		}

		::System::Int32 get_CameraRotationSpeedRatioGearSettingForController()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_CAMERAROTATIONSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET))(this);
		}

		::System::Void set_CameraRotationSpeedRatioGearSettingForController(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_CAMERAROTATIONSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET))(this, value);
		}

		::System::Int32 get_ZoomSpeedRatioGearSetting()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_ZOOMSPEEDRATIOGEARSETTING_OFFSET))(this);
		}

		::System::Void set_ZoomSpeedRatioGearSetting(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_ZOOMSPEEDRATIOGEARSETTING_OFFSET))(this, value);
		}

		::System::Int32 get_ZoomSpeedRatioGearSettingForController()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_ZOOMSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET))(this);
		}

		::System::Void set_ZoomSpeedRatioGearSettingForController(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_ZOOMSPEEDRATIOGEARSETTINGFORCONTROLLER_OFFSET))(this, value);
		}

		::System::UInt32 get_GamepadVibrationIntensity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_GET_GAMEPADVIBRATIONINTENSITY_OFFSET))(this);
		}

		::System::Void set_GamepadVibrationIntensity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_SET_GAMEPADVIBRATIONINTENSITY_OFFSET))(this, value);
		}
	};
}
