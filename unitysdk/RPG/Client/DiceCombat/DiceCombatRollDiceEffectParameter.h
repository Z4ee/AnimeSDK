#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATROLLDICEEFFECTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC34750)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatRollDiceEffectParameter_TypeDefinitionIndex = 76029;

	class DiceCombatRollDiceEffectParameter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single RollingEffectInterval; // 0x18
		::System::Single RollingMotionThreshold; // 0x1C
		::UnityEngine::Vector3 EffectSpawenOffset; // 0x20
		::System::Single FirstClickDeskDistance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATROLLDICEEFFECTPARAMETER__CTOR_OFFSET))(this);
		}
	};
}
