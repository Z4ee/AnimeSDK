#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_167;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE103C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 66482;

	class CloseupShotData : public ::System::Object
	{
	public:
		::System::String* LightTeamCustomizeFormationName; // 0x10
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x18
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x20
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x28
		::System::String* CameraTimelineAssetName; // 0x30
		::Class_1_43BD383C98B4C0C5_167* ProcedureData; // 0x38
		::System::Action* OnFinishCB; // 0x40
		::System::String* ShotPrefabPath; // 0x48
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x50
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x58
		::System::String* DarkTeamCustomizeFormationName; // 0x60
		::System::Single PauseTime; // 0x68
		::System::Boolean IsFromPrepareAbility; // 0x6C
		::System::Boolean KeepLastFrame; // 0x6D
		::System::Boolean IsOverride; // 0x6E
		::System::Boolean HideMonsterEffect; // 0x6F
		::UnityEngine::Vector3 LookAtOffset; // 0x70
		::System::Single TimelineStartTime; // 0x7C
		::System::Single DarkTeamCenterOffset; // 0x80
		::RPG::GameCore::TeamType ParentTeamType; // 0x84
		::System::Single LightTeamCenterOffset; // 0x88
		::UnityEngine::Vector3 ParentOffset; // 0x8C
		::System::Single StageRootOffset; // 0x98
		::System::Single TimelineFinishTime; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}
	};
}
