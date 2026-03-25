#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93FB640)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 56906;

	class CloseupShotData : public ::System::Object
	{
	public:
		::System::String* LightTeamCustomizeFormationName; // 0x10
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x18
		::System::Action* OnFinishCB; // 0x20
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x28
		::System::String* ShotPrefabPath; // 0x30
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x38
		::RPG::GameCore::GameEntity* CasterEntity; // 0x40
		::System::String* DarkTeamCustomizeFormationName; // 0x48
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x50
		::System::String* CameraTimelineAssetName; // 0x58
		::System::Single DarkTeamCenterOffset; // 0x60
		::System::Single TimelineStartTime; // 0x64
		::System::Single StageRootOffset; // 0x68
		::RPG::GameCore::TeamType ParentTeamType; // 0x6C
		::System::Boolean KeepLastFrame; // 0x70
		::System::Boolean IsFromPrepareAbility; // 0x71
		::System::Boolean HideMonsterEffect; // 0x72
		::System::Boolean IsOverride; // 0x73
		::UnityEngine::Vector3 LookAtOffset; // 0x74
		::System::Single TimelineFinishTime; // 0x80
		::System::Single PauseTime; // 0x84
		::UnityEngine::Vector3 ParentOffset; // 0x88
		::System::Single LightTeamCenterOffset; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}
	};
}
