#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_METHOD_3_1915202FB87CFBA7_OFFSET UNITYSDK_OFFSET(0x19625A80)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_METHOD_3_B14750C4C9602B36_OFFSET UNITYSDK_OFFSET(0x19625B20)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19625B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_SpillDamage_TypeDefinitionIndex = 15031;

	class ChenLingBattleValueGetter_SpillDamage : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1915202FB87CFBA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_METHOD_3_1915202FB87CFBA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B14750C4C9602B36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_SpillDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_SPILLDAMAGE_METHOD_3_B14750C4C9602B36_OFFSET))(a1, a2);
		}
	};
}
