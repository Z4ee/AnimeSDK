#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class Class_2_2D85C3C5517A2A08_TransitionShotData;
namespace RPG::Client { class BattleToMazeShotConfig; }
namespace RPG::Client { class BlendCurveRange; }
namespace RPG::Client { class CameraDynamicOffset; }
namespace RPG::Client { class ShotAnimMovementData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PIPELINECAMERAMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9F745D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PipelineCameraModuleConfig_TypeDefinitionIndex = 57016;

	class PipelineCameraModuleConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single InitFOV; // 0x18
		::System::Single MeleeSelectDarkAimLerpRatioLeft; // 0x1C
		::System::Single MeleeSelectDarkAimLerpRatioRight; // 0x20
		::System::Single RangeSelectDarkAimLerpRatioLeft; // 0x24
		::System::Single RangeSelectDarkAimLerpRatioRight; // 0x28
		::RPG::Client::CameraDynamicOffset* DynamicOffsetConfig; // 0x30
		::System::Single CutShotAngle; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::BlendCurveRange*>* BlendRangeList; // 0x40
		::System::Single ResultShotAnimOffsetLerpRatio; // 0x48
		::RPG::Client::ShotAnimMovementData* DefaultShotAnimMovementData; // 0x50
		::UnityEngine::AnimationCurve* AmplitudeAttenuationCurve; // 0x58
		::System::Single DitherCheckInterval; // 0x60
		::System::Single DitherCameraHeight; // 0x64
		::System::Boolean DitherCloseOpen; // 0x68
		::System::Boolean DitherShowDebug; // 0x69
		::System::Boolean DitherPerEntityOpen; // 0x6A
		::System::Single DitherPerEntityKneeHeight; // 0x6C
		::System::Single DitherPerEntityChinHeight; // 0x70
		::System::Single DitherPerEntityWidth; // 0x74
		::System::Single DitherMinDistance; // 0x78
		::System::Single DitherMaxDistance; // 0x7C
		::System::Single DitherSectorAngle; // 0x80
		::System::Int32 DitherRayHalfCount; // 0x84
		::System::Single DitherEffectDuration; // 0x88
		::System::Single DitherRecoveryDuration; // 0x8C
		::System::Single DitherRayMaxLength; // 0x90
		::System::Single ADVDitherAlphaMinValue; // 0x94
		::System::Single ADVDitherMinDistance; // 0x98
		::System::Single ADVDitherMaxDistance; // 0x9C
		::System::Single ZoomVelocity; // 0xA0
		::System::Single ZoomMaxDistance; // 0xA4
		::System::Single ZoomMinDistance; // 0xA8
		::System::Single ZoomVelocityMaze; // 0xAC
		::System::Single ZoomMaxDistanceMaze; // 0xB0
		::System::Single ZoomMinDistanceMaze; // 0xB4
		::System::Single NormalPushRatio; // 0xB8
		::System::Single CameraRootTransitionLerpRatio; // 0xBC
		::UnityEngine::AnimationCurve* CameraRootTransitionCurve; // 0xC0
		::System::Single InitAxisY; // 0xC8
		::System::Single InitAxisYMaze; // 0xCC
		::System::Boolean ForbidBattleTransitionMode; // 0xD0
		::Class_2_2D85C3C5517A2A08_TransitionShotData* LongShot; // 0xD8
		::Class_2_2D85C3C5517A2A08_TransitionShotData* CloseShot; // 0xE0
		::System::Single FrameBlendDelay; // 0xE8
		::System::Single FrameBlendWeightStart; // 0xEC
		::System::Single FrameBlendDuration; // 0xF0
		::System::Single MazeToBattleBlendTime; // 0xF4
		::System::String* MazeToBattleBlendCurveName; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::BattleToMazeShotConfig*>* BattleToMazeShotList; // 0x100
		::System::Single BlendToFreelookTime; // 0x108
		::System::String* BlendToFreelookCurve; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAMODULECONFIG__CTOR_OFFSET))(this);
		}
	};
}
