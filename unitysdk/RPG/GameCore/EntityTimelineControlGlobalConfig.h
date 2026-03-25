#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class PlayerLockRangeConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TimeRewindAchievement; }
namespace RPG::GameCore { class TimeRewindAttachEff; }
namespace RPG::GameCore { class TimeRewindCameraConfig; }
namespace RPG::GameCore { class TimeRewindContainerAndSeedStaticBindInfo; }
namespace RPG::GameCore { class TimeRewindDestructibleBridgeStaticBindInfo; }
namespace RPG::GameCore { class TimeRewindPreloadConfig; }
namespace RPG::GameCore { class TimeRewindSpecularStateDurationConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYTIMELINECONTROLGLOBALCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171A2670)
#define RPG_GAMECORE_ENTITYTIMELINECONTROLGLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171A3940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityTimelineControlGlobalConfig_TypeDefinitionIndex = 15195;

	class EntityTimelineControlGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PlayerLockRangeConfig* LockRangeConfig; // 0x10
		::System::Single MaxRewindTime; // 0x18
		::System::Single RewindCompleteRatio; // 0x1C
		::System::Single HitDetectStartProtectTime; // 0x20
		::System::Single MatSwitchDuration; // 0x24
		::System::Single StaticMatSwitchDuration; // 0x28
		::System::Single RebuildFadeTime; // 0x2C
		::System::Single ShowMatDis; // 0x30
		::System::Single ScanSpeed; // 0x34
		::System::String* ScanStartAttachPoint; // 0x38
		::System::Single ScanHighlightDuration; // 0x40
		::RPG::Client::TextID RewindOverTimeToast; // 0x48
		::System::Single TimeRewindCameraShakeFadeTime; // 0x58
		::System::Single FoundationRotateSpeed; // 0x5C
		::System::Single BallStartAnimNormalizedTime; // 0x60
		::RPG::MVector3 BallPositionOffset; // 0x64
		::System::String* FoundationBreakAnim; // 0x70
		::System::String* FoundationRotateAttachPoint; // 0x78
		::System::String* FoundationRotationStartSoundEvent; // 0x80
		::System::String* FoundationRotationEndSoundEvent; // 0x88
		::RPG::GameCore::TimeRewindDestructibleBridgeStaticBindInfo* DestructibleBridgeStaticBindInfo; // 0x90
		::RPG::GameCore::TimeRewindContainerAndSeedStaticBindInfo* ContainerAndSeedStaticBindInfo; // 0x98
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitPlayer; // 0xA8
		::RPG::GameCore::TimeRewindAttachEff* TimeRewindStartControlEff; // 0xB0
		::System::String* TimeRewindObjectHitEff; // 0xB8
		::System::String* TimeRewindSpecialStateMat; // 0xC0
		::System::String* TimeRewindNormalStateMat; // 0xC8
		::System::String* TimeRewindDisableStateMat; // 0xD0
		::System::String* TimeRewindStaticStateMat; // 0xD8
		::System::String* TimeRewindSpecularStateMat; // 0xE0
		::System::String* TimeRewindErrorSpecularStateMat; // 0xE8
		::System::String* TimeRewindSpecialStateMatNight; // 0xF0
		::System::String* TimeRewindNormalStateMatNight; // 0xF8
		::System::String* TimeRewindDisableStateMatNight; // 0x100
		::RPG::GameCore::TimeRewindSpecularStateDurationConfig* SpecularMatConfig; // 0x108
		::System::String* TimeRewindStartNormalControlSoundEvent; // 0x110
		::System::String* TimeRewindEndNormalControlSoundEvent; // 0x118
		::System::String* TimeRewindEntityOnStrikeSoundEvent; // 0x120
		::System::String* TimeRewindEntityHitMonsterSoundEvent; // 0x128
		::System::String* TimeRewindEntityHitPlayerSoundEvent; // 0x130
		::System::Single TimeRewindMotionEmmisionEffFadeTime; // 0x138
		::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* NormalControlAttachPlayerEff; // 0x140
		::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* SpecialControlAttachPlayerEff; // 0x148
		::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* TimeRewindSwitcherResidentEff; // 0x150
		::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* TimeRewindSwitcherOpenResidentEff; // 0x158
		::Il2CppArray<::RPG::GameCore::TimeRewindAttachEff*>* TimeRewindSwitcherOpenAttachPlayerEff; // 0x160
		::RPG::GameCore::TimeRewindAttachEff* TimeRewindSwitcherOpenAttachPlayerBallEff; // 0x168
		::RPG::GameCore::TimeRewindAttachEff* TimeRewindEnterStaticStateEff; // 0x170
		::System::String* TimeRewindSwitcherInteractText; // 0x178
		::System::String* TimeRewindSwitcherInteractLockedText; // 0x180
		::System::String* TimeRewindEntityBeStrikedText; // 0x188
		::System::String* TimeRewindEntityHitPlayerWhenRewindText; // 0x190
		::System::String* InteractTimeRewindSwitcherWhenOpenText; // 0x198
		::System::String* FirstPauseTaskUnlock; // 0x1A0
		::System::String* FirstTimeRewindEntityBeStrikedTaskUnlock; // 0x1A8
		::System::String* FirstForwardHitPlayerTaskUnlock; // 0x1B0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TimeRewindSwitcherInteractTasks; // 0x1B8
		::Il2CppArray<::System::UInt32>* TimeRewindFinishQuestID; // 0x1C0
		::RPG::GameCore::TimeRewindCameraConfig* CameraConfig; // 0x1C8
		::System::Single TimeRewindExitControlPerformTime; // 0x1D0
		::RPG::GameCore::TimeRewindAchievement* AchievementConfig; // 0x1D8
		::System::Single TriggerPlayerControlTurnInPlaceAngle; // 0x1E0
		::RPG::GameCore::TimeRewindPreloadConfig* PreloadConfig; // 0x1E8
		::System::Single StaticOverTimeRewindToastCD; // 0x1F0
		::Il2CppArray<::System::UInt32>* IgnoreTimeRewindHitWhiteList; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYTIMELINECONTROLGLOBALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EntityTimelineControlGlobalConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityTimelineControlGlobalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYTIMELINECONTROLGLOBALCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
