#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_METHOD_3_A82E885A7EC87135_OFFSET UNITYSDK_OFFSET(0x17083060)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_METHOD_3_ECA80BD3561E10D7_OFFSET UNITYSDK_OFFSET(0x17083000)
#define RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY__CTOR_OFFSET UNITYSDK_OFFSET(0x17083050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleValueGetter_Multiply_TypeDefinitionIndex = 14497;

	class ChenLingBattleValueGetter_Multiply : public ::RPG::GameCore::BaseChenLingBattleValueGetter
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* ValueGetter; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Multiplier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ECA80BD3561E10D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_METHOD_3_ECA80BD3561E10D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A82E885A7EC87135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleValueGetter_Multiply*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEVALUEGETTER_MULTIPLY_METHOD_3_A82E885A7EC87135_OFFSET))(a1, a2);
		}
	};
}
