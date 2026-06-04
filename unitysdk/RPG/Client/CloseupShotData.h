#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_160;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E6E90)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 65077;

	class CloseupShotData : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x10
		::System::String* ShotPrefabPath; // 0x18
		::Class_1_43BD383C98B4C0C5_160* ProcedureData; // 0x20
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x28
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x30
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x38
		::System::String* CameraTimelineAssetName; // 0x40
		::System::String* LightTeamCustomizeFormationName; // 0x48
		::System::Action* OnFinishCB; // 0x50
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x58
		::System::String* DarkTeamCustomizeFormationName; // 0x60
		::System::Single LightTeamCenterOffset; // 0x68
		::System::Single DarkTeamCenterOffset; // 0x6C
		::System::Single PauseTime; // 0x70
		::System::Boolean IsFromPrepareAbility; // 0x74
		::System::Boolean HideMonsterEffect; // 0x75
		::System::Boolean IsOverride; // 0x76
		::System::Boolean KeepLastFrame; // 0x77
		::System::Single TimelineStartTime; // 0x78
		::System::Single TimelineFinishTime; // 0x7C
		::UnityEngine::Vector3 ParentOffset; // 0x80
		::System::Single StageRootOffset; // 0x8C
		::RPG::GameCore::TeamType ParentTeamType; // 0x90
		::UnityEngine::Vector3 LookAtOffset; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}
	};
}
