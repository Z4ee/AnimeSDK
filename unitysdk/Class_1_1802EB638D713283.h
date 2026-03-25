#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceRegionCellConfig; }

#define CLASS_1_1802EB638D713283__CTOR_OFFSET UNITYSDK_OFFSET(0x16620850)

inline static constexpr unsigned int Class_1_1802EB638D713283_TypeDefinitionIndex = 28606;

class Class_1_1802EB638D713283 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceRegionCellConfig* Field_1_1; // 0x10
	::RPG::GameCore::CakeRaceCellType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1802EB638D713283__CTOR_OFFSET))(this);
	}
};
