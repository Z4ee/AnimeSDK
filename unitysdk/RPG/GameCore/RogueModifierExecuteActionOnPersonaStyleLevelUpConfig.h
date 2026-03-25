#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_C6C242BC6CBB957A_OFFSET UNITYSDK_OFFSET(0x17631630)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_CEAFC8B4F5257743_OFFSET UNITYSDK_OFFSET(0x17631560)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x176315E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaStyleLevelUpConfig_TypeDefinitionIndex = 16394;

	class RogueModifierExecuteActionOnPersonaStyleLevelUpConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEAFC8B4F5257743(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_CEAFC8B4F5257743_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6C242BC6CBB957A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_C6C242BC6CBB957A_OFFSET))(a1, a2);
		}
	};
}
