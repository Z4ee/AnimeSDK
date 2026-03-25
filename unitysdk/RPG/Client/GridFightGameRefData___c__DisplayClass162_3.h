#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3_45;
namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3__CTOR_OFFSET UNITYSDK_OFFSET(0x982EE00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3___COLLECTEQUIPSANDTRAIT_B__3_OFFSET UNITYSDK_OFFSET(0x9833690)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3___COLLECTEQUIPSANDTRAIT_B__4_OFFSET UNITYSDK_OFFSET(0x98336E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3___COLLECTEQUIPSANDTRAIT_B__5_OFFSET UNITYSDK_OFFSET(0x9833730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass162_3_TypeDefinitionIndex = 52548;

	class GridFightGameRefData___c__DisplayClass162_3 : public ::System::Object
	{
	public:
		::Class_1_7AB88D713F5121B3_45* rule; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__3(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3___COLLECTEQUIPSANDTRAIT_B__3_OFFSET))(this, x);
		}

		::System::Boolean __CollectEquipsAndTrait_b__4(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3___COLLECTEQUIPSANDTRAIT_B__4_OFFSET))(this, x);
		}

		::System::Boolean __CollectEquipsAndTrait_b__5(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS162_3___COLLECTEQUIPSANDTRAIT_B__5_OFFSET))(this, x);
		}
	};
}
