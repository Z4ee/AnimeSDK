#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationModeEnum.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_LiftMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_LiftSizeType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG_ONVALUECHANGED_MOVEMODE_OFFSET UNITYSDK_OFFSET(0xFE8CEB0)
#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG_READFROMOTHERCONFIG_OFFSET UNITYSDK_OFFSET(0xFE8CEF0)
#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFE8CFA0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_TypeDefinitionIndex = 54008;

	class CurveMoveComponent_Config : public ::System::Object
	{
	public:
		::MoleMole::Battle::CurveMoveComponent_Config_LiftMode liftMode; // 0x10
		::MoleMole::Battle::CurveMoveComponent_Config_LiftSizeType liftSizeType; // 0x14
		::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode speedMode; // 0x18
		::MoleMole::Battle::CurveMoveComponent_Config_MoveMode moveMode; // 0x1C
		::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection moveDirection; // 0x20
		::FluffyUnderware::Curvy::OrientationModeEnum orientationMode; // 0x24
		::FluffyUnderware::Curvy::OrientationAxisEnum orientationAxis; // 0x28
		::System::Boolean ignoreDirection; // 0x2C
		::System::String* curvePath; // 0x30
		::System::Boolean useCache; // 0x38
		::System::Boolean enableRotation; // 0x39
		::System::Boolean enableCurvyRotation; // 0x3A
		::System::Boolean needPauseWhenWipeOut; // 0x3B
		::System::Single speed; // 0x3C
		::System::Single speedUpAcceleration; // 0x40
		::System::Single speedDownAcceleration; // 0x44
		::UnityEngine::AnimationCurve* curve; // 0x48
		::System::Single time; // 0x50
		::System::String* startMoveSoundEvent; // 0x58
		::System::String* stopMoveSoundEvent; // 0x60
		::System::Boolean setMoveBackSound; // 0x68
		::System::String* startMoveBackSoundEvent; // 0x70
		::System::String* stopMoveBackSoundEvent; // 0x78
		::System::Boolean muteSound; // 0x80
		::System::Boolean ManageRotate; // 0x81
		::MoleMole::Battle::CurveMoveComponent_Config_MoveType moveType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnValueChanged_moveMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG_ONVALUECHANGED_MOVEMODE_OFFSET))(this);
		}

		::System::Void ReadFromOtherConfig(::MoleMole::Battle::CurveMoveComponent_Config* otherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG_READFROMOTHERCONFIG_OFFSET))(this, otherConfig);
		}
	};
}
