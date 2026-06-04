#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_6_61BC501128BDE607_OFFSET UNITYSDK_OFFSET(0x19AFDEA0)
#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_6_BECBDD170CCEDF92_OFFSET UNITYSDK_OFFSET(0x19AFE0C0)
#define RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFDFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActUseRogueMiracleConfig_TypeDefinitionIndex = 18613;

	class RogueActUseRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_61BC501128BDE607(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActUseRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActUseRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_6_61BC501128BDE607_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BECBDD170CCEDF92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActUseRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActUseRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTUSEROGUEMIRACLECONFIG_METHOD_6_BECBDD170CCEDF92_OFFSET))(a1, a2);
		}
	};
}
