#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_458EDE24940D61F8_OFFSET UNITYSDK_OFFSET(0x19AE4760)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_9D3F0E4A5CC26835_OFFSET UNITYSDK_OFFSET(0x19AE4980)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE48A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleThenGetRogueMiracleConfig_TypeDefinitionIndex = 18585;

	class RogueActDestroyRogueMiracleThenGetRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_458EDE24940D61F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_458EDE24940D61F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9D3F0E4A5CC26835(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleThenGetRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLETHENGETROGUEMIRACLECONFIG_METHOD_6_9D3F0E4A5CC26835_OFFSET))(a1, a2);
		}
	};
}
