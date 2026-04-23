#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_148;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A92F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 64156;

	class CloseupShotData : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x10
		::System::String* DarkTeamCustomizeFormationName; // 0x18
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x20
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x28
		::System::String* CameraTimelineAssetName; // 0x30
		::System::Action* OnFinishCB; // 0x38
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x40
		::Class_1_43BD383C98B4C0C5_148* ProcedureData; // 0x48
		::System::String* LightTeamCustomizeFormationName; // 0x50
		::System::String* ShotPrefabPath; // 0x58
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x60
		::System::Single TimelineStartTime; // 0x68
		::System::Single TimelineFinishTime; // 0x6C
		::RPG::GameCore::TeamType ParentTeamType; // 0x70
		::UnityEngine::Vector3 LookAtOffset; // 0x74
		::System::Single StageRootOffset; // 0x80
		::System::Single DarkTeamCenterOffset; // 0x84
		::UnityEngine::Vector3 ParentOffset; // 0x88
		::System::Boolean KeepLastFrame; // 0x94
		::System::Boolean IsFromPrepareAbility; // 0x95
		::System::Boolean HideMonsterEffect; // 0x96
		::System::Boolean IsOverride; // 0x97
		::System::Single LightTeamCenterOffset; // 0x98
		::System::Single PauseTime; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}
	};
}
