#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_34;

#define RPG_GAMECORE_LEVELDATACOMPONENT___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA984490)
#define RPG_GAMECORE_LEVELDATACOMPONENT___C__DISPLAYCLASS21_0__STATISTICBATTLETARGETLIST_B__0_OFFSET UNITYSDK_OFFSET(0xA986960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent___c__DisplayClass21_0_TypeDefinitionIndex = 46413;

	class LevelDataComponent___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _StatisticBattleTargetList_b__0(::Class_1_7AB88D713F5121B3_34* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_34*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDATACOMPONENT___C__DISPLAYCLASS21_0__STATISTICBATTLETARGETLIST_B__0_OFFSET))(this, x);
		}
	};
}
