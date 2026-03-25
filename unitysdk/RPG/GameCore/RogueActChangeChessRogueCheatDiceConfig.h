#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_6_9323025219D94B23_OFFSET UNITYSDK_OFFSET(0x175B1A20)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_6_EA173C5D91271546_OFFSET UNITYSDK_OFFSET(0x175B1C40)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B1B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueCheatDiceConfig_TypeDefinitionIndex = 17994;

	class RogueActChangeChessRogueCheatDiceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9323025219D94B23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_6_9323025219D94B23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EA173C5D91271546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_METHOD_6_EA173C5D91271546_OFFSET))(a1, a2);
		}
	};
}
