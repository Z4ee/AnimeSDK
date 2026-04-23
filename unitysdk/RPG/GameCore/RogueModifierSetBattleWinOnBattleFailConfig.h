#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_METHOD_3_1CB0EFB96B0AF2D1_OFFSET UNITYSDK_OFFSET(0x18D46180)
#define RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_METHOD_3_86C231FDB00AE438_OFFSET UNITYSDK_OFFSET(0x18D460B0)
#define RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D46130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetBattleWinOnBattleFailConfig_TypeDefinitionIndex = 16863;

	class RogueModifierSetBattleWinOnBattleFailConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_86C231FDB00AE438(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_METHOD_3_86C231FDB00AE438_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CB0EFB96B0AF2D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetBattleWinOnBattleFailConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETBATTLEWINONBATTLEFAILCONFIG_METHOD_3_1CB0EFB96B0AF2D1_OFFSET))(a1, a2);
		}
	};
}
