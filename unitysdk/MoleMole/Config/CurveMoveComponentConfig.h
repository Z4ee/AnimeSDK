#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_LiftMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG_GET_RUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0x12318890)
#define MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x123189A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveComponentConfig_TypeDefinitionIndex = 52124;

	class CurveMoveComponentConfig : public ::System::Object
	{
	public:
		::System::String* curvePath; // 0x10
		::UnityEngine::AnimationCurve* curve; // 0x18
		::MoleMole::Battle::CurveMoveComponent_Config* _runtimeConfig; // 0x20
		::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode speedMode; // 0x28
		::MoleMole::Battle::CurveMoveComponent_Config_LiftMode liftMode; // 0x2C
		::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection moveDirection; // 0x30
		::System::Single time; // 0x34
		::System::Boolean useCache; // 0x38
		::System::Single speed; // 0x3C
		::System::Single speedUpAcceleration; // 0x40
		::MoleMole::Battle::CurveMoveComponent_Config_MoveType moveType; // 0x44
		::System::Single speedDownAcceleration; // 0x48
		::MoleMole::Battle::CurveMoveComponent_Config_MoveMode moveMode; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::CurveMoveComponent_Config* get_runtimeConfig()
		{
			return ((::MoleMole::Battle::CurveMoveComponent_Config*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVECOMPONENTCONFIG_GET_RUNTIMECONFIG_OFFSET))(this);
		}
	};
}
