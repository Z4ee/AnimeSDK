#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B;
class Class_1_C0277CE3A38B20B6;

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CA9D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0xA4CFD80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_2_TypeDefinitionIndex = 59583;

	class GridFightGameRefData___c__DisplayClass165_2 : public ::System::Object
	{
	public:
		::Class_1_90E07F539BBA9EB2_Class_1_3E75962FCD9FB58B* finalRole; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__2(::Class_1_C0277CE3A38B20B6* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C0277CE3A38B20B6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_2___COLLECTEQUIPSANDTRAIT_B__2_OFFSET))(this, x);
		}
	};
}
