#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_3_D625E3A26166A062_OFFSET UNITYSDK_OFFSET(0x18912CD0)
#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_3_EE3A2582AFEEA7EF_OFFSET UNITYSDK_OFFSET(0x18912D90)
#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18912D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlaySummonBotAnimAction_TypeDefinitionIndex = 17792;

	class FiveDimPlaySummonBotAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D625E3A26166A062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_3_D625E3A26166A062_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE3A2582AFEEA7EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_METHOD_3_EE3A2582AFEEA7EF_OFFSET))(a1, a2);
		}
	};
}
