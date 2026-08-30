#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimJumpType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityMoveConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDashBasicConfig; }
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D86ACB0)
#define RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D86AAC0)
#define RPG_GAMECORE_FIVEDIMMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86ABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveConfig_TypeDefinitionIndex = 16484;

	class FiveDimMoveConfig : public ::RPG::GameCore::LittleGameEntityMoveConfig
	{
	public:
		::System::Single MoveInputHorizontalAngle; // 0x10
		::System::Single MoveInputDeadZone; // 0x14
		::System::Single InWallInputDeadZone; // 0x18
		::System::Single OutWallInputDeadZone; // 0x1C
		::System::Single FixedJoystickInputZone; // 0x20
		::System::Single FiveDimFluteClickZone; // 0x24
		::System::Single FiveDimSkillClickZone; // 0x28
		::System::Single FiveDimJumpClickZone; // 0x2C
		::RPG::MVector2 FiveDimJumpClickPosition; // 0x30
		::System::Single InWallReverseInputCD; // 0x38
		::System::Single OutWallReverseInputCD; // 0x3C
		::RPG::GameCore::HoyoTagContainer* UnstablePropTag; // 0x40
		::RPG::GameCore::HoyoTagContainer* UnslidablePropTag; // 0x48
		::RPG::GameCore::HoyoTagContainer* AnimMovePropTag; // 0x50
		::System::Single CapsuleRadius; // 0x58
		::System::Single CapsuleHeight; // 0x5C
		::System::Single CapsuleCrouchHeight; // 0x60
		::System::Single MaxSpeed; // 0x64
		::System::Single AccDuration; // 0x68
		::System::Single BrakeDuration; // 0x6C
		::System::Single MaxBrakeMultiplier; // 0x70
		::System::Single InvincibleMaxSpeedMultiplier; // 0x74
		::System::Single BrakeEffectMaxBrakeDuration; // 0x78
		::System::Single BrakeEffectMinMoveDuration; // 0x7C
		::System::Single AirAccDuration; // 0x80
		::System::Single AirBrakeDuration; // 0x84
		::System::Single JumpHeight; // 0x88
		::System::Single JumpDuration; // 0x8C
		::System::Single JumpCoolDown; // 0x90
		::System::Single FallGravityMultiplier; // 0x94
		::System::Single MaxFallSpeed; // 0x98
		::System::Single MaxFallSpeedGravityLine; // 0x9C
		::System::Single MinFallSpeedGravityLine; // 0xA0
		::System::Single CoyoteLastJumpTime; // 0xA4
		::System::Single CoyoteLastGroundedTime; // 0xA8
		::System::Single RoofPushExtraThreshold; // 0xAC
		::System::Single MusicFallBaseSpeed; // 0xB0
		::System::Single MusicFallMaxAdditionSpeed; // 0xB4
		::System::Single MusicFallDecayAccDuration; // 0xB8
		::System::Single MusicFallAirAccDuration; // 0xBC
		::System::Single MusicFallBrakeAccDuration; // 0xC0
		::System::Single MusicJumpToleranceDuration; // 0xC4
		::System::Single MusicJumpHeight; // 0xC8
		::System::Single MusicAirJumpHeight; // 0xCC
		::System::Single DoubleJumpHeight; // 0xD0
		::System::Single DoubleJumpCutExemptHeight; // 0xD4
		::System::Single DoubleJumpCutDuration; // 0xD8
		::System::Single JumpCutExemptHeight; // 0xDC
		::System::Single JumpCutDuration; // 0xE0
		::System::Single PeakThreshold; // 0xE4
		::System::Single PeakExtraDuration; // 0xE8
		::System::Single PeakAccMultiplier; // 0xEC
		::System::Single PeakMaxSpeedMultiplier; // 0xF0
		::RPG::GameCore::FiveDimJumpType JumpPeakEnableType; // 0xF4
		::System::Single SummonJumpHeight; // 0xF8
		::RPG::GameCore::FiveDimDashBasicConfig* DashBasicConfig; // 0x100
		::RPG::GameCore::FloatCurve* DashSpeedLerpCurve; // 0x108
		::System::Single DashSpeedLerpDuration; // 0x110
		::System::Single DashHoldThreshold; // 0x114
		::System::Single CoyoteLastDashTime; // 0x118
		::System::Single LongPressRadiusRatio; // 0x11C
		::System::Single DashHoldFovDelta; // 0x120
		::System::Single DashHoldFovChangeDampTime; // 0x124
		::System::String* DashCameraShakeTemplate; // 0x128
		::System::Single DashAdjustmentAngle; // 0x130
		::System::Single DashLongPressMoveOffset; // 0x134
		::System::Single DashLongPressMoveDuration; // 0x138
		::System::Single DashAimNoMoveShowArrowDelay; // 0x13C
		::System::Single DashToFallAnimMaintainTime; // 0x140
		::System::String* DashContactInternalEvent; // 0x148
		::System::Single DashSpikeExtendMaxDist; // 0x150
		::RPG::GameCore::HoyoTagContainer* DashPassableEntityTags; // 0x158
		::System::String* DashRotateModelPath; // 0x160
		::System::Single DashRotateResetDuration; // 0x168
		::RPG::GameCore::FloatCurve* DashRotateResetCurve; // 0x170
		::System::Single DashRotateExtraAngle; // 0x178
		::System::Single DashPushVelocityMax; // 0x17C
		::System::Single DashPushVelocityMin; // 0x180
		::System::Single DashPushNormalDirVelocity; // 0x184
		::System::Single DashPushGravityMultiplier; // 0x188
		::System::Single DashPushRotateSpeed; // 0x18C
		::System::Single DashPushReflectRayLength; // 0x190
		::System::Single DashHitGlobalTimeSlow; // 0x194
		::System::Single DashHitGlobalTimeSlowDuration; // 0x198
		::System::Single DashHitTimeSlowDecayInterval; // 0x19C
		::Il2CppArray<::System::Single>* DashHitTimeSlowDecayFactors; // 0x1A0
		::System::String* DashHitEffectPath; // 0x1A8
		::System::Single HeavyLandingSpeedThreshold; // 0x1B0
		::System::Single HeavyLandingDuration; // 0x1B4
		::System::Single MediumLandingDuration; // 0x1B8
		::System::Single TurnDampingTime; // 0x1BC
		::System::Single WallJumpTurnSpeed; // 0x1C0
		::System::Single ZAxisDampingTime; // 0x1C4
		::System::Single QueryWallOffset; // 0x1C8
		::System::Single QueryWallMinHeight; // 0x1CC
		::System::Single QueryUnstableWallInterval; // 0x1D0
		::System::Single WallSlideSpeedMultiplier; // 0x1D4
		::System::Single WallSlideAccDuration; // 0x1D8
		::System::Single WallJumpHeight; // 0x1DC
		::System::Single WallJumpUpwardHeight; // 0x1E0
		::System::Single WallJumpSpeedMultiplier; // 0x1E4
		::RPG::GameCore::FloatCurve* WallJumpSpeedLerpCurve; // 0x1E8
		::System::Single WallJumpSpeedLerpDuration; // 0x1F0
		::System::Single WallJumpCutExemptHeight; // 0x1F4
		::System::Single WallJumpCutDuration; // 0x1F8
		::System::Single WallJumpUpwardCutExemptHeight; // 0x1FC
		::System::Single WallJumpUpwardCutDuration; // 0x200
		::System::Single LedgeHeight; // 0x204
		::System::Single LedgeFlipHeight; // 0x208
		::System::Single LedgeFlipDuration; // 0x20C
		::System::Single ConveyorHorizontalSpeed; // 0x210
		::System::Single ConveyorVerticalSpeed; // 0x214
		::System::Single ConveyorFlipHeight; // 0x218
		::System::Single ConveyorFlipDuration; // 0x21C
		::System::Single ClimbSpeed; // 0x220
		::System::Single LadderFlipHeight; // 0x224
		::System::Single LadderFlipDuration; // 0x228
		::System::Single LadderJumpHeight; // 0x22C
		::System::Single LadderJumpCutExemptHeight; // 0x230
		::System::Single LadderJumpCutDuration; // 0x234
		::System::Single TrampolineJumpHeight; // 0x238
		::System::Single TrampolineMusicJumpHeight; // 0x23C
		::System::Single GameLoadingFadeInDuration; // 0x240
		::System::Single PipePortalInWaitDuration; // 0x244
		::System::Single PipePortalOutWaitDuration; // 0x248
		::System::Single PipePortalSpeedMultiplier; // 0x24C
		::System::Single PortalInWaitDuration; // 0x250
		::System::Single PortalOutWaitDuration; // 0x254
		::System::Single TeleportShowAvatarDelay; // 0x258
		::System::Single PassGravityRingJumpCoolDown; // 0x25C
		::System::Single GravityRingCameraDampX; // 0x260
		::System::Single GravityRingCameraDampY; // 0x264
		::System::Single BeatBackHeight; // 0x268
		::System::Single BeatBackSpeedMultiplier; // 0x26C
		::RPG::GameCore::FloatCurve* BeatBackSpeedLerpCurve; // 0x270
		::System::Single BeatBackSpeedLerpDuration; // 0x278
		::System::Boolean BeatBackClearJumpEnergy; // 0x27C
		::System::Single BeatBackInvulnerableDuration; // 0x280
		::System::Single MusicFallBeatBackDuration; // 0x284
		::System::Single MascotBeatBackMultiplier; // 0x288
		::System::Single StuckInFallStateDuration; // 0x28C
		::System::Single StuckInCollisionDuration; // 0x290
		::System::Single ResetWaitDuration; // 0x294
		::System::Single ResetShowAvatarDelay; // 0x298
		::System::Single ResetInvulnerableDuration; // 0x29C
		::System::Single ResetMuteControlDuration; // 0x2A0
		::System::Int32 ResetPointNumber; // 0x2A4
		::System::Single ResetPointUpdateInterval; // 0x2A8
		::System::Single ResetPointTolerance; // 0x2AC
		::Il2CppArray<::System::Single>* BakeUnitLengthList; // 0x2B0
		::Il2CppArray<::RPG::GameCore::FiveDimMoveBakedConfig*>* BakedConfigs; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
