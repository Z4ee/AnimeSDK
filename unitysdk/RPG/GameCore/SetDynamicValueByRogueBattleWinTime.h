#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_AE9D9104D530B75C_OFFSET UNITYSDK_OFFSET(0x18E264D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_FF343822839EA7C3_OFFSET UNITYSDK_OFFSET(0x18E26540)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x18E26510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBattleWinTime_TypeDefinitionIndex = 20629;

	class SetDynamicValueByRogueBattleWinTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE9D9104D530B75C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_AE9D9104D530B75C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF343822839EA7C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_FF343822839EA7C3_OFFSET))(a1, a2);
		}
	};
}
