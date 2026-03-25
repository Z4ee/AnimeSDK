#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimJumpType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityMoveConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x171FC6F0)
#define RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171FC640)
#define RPG_GAMECORE_FIVEDIMMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171FC6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveConfig_TypeDefinitionIndex = 15266;

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
		::System::Single BrakeEffectMaxBrakeDuration; // 0x74
		::System::Single BrakeEffectMinMoveDuration; // 0x78
		::System::Single AirAccDuration; // 0x7C
		::System::Single AirBrakeDuration; // 0x80
		::System::Single JumpHeight; // 0x84
		::System::Single JumpDuration; // 0x88
		::System::Single JumpCoolDown; // 0x8C
		::System::Single FallGravityMultiplier; // 0x90
		::System::Single MaxFallSpeed; // 0x94
		::System::Single CoyoteLastJumpTime; // 0x98
		::System::Single CoyoteLastGroundedTime; // 0x9C
		::System::Single RoofPushExtraThreshold; // 0xA0
		::System::Single MusicFallBaseSpeed; // 0xA4
		::System::Single MusicFallMaxAdditionSpeed; // 0xA8
		::System::Single MusicFallDecayAccDuration; // 0xAC
		::System::Single MusicFallAirAccDuration; // 0xB0
		::System::Single MusicFallBrakeAccDuration; // 0xB4
		::System::Single MusicJumpToleranceDuration; // 0xB8
		::System::Single MusicJumpHeight; // 0xBC
		::System::Single MusicAirJumpHeight; // 0xC0
		::System::Single DoubleJumpHeight; // 0xC4
		::System::Single DoubleJumpCutExemptHeight; // 0xC8
		::System::Single DoubleJumpCutDuration; // 0xCC
		::System::Single JumpCutExemptHeight; // 0xD0
		::System::Single JumpCutDuration; // 0xD4
		::System::Single PeakThreshold; // 0xD8
		::System::Single PeakExtraDuration; // 0xDC
		::System::Single PeakAccMultiplier; // 0xE0
		::System::Single PeakMaxSpeedMultiplier; // 0xE4
		::RPG::GameCore::FiveDimJumpType JumpPeakEnableType; // 0xE8
		::System::Single DashDistance; // 0xEC
		::System::Single DashDuration; // 0xF0
		::System::Single HeavyLandingSpeedThreshold; // 0xF4
		::System::Single HeavyLandingDuration; // 0xF8
		::System::Single MediumLandingDuration; // 0xFC
		::System::Single TurnDampingTime; // 0x100
		::System::Single WallJumpTurnSpeed; // 0x104
		::System::Single ZAxisDampingTime; // 0x108
		::System::Single QueryWallOffset; // 0x10C
		::System::Single QueryWallMinHeight; // 0x110
		::System::Single QueryUnstableWallInterval; // 0x114
		::System::Single WallSlideSpeedMultiplier; // 0x118
		::System::Single WallSlideAccDuration; // 0x11C
		::System::Single WallJumpHeight; // 0x120
		::System::Single WallJumpUpwardHeight; // 0x124
		::System::Single WallJumpSpeedMultiplier; // 0x128
		::RPG::GameCore::FloatCurve* WallJumpSpeedLerpCurve; // 0x130
		::System::Single WallJumpSpeedLerpDuration; // 0x138
		::System::Single WallJumpCutExemptHeight; // 0x13C
		::System::Single WallJumpCutDuration; // 0x140
		::System::Single WallJumpUpwardCutExemptHeight; // 0x144
		::System::Single WallJumpUpwardCutDuration; // 0x148
		::System::Single LedgeHeight; // 0x14C
		::System::Single LedgeFlipHeight; // 0x150
		::System::Single LedgeFlipDuration; // 0x154
		::System::Single ConveyorHorizontalSpeed; // 0x158
		::System::Single ConveyorVerticalSpeed; // 0x15C
		::System::Single ConveyorFlipHeight; // 0x160
		::System::Single ConveyorFlipDuration; // 0x164
		::System::Single ClimbSpeed; // 0x168
		::System::Single LadderFlipHeight; // 0x16C
		::System::Single LadderFlipDuration; // 0x170
		::System::Single LadderJumpHeight; // 0x174
		::System::Single LadderJumpCutExemptHeight; // 0x178
		::System::Single LadderJumpCutDuration; // 0x17C
		::System::Single TrampolineJumpHeight; // 0x180
		::System::Single TrampolineMusicJumpHeight; // 0x184
		::System::Single GameLoadingFadeInDuration; // 0x188
		::System::Single PipePortalInWaitDuration; // 0x18C
		::System::Single PipePortalOutWaitDuration; // 0x190
		::System::Single PipePortalSpeedMultiplier; // 0x194
		::System::Single PortalInWaitDuration; // 0x198
		::System::Single PortalOutWaitDuration; // 0x19C
		::System::Single TeleportShowAvatarDelay; // 0x1A0
		::System::Single BeatBackHeight; // 0x1A4
		::System::Single BeatBackSpeedMultiplier; // 0x1A8
		::RPG::GameCore::FloatCurve* BeatBackSpeedLerpCurve; // 0x1B0
		::System::Single BeatBackSpeedLerpDuration; // 0x1B8
		::System::Boolean BeatBackClearJumpEnergy; // 0x1BC
		::System::Single BeatBackInvulnerableDuration; // 0x1C0
		::System::Single MascotBeatBackMultiplier; // 0x1C4
		::System::Single StuckInFallStateDuration; // 0x1C8
		::System::Single StuckInCollisionDuration; // 0x1CC
		::System::Single ResetWaitDuration; // 0x1D0
		::System::Single ResetShowAvatarDelay; // 0x1D4
		::System::Single ResetInvulnerableDuration; // 0x1D8
		::System::Single ResetMuteControlDuration; // 0x1DC
		::Il2CppArray<::System::Single>* BakeUnitLengthList; // 0x1E0
		::Il2CppArray<::RPG::GameCore::FiveDimMoveBakedConfig*>* BakedConfigs; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FiveDimMoveConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FiveDimMoveConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVECONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
