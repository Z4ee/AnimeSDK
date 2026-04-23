#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCollectionGearDisplayData; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB682710)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS17_0___ADDTOWAVEDATABYGEARID_B__0_OFFSET UNITYSDK_OFFSET(0xB685160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBox___c__DisplayClass17_0_TypeDefinitionIndex = 49352;

	class EvolveBuildRewardBox___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt32 gearID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddToWaveDataByGearID_b__0(::RPG::Client::EvolveBuildCollectionGearDisplayData* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGearDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOX___C__DISPLAYCLASS17_0___ADDTOWAVEDATABYGEARID_B__0_OFFSET))(this, a);
		}
	};
}
