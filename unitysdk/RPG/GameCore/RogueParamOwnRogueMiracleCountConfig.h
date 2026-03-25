#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_6_1BFDEBEFFA2B30EB_OFFSET UNITYSDK_OFFSET(0x1764B930)
#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_6_EE3CC5BB6CA6BE25_OFFSET UNITYSDK_OFFSET(0x1764BBE0)
#define RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764BAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamOwnRogueMiracleCountConfig_TypeDefinitionIndex = 18184;

	class RogueParamOwnRogueMiracleCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1BFDEBEFFA2B30EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_6_1BFDEBEFFA2B30EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EE3CC5BB6CA6BE25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamOwnRogueMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMOWNROGUEMIRACLECOUNTCONFIG_METHOD_6_EE3CC5BB6CA6BE25_OFFSET))(a1, a2);
		}
	};
}
