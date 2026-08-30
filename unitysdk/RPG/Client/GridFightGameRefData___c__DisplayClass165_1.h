#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;
class Class_1_50210DAEB46E0CD5;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA21A80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET UNITYSDK_OFFSET(0x1BA21A90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_1_TypeDefinitionIndex = 64792;

	class GridFightGameRefData___c__DisplayClass165_1 : public ::System::Object
	{
	public:
		::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__1(::Class_1_50210DAEB46E0CD5* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_50210DAEB46E0CD5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET))(this, a1);
		}
	};
}
