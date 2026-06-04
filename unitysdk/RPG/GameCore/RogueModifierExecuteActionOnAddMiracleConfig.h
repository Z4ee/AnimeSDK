#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONADDMIRACLECONFIG_METHOD_3_996A65446909436E_OFFSET UNITYSDK_OFFSET(0x19B50C80)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONADDMIRACLECONFIG_METHOD_3_D3FCB7D2AD84F797_OFFSET UNITYSDK_OFFSET(0x19B5C6A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONADDMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B50C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnAddMiracleConfig_TypeDefinitionIndex = 17093;

	class RogueModifierExecuteActionOnAddMiracleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONADDMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D3FCB7D2AD84F797(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnAddMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnAddMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONADDMIRACLECONFIG_METHOD_3_D3FCB7D2AD84F797_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_996A65446909436E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnAddMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnAddMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONADDMIRACLECONFIG_METHOD_3_996A65446909436E_OFFSET))(a1, a2);
		}
	};
}
