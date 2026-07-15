#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveGearConfig; }

#define RPG_CLIENT_EVOLVEBUILDTREASURESOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17D06A40)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildTreasureSolution_TypeDefinitionIndex = 61001;

	class EvolveBuildTreasureSolution : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveGearConfig* GearConfig; // 0x10
		::System::UInt32 CoinDelta; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDTREASURESOLUTION__CTOR_OFFSET))(this);
		}
	};
}
