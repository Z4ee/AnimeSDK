#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESCOREFILLBARPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD97780)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int SnakeScoreFillBarParam_TypeDefinitionIndex = 85464;

	class SnakeScoreFillBarParam : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single normalChangeDuration; // 0x18
		::System::Single blinkSpeed; // 0x1C
		::System::Single bigChangeWitheTime; // 0x20
		::System::Single bigChangeBlinkDuration; // 0x24
		::System::Single bigChangeAlpha; // 0x28
		::System::Single normalChangeAlpha; // 0x2C
		::System::Single scoreFightingDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKESCOREFILLBARPARAM__CTOR_OFFSET))(this);
		}
	};
}
