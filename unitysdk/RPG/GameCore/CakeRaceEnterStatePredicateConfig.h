#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_METHOD_3_1FAC102E67F7E1B1_OFFSET UNITYSDK_OFFSET(0x195ECBB0)
#define RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_METHOD_3_EAFE51C5D70E8619_OFFSET UNITYSDK_OFFSET(0x195E91E0)
#define RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195E91D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceEnterStatePredicateConfig_TypeDefinitionIndex = 17475;

	class CakeRaceEnterStatePredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState AIState; // 0x18
		::System::Boolean EdgeTrigger; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1FAC102E67F7E1B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_METHOD_3_1FAC102E67F7E1B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EAFE51C5D70E8619(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEENTERSTATEPREDICATECONFIG_METHOD_3_EAFE51C5D70E8619_OFFSET))(a1, a2);
		}
	};
}
