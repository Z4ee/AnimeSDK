#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_45;
class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2__CTOR_OFFSET UNITYSDK_OFFSET(0x982EDF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0x9833650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass162_2_TypeDefinitionIndex = 52547;

	class GridFightGameRefData___c__DisplayClass162_2 : public ::System::Object
	{
	public:
		::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* finalRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__2(::Class_1_7AB88D713F5121B3_45* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7AB88D713F5121B3_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET))(this, x);
		}
	};
}
