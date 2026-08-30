#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_98FF5AAC4DE5D811_OFFSET UNITYSDK_OFFSET(0x1D3B7270)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_9D3F0E4A5CC26835_OFFSET UNITYSDK_OFFSET(0x1D3B72C0)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B72B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleThenGetRogueMiracleConfig_TypeDefinitionIndex = 19387;

	class RogueActDestroyRogueMiracleThenGetRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_98FF5AAC4DE5D811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_98FF5AAC4DE5D811_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9D3F0E4A5CC26835(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_9D3F0E4A5CC26835_OFFSET))(a1, a2);
		}
	};
}
