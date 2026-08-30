#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_5A407A1A74252A0A_OFFSET UNITYSDK_OFFSET(0x1D3F92E0)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_C0B649DFA3010066_OFFSET UNITYSDK_OFFSET(0x1D3F9330)
#define RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig_TypeDefinitionIndex = 17609;

	class RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A407A1A74252A0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_5A407A1A74252A0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0B649DFA3010066(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierKongOnSamePersonaRoomCardNumAndLeftRerollCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERKONGONSAMEPERSONAROOMCARDNUMANDLEFTREROLLCOUNTCONFIG_METHOD_3_C0B649DFA3010066_OFFSET))(a1, a2);
		}
	};
}
