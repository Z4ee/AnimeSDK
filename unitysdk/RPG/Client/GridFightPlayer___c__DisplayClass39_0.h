#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FD0167EB507B9435_3;

#define RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA52180)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0__ISVICTORYRULEUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x1CA54270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer___c__DisplayClass39_0_TypeDefinitionIndex = 65135;

	class GridFightPlayer___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsVictoryRuleUnlock_b__0(::Class_2_FD0167EB507B9435_3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_FD0167EB507B9435_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0__ISVICTORYRULEUNLOCK_B__0_OFFSET))(this, a1);
		}
	};
}
