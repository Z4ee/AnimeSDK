#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;
class Class_1_50210DAEB46E0CD5;
namespace RPG::Client { class GridFightGameRefData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1C440)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0___COLLECTEQUIPSANDTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0x1BA21920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_0_TypeDefinitionIndex = 64791;

	class GridFightGameRefData___c__DisplayClass165_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_50210DAEB46E0CD5*>* rules; // 0x10
		::System::Collections::Generic::List_1<::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*>* appendingFinalRoles; // 0x18
		::RPG::Client::GridFightGameRefData* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0__CTOR_OFFSET))(this);
		}

		::System::Void __CollectEquipsAndTrait_b__0(::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_0___COLLECTEQUIPSANDTRAIT_B__0_OFFSET))(this, a1);
		}
	};
}
