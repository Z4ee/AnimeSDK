#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MATCHTHREEENERGYPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C26A2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnergyPerformance_TypeDefinitionIndex = 65978;

	class MatchThreeEnergyPerformance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single EnergyAddInternal; // 0x18
		::System::Single EnergyAddMaxTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYPERFORMANCE__CTOR_OFFSET))(this);
		}
	};
}
