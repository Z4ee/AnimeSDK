#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_F14DBCEFBB8552D6_OFFSET UNITYSDK_OFFSET(0x1E821BD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_FF343822839EA7C3_OFFSET UNITYSDK_OFFSET(0x1E821C10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E821C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBattleWinTime_TypeDefinitionIndex = 21535;

	class SetDynamicValueByRogueBattleWinTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F14DBCEFBB8552D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_F14DBCEFBB8552D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF343822839EA7C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBattleWinTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBATTLEWINTIME_METHOD_3_FF343822839EA7C3_OFFSET))(a1, a2);
		}
	};
}
