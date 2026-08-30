#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_METHOD_3_70267D2FCB45807E_OFFSET UNITYSDK_OFFSET(0x1E009590)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_METHOD_3_796CD5483FCF856A_OFFSET UNITYSDK_OFFSET(0x1E009660)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E009650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_WaitTime_TypeDefinitionIndex = 15566;

	class ChenLingBattleAbility_WaitTime : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* WaitTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70267D2FCB45807E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_WaitTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_WaitTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_METHOD_3_70267D2FCB45807E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_796CD5483FCF856A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_WaitTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_WaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_WAITTIME_METHOD_3_796CD5483FCF856A_OFFSET))(a1, a2);
		}
	};
}
