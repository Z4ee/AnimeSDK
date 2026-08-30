#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_50210DAEB46E0CD5;
namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3__CTOR_OFFSET UNITYSDK_OFFSET(0xD1CB9A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__3_OFFSET UNITYSDK_OFFSET(0xD1D0DB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__4_OFFSET UNITYSDK_OFFSET(0xD1D0DF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__5_OFFSET UNITYSDK_OFFSET(0xD1D0E30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_3_TypeDefinitionIndex = 64794;

	class GridFightGameRefData___c__DisplayClass165_3 : public ::System::Object
	{
	public:
		::Class_1_50210DAEB46E0CD5* rule; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__3(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__3_OFFSET))(this, a1);
		}

		::System::Boolean __CollectEquipsAndTrait_b__4(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__4_OFFSET))(this, a1);
		}

		::System::Boolean __CollectEquipsAndTrait_b__5(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__5_OFFSET))(this, a1);
		}
	};
}
