#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_45;
class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9833600)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET UNITYSDK_OFFSET(0x9833610)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass162_1_TypeDefinitionIndex = 52546;

	class GridFightGameRefData___c__DisplayClass162_1 : public ::System::Object
	{
	public:
		::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__1(::Class_1_7AB88D713F5121B3_45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_1___COLLECTEQUIPSANDTRAIT_B__1_OFFSET))(this, x);
		}
	};
}
