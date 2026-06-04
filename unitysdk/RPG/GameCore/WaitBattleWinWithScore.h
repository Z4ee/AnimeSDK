#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITBATTLEWINWITHSCORE_METHOD_3_119F015C9D308578_OFFSET UNITYSDK_OFFSET(0x19E52670)
#define RPG_GAMECORE_WAITBATTLEWINWITHSCORE_METHOD_3_25AC7169CF984B78_OFFSET UNITYSDK_OFFSET(0x19E525E0)
#define RPG_GAMECORE_WAITBATTLEWINWITHSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E52640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBattleWinWithScore_TypeDefinitionIndex = 20096;

	class WaitBattleWinWithScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25AC7169CF984B78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleWinWithScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleWinWithScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHSCORE_METHOD_3_25AC7169CF984B78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_119F015C9D308578(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleWinWithScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleWinWithScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEWINWITHSCORE_METHOD_3_119F015C9D308578_OFFSET))(a1, a2);
		}
	};
}
