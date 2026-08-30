#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B;
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS184_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1CE920)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS184_0___BUILDSEASONROLES_B__0_OFFSET UNITYSDK_OFFSET(0xD1D12F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass184_0_TypeDefinitionIndex = 64802;

	class GridFightGameRefData___c__DisplayClass184_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRefData* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSeasonRole*>* res; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS184_0__CTOR_OFFSET))(this);
		}

		::System::Void __BuildSeasonRoles_b__0(::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35769E9BC1F47769_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS184_0___BUILDSEASONROLES_B__0_OFFSET))(this, a1);
		}
	};
}
