#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureBehaviorConfig; }
namespace RPG::GameCore { class BattleAffectRangeConfig; }
namespace RPG::GameCore { class HoyoGroupCommonConfig; }
namespace RPG::GameCore { class MazeBattleTransitionClientConfig; }
namespace RPG::GameCore { class MazeBattleTransitionConfig; }
namespace RPG::GameCore { class MazeCharacterMoveConfig; }
namespace RPG::GameCore { class MazeCharacterTeleportConfig; }
namespace RPG::GameCore { class MazeDragCameraConfig; }
namespace RPG::GameCore { class MazeFreelookDragCameraConfig; }
namespace RPG::GameCore { class MazeResetMonsterConfig; }
namespace RPG::GameCore { class NPCMonsterWarningConfigClass; }
namespace RPG::GameCore { class PedestrianConfig; }
namespace RPG::GameCore { class PlayerLockRangeConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D277290)
#define RPG_GAMECORE_MAZECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D277E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeConfig_TypeDefinitionIndex = 17413;

	class MazeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PlayerLockRangeConfig* PlayerLockRange; // 0x10
		::RPG::GameCore::BattleAffectRangeConfig* BattleAffectRange; // 0x18
		::RPG::GameCore::MazeBattleTransitionConfig* MazeBattleTransition; // 0x20
		::RPG::GameCore::MazeBattleTransitionClientConfig* MazeBattleTransitionClient; // 0x28
		::RPG::GameCore::MazeCharacterMoveConfig* MazeCharacterMove; // 0x30
		::RPG::GameCore::MazeCharacterTeleportConfig* CharacterTeleport; // 0x38
		::System::Boolean IsOpenPlayerRush; // 0x40
		::System::Single BuffUICountDown; // 0x44
		::Il2CppArray<::RPG::GameCore::PropType>* UnstableToStepOnPropTypes; // 0x48
		::Il2CppArray<::RPG::GameCore::PropType>* UnableToInteractPropTypesInDanger; // 0x50
		::System::Boolean IsShowSKillPanelInTown; // 0x58
		::System::Single MazePlayerMapZoneScale; // 0x5C
		::System::Single MazePlayerMapZoneScaleInRunning; // 0x60
		::System::Single MazePlayerMapZoneScaleRecoverSpeed; // 0x64
		::System::Single MazePlayerMapZoneScaleInRunningRecoverSpeed; // 0x68
		::RPG::GameCore::PedestrianConfig* Pedestrian; // 0x70
		::RPG::GameCore::NPCMonsterWarningConfigClass* MonsterWarningConfig; // 0x78
		::Il2CppArray<::System::Single>* WeakPointParaByMonsterRank; // 0x80
		::System::UInt32 WeakPointDisplayCount; // 0x88
		::System::Single TeamDataRefreshDelayAfterEnterMaze; // 0x8C
		::System::Single MazeMPRecoverDelayAfterBattle; // 0x90
		::System::String* MazeMPRecoverEffectPath; // 0x98
		::System::String* MazeHPRecoverEffectPath; // 0xA0
		::Il2CppArray<::System::UInt32>* SpecialVisionStencilRefList; // 0xA8
		::System::Single SpecialVisionAutoCloseInterval; // 0xB0
		::System::Single TransitionPerformTimeoutMax; // 0xB4
		::Il2CppArray<::RPG::GameCore::GameModeType>* ShowAreaBlackList; // 0xB8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerStageByStory; // 0xC0
		::Il2CppArray<::System::String*>* OnStageInheritExcludeStates; // 0xC8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::RPG::GameCore::AdventureBehaviorConfig*>* AdventureBehaviorConfigs; // 0xD0
		::RPG::GameCore::MazeDragCameraConfig* MazeDragCameraConfig; // 0xD8
		::RPG::GameCore::MazeFreelookDragCameraConfig* MazeDrag3CCameraConfig; // 0xE0
		::System::Single AdventureMaxSpeed; // 0xE8
		::RPG::GameCore::MazeResetMonsterConfig* ResetMonsterConfig; // 0xF0
		::System::Single MaxMovementSpeed; // 0xF8
		::Il2CppArray<::RPG::MVector2>* TeleportCheckPoints; // 0x100
		::System::Boolean TryFixBattleAreaSwitchStuck1; // 0x108
		::System::Boolean TryFixBattleAreaSwitchStuck2; // 0x109
		::System::Boolean MazeBuffUIRefreshAll; // 0x10A
		::RPG::GameCore::HoyoGroupCommonConfig* GroupCommonConfig; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
