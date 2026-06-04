#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_96419071E7E84E8F_OFFSET UNITYSDK_OFFSET(0x19B5E420)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_C0B649DFA3010066_OFFSET UNITYSDK_OFFSET(0x19B54020)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B53FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig_TypeDefinitionIndex = 16933;

	class RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96419071E7E84E8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_96419071E7E84E8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0B649DFA3010066(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_C0B649DFA3010066_OFFSET))(a1, a2);
		}
	};
}
