#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2BFA2CD339E4FBC7;

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB87300)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__2_OFFSET UNITYSDK_OFFSET(0xBB88100)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__3_OFFSET UNITYSDK_OFFSET(0xBB88120)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass43_0_TypeDefinitionIndex = 60651;

	class GridFightGameSession___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipUID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddEquipToBattleChangeEvent_b__2(::Class_1_2BFA2CD339E4FBC7* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __AddEquipToBattleChangeEvent_b__3(::Class_1_2BFA2CD339E4FBC7* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2BFA2CD339E4FBC7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS43_0___ADDEQUIPTOBATTLECHANGEEVENT_B__3_OFFSET))(this, a1);
		}
	};
}
