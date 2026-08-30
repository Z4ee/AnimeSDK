#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildRewardBoxGear; }
namespace RPG::GameCore { class EvolveBuildRewardBoxGearUpgrade; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE638510)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS16_0___ADDTOWAVEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xE63ADD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBox___c__DisplayClass16_0_TypeDefinitionIndex = 53784;

	class EvolveBuildRewardBox___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardBoxGear* upData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddToWaveData_b__0(::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS16_0___ADDTOWAVEDATA_B__0_OFFSET))(this, a1);
		}
	};
}
