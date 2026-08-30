#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;
class Class_1_50210DAEB46E0CD5;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD1CB990)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0xD1D0D70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_2_TypeDefinitionIndex = 64793;

	class GridFightGameRefData___c__DisplayClass165_2 : public ::System::Object
	{
	public:
		::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* finalRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__2(::Class_1_50210DAEB46E0CD5* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_50210DAEB46E0CD5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET))(this, a1);
		}
	};
}
