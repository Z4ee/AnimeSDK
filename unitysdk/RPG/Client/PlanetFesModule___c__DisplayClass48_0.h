#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesActiveBuff; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC0920)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS48_0___FINDACTIVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x9FC0930)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass48_0_TypeDefinitionIndex = 54251;

	class PlanetFesModule___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::PlanetFesActiveBuff*>* predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __FindActiveBuff_b__0(::RPG::Client::PlanetFesActiveBuff* activeBuff)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS48_0___FINDACTIVEBUFF_B__0_OFFSET))(this, activeBuff);
		}
	};
}
