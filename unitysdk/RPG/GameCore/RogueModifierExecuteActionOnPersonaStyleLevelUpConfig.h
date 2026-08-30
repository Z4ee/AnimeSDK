#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_306DECB23D34DABE_OFFSET UNITYSDK_OFFSET(0x1D3F8980)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_C6C242BC6CBB957A_OFFSET UNITYSDK_OFFSET(0x1D3F89D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F89C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaStyleLevelUpConfig_TypeDefinitionIndex = 17639;

	class RogueModifierExecuteActionOnPersonaStyleLevelUpConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_306DECB23D34DABE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_306DECB23D34DABE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6C242BC6CBB957A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_METHOD_3_C6C242BC6CBB957A_OFFSET))(a1, a2);
		}
	};
}
