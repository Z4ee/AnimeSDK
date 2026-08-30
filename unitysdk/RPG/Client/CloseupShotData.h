#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_182;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1A570)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 69577;

	class CloseupShotData : public ::System::Object
	{
	public:
		::System::String* CameraTimelineAssetName; // 0x10
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x18
		::System::String* LightTeamCustomizeFormationName; // 0x20
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x28
		::System::String* ShotPrefabPath; // 0x30
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x38
		::Class_1_43BD383C98B4C0C5_182* ProcedureData; // 0x40
		::System::Action* OnFinishCB; // 0x48
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x50
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x58
		::System::String* DarkTeamCustomizeFormationName; // 0x60
		::System::Boolean KeepLastFrame; // 0x68
		::System::Boolean IsFromPrepareAbility; // 0x69
		::System::Boolean HideMonsterEffect; // 0x6A
		::System::Boolean IsOverride; // 0x6B
		::System::Single TimelineStartTime; // 0x6C
		::System::Single LightTeamCenterOffset; // 0x70
		::System::Single PauseTime; // 0x74
		::RPG::GameCore::TeamType ParentTeamType; // 0x78
		::System::Single TimelineFinishTime; // 0x7C
		::UnityEngine::Vector3 ParentOffset; // 0x80
		::System::Single StageRootOffset; // 0x8C
		::UnityEngine::Vector3 LookAtOffset; // 0x90
		::System::Single DarkTeamCenterOffset; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}
	};
}
