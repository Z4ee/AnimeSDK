#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_2556A3875F759BCC_OFFSET UNITYSDK_OFFSET(0x19B4DD00)
#define RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_686A8D4BAF9EA715_OFFSET UNITYSDK_OFFSET(0x19B4DC30)
#define RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4DCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddBattleBuffConfig_TypeDefinitionIndex = 17061;

	class RogueModifierAddBattleBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_686A8D4BAF9EA715(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddBattleBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddBattleBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_686A8D4BAF9EA715_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2556A3875F759BCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddBattleBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddBattleBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_2556A3875F759BCC_OFFSET))(a1, a2);
		}
	};
}
