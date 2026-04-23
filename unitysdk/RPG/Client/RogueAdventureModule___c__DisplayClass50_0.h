#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_611;
class Class_1_3CA736257F0420E6;

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB01F3B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0___ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xB0216B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c__DisplayClass50_0_TypeDefinitionIndex = 62067;

	class RogueAdventureModule___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::Class_1_3CA736257F0420E6* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdHandleRogueCommonPendingActionScRsp_b__0(::Class_0_16E4307DCC419505_611* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_611*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0___ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_B__0_OFFSET))(this, a);
		}
	};
}
