#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS179_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98310F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS179_0___BUILDROLES_B__0_OFFSET UNITYSDK_OFFSET(0x9833A10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass179_0_TypeDefinitionIndex = 52555;

	class GridFightGameRefData___c__DisplayClass179_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* res; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS179_0__CTOR_OFFSET))(this);
		}

		::System::Void __BuildRoles_b__0(::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS179_0___BUILDROLES_B__0_OFFSET))(this, role);
		}
	};
}
