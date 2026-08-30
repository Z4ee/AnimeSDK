#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEREGIONAFFECT_METHOD_2_D17AC1A3C124D336_OFFSET UNITYSDK_OFFSET(0x1D55C180)
#define RPG_GAMECORE_STAGEREGIONAFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D55C290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionAffect_TypeDefinitionIndex = 18962;

	class StageRegionAffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetRegionID; // 0x10
		::RPG::GameCore::StageRegionActiveState TargetRegionActiveState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONAFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D17AC1A3C124D336(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageRegionAffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRegionAffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONAFFECT_METHOD_2_D17AC1A3C124D336_OFFSET))(a1, a2);
		}
	};
}
