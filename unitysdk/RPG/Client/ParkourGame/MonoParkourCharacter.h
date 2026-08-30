#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/Engine.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::ParkourGame { class MonoParkourItem; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDA27FC0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDA28090)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDA28040)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0xDA280E0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourCharacter_TypeDefinitionIndex = 74034;

	class MonoParkourCharacter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ParkourGame::Engine Engine; // 0x18
		::System::Single SwitchRoadSpeed; // 0x28
		::UnityEngine::AnimationCurve* SwitchRoadCurve; // 0x30
		::System::Single TiltLerpHalfTime; // 0x38
		::System::Single SwitchRoadRecoverTurnOffset; // 0x3C
		::System::Single SwitchRoadRecoverTurnMoveOffset; // 0x40
		::UnityEngine::AnimationCurve* TurnRotationCurve; // 0x48
		::UnityEngine::AnimationCurve* TurnRotationRecoverCurve; // 0x50
		::System::Single TurnDuration; // 0x58
		::System::Single TurnRecoverDuration; // 0x5C
		::System::Single MaxTurnRotationAngle; // 0x60
		::UnityEngine::AnimationCurve* TurnYawRotationCurve; // 0x68
		::UnityEngine::AnimationCurve* TurnYawRotationRecoverCurve; // 0x70
		::System::Single TurnYawDuration; // 0x78
		::System::Single TurnYawRecoverDuration; // 0x7C
		::System::Single MaxTurnYawRotationAngle; // 0x80
		::UnityEngine::AnimationCurve* TurnMoveXRecoverCurve; // 0x88
		::System::Single TurnMoveXRecoverDuration; // 0x90
		::System::Single TurnMoveXLerpHalfTime; // 0x94
		::System::Single FallingDownMaxAngle; // 0x98
		::System::Single FallingDownRotateAngleSpeed; // 0x9C
		::UnityEngine::Animator* Animator; // 0xA0
		::UnityEngine::Transform* SubTransform; // 0xA8
		::System::String* LevelGraphConfigPath; // 0xB0
		::System::String* AIGraphConfigPath; // 0xB8
		::RPG::Client::ParkourGame::ParkourSkillConfig* SkillConfig; // 0xC0
		::System::Action_1<::RPG::Client::ParkourGame::MonoParkourItem*>* OnTriggerItem; // 0xC8
		::System::Action_1<::RPG::Client::ParkourGame::MonoParkourCharacter*>* OnTriggerOtherCharacter; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURCHARACTER_ONDISABLE_OFFSET))(this);
		}
	};
}
