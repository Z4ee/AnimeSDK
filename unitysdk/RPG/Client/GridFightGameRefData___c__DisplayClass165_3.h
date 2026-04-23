#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0277CE3A38B20B6;
namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CA9E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__3_OFFSET UNITYSDK_OFFSET(0xA4CFDC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__4_OFFSET UNITYSDK_OFFSET(0xA4CFE10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__5_OFFSET UNITYSDK_OFFSET(0xA4CFE60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass165_3_TypeDefinitionIndex = 59584;

	class GridFightGameRefData___c__DisplayClass165_3 : public ::System::Object
	{
	public:
		::Class_1_C0277CE3A38B20B6* rule; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3__CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectEquipsAndTrait_b__3(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__3_OFFSET))(this, x);
		}

		::System::Boolean __CollectEquipsAndTrait_b__4(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__4_OFFSET))(this, x);
		}

		::System::Boolean __CollectEquipsAndTrait_b__5(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS165_3___COLLECTEQUIPSANDTRAIT_B__5_OFFSET))(this, x);
		}
	};
}
