#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMECORECONSTKEYS_METHOD_2_666EBD62504AAA11_OFFSET UNITYSDK_OFFSET(0x197B8900)
#define RPG_GAMECORE_GAMECORECONSTKEYS__CTOR_OFFSET UNITYSDK_OFFSET(0x197C7440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConstKeys_TypeDefinitionIndex = 16230;

	class GameCoreConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash MonsterBossTag; // 0x10
		::RPG::GameCore::StringHash AutoFightCustomize_BP; // 0x14
		::RPG::GameCore::StringHash AutoFightCustomize_UltraSkill; // 0x18
		::RPG::GameCore::StringHash PerformanceIDTag; // 0x1C
		::RPG::GameCore::StringHash PerformanceTypeTag; // 0x20
		::RPG::GameCore::StringHash PerformanceInstanceGuidTag; // 0x24
		::System::String* PlayerTeamReviveStartEvent; // 0x28
		::System::String* PlayerTeamReviveFailedEvent; // 0x30
		::System::String* LastKillStartEvent; // 0x38
		::System::String* LevelLoseEvent; // 0x40
		::System::String* LevelWinEvent; // 0x48
		::System::String* LevelBattleQuitEvent; // 0x50
		::System::String* LevelSpecialWinEvent; // 0x58
		::System::String* FetchCallBackModifierInstance; // 0x60
		::System::String* UltraKillFinalMonsterOfWave; // 0x68
		::System::String* KillFinalMonsterOfStage; // 0x70
		::System::String* ShowDefaultCameraAfterTimeline; // 0x78
		::System::String* ShowDefaultCameraAfterTimelineOnAvatarDying; // 0x80
		::System::String* AllEnemyDeadButWaveContinue; // 0x88
		::System::String* StageDeferCreateTrialPlayerKey; // 0x90
		::System::String* MonsterSummListIDKey; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTKEYS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_666EBD62504AAA11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameCoreConstKeys*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameCoreConstKeys*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONSTKEYS_METHOD_2_666EBD62504AAA11_OFFSET))(a1, a2);
		}
	};
}
