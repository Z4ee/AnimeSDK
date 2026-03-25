#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CFACAB598270468;
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC08E0)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0___SYNCREMOVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x9FC08F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass47_0_TypeDefinitionIndex = 54250;

	class PlanetFesModule___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::Class_1_1CFACAB598270468* effect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncRemoveBuff_b__0(::RPG::Client::PlanetFesActiveBuff* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0___SYNCREMOVEBUFF_B__0_OFFSET))(this, x);
		}
	};
}
