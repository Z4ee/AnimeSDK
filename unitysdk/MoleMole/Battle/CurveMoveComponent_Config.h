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
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG_ONVALUECHANGED_MOVEMODE_OFFSET UNITYSDK_OFFSET(0x14344320)
#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG_READFROMOTHERCONFIG_OFFSET UNITYSDK_OFFSET(0x14344360)
#define MOLEMOLE_BATTLE_CURVEMOVECOMPONENT_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14344430)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_TypeDefinitionIndex = 65744;

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
		::UnityEngine::Vector2 curvyRotationPitchRange; // 0x3C
		::System::Boolean enableAttachRotationMotion; // 0x44
		::System::Boolean needPauseWhenWipeOut; // 0x45
		::System::Single speed; // 0x48
		::System::Single speedUpAcceleration; // 0x4C
		::System::Single speedDownAcceleration; // 0x50
		::UnityEngine::AnimationCurve* curve; // 0x58
		::System::Single time; // 0x60
		::UnityEngine::Vector3 positionOffset; // 0x64
		::System::String* CustomPivotPoint; // 0x70
		::System::String* startMoveSoundEvent; // 0x78
		::System::String* stopMoveSoundEvent; // 0x80
		::System::Boolean setMoveBackSound; // 0x88
		::System::String* startMoveBackSoundEvent; // 0x90
		::System::String* stopMoveBackSoundEvent; // 0x98
		::System::Boolean muteSound; // 0xA0
		::System::Boolean ManageRotate; // 0xA1
		::MoleMole::Battle::CurveMoveComponent_Config_MoveType moveType; // 0xA4

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
