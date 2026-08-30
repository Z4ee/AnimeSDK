#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_2556A3875F759BCC_OFFSET UNITYSDK_OFFSET(0x1D3F6A40)
#define RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_9F062C66C7A1BF50_OFFSET UNITYSDK_OFFSET(0x1D3F69F0)
#define RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddBattleBuffConfig_TypeDefinitionIndex = 17739;

	class RogueModifierAddBattleBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F062C66C7A1BF50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddBattleBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddBattleBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_9F062C66C7A1BF50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2556A3875F759BCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddBattleBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddBattleBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBATTLEBUFFCONFIG_METHOD_3_2556A3875F759BCC_OFFSET))(a1, a2);
		}
	};
}
