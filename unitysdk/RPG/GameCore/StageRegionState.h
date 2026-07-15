#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_STAGEREGIONSTATE_METHOD_2_1437419F3C5C6559_OFFSET UNITYSDK_OFFSET(0x1B0B4700)
#define RPG_GAMECORE_STAGEREGIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B4810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionState_TypeDefinitionIndex = 18440;

	class StageRegionState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::HoyoTagContainer* Tag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1437419F3C5C6559(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageRegionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRegionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONSTATE_METHOD_2_1437419F3C5C6559_OFFSET))(a1, a2);
		}
	};
}
