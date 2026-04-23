#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2BFA2CD339E4FBC7;

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E0FC0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__2_OFFSET UNITYSDK_OFFSET(0xA4E1DC0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__3_OFFSET UNITYSDK_OFFSET(0xA4E1DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass43_0_TypeDefinitionIndex = 59716;

	class GridFightGameSession___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddEquipToBattleChangeEvent_b__2(::Class_1_2BFA2CD339E4FBC7* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__2_OFFSET))(this, x);
		}

		::System::Boolean __AddEquipToBattleChangeEvent_b__3(::Class_1_2BFA2CD339E4FBC7* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__3_OFFSET))(this, x);
		}
	};
}
