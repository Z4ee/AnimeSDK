#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_183;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA_GET_ALLOWSWITCHSPEEDUP_OFFSET UNITYSDK_OFFSET(0xCB8F130)
#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB8F190)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 69613;

	class CloseupShotData : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_183* ProcedureData; // 0x10
		::System::String* CameraTimelineAssetName; // 0x18
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x20
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x28
		::System::Action* OnFinishCB; // 0x30
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x38
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x40
		::System::String* ShotPrefabPath; // 0x48
		::System::String* DarkTeamCustomizeFormationName; // 0x50
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x58
		::System::String* LightTeamCustomizeFormationName; // 0x60
		::RPG::GameCore::TeamType ParentTeamType; // 0x68
		::System::Single LightTeamCenterOffset; // 0x6C
		::System::Single PauseTime; // 0x70
		::System::Single TimelineStartTime; // 0x74
		::System::Single TimelineFinishTime; // 0x78
		::System::Single DarkTeamCenterOffset; // 0x7C
		::UnityEngine::Vector3 LookAtOffset; // 0x80
		::System::Boolean IsOverride; // 0x8C
		::System::Boolean IsFromPrepareAbility; // 0x8D
		::System::Boolean KeepLastFrame; // 0x8E
		::System::Boolean HideMonsterEffect; // 0x8F
		::UnityEngine::Vector3 ParentOffset; // 0x90
		::System::Single StageRootOffset; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowSwitchSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA_GET_ALLOWSWITCHSPEEDUP_OFFSET))(this);
		}
	};
}
