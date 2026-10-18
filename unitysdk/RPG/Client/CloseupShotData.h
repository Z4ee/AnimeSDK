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

#define RPG_CLIENT_CLOSEUPSHOTDATA_GET_ALLOWSWITCHSPEEDUP_OFFSET UNITYSDK_OFFSET(0xCB86E60)
#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB86EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 69613;

	class CloseupShotData : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_183* ProcedureData; // 0x10
		::System::String* ShotPrefabPath; // 0x18
		::System::String* LightTeamCustomizeFormationName; // 0x20
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x28
		::System::String* DarkTeamCustomizeFormationName; // 0x30
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x38
		::System::Action* OnFinishCB; // 0x40
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x48
		::System::String* CameraTimelineAssetName; // 0x50
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x58
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x60
		::UnityEngine::Vector3 ParentOffset; // 0x68
		::System::Single StageRootOffset; // 0x74
		::System::Boolean IsFromPrepareAbility; // 0x78
		::System::Boolean IsOverride; // 0x79
		::System::Boolean KeepLastFrame; // 0x7A
		::System::Boolean HideMonsterEffect; // 0x7B
		::System::Single TimelineFinishTime; // 0x7C
		::System::Single PauseTime; // 0x80
		::UnityEngine::Vector3 LookAtOffset; // 0x84
		::System::Single LightTeamCenterOffset; // 0x90
		::System::Single DarkTeamCenterOffset; // 0x94
		::RPG::GameCore::TeamType ParentTeamType; // 0x98
		::System::Single TimelineStartTime; // 0x9C

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
