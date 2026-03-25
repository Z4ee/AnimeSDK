#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CFACAB598270468;
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC08A0)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0___SYNCUPDATEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x9FC08B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass46_0_TypeDefinitionIndex = 54249;

	class PlanetFesModule___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::Class_1_1CFACAB598270468* effect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncUpdateBuff_b__0(::RPG::Client::PlanetFesActiveBuff* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS46_0___SYNCUPDATEBUFF_B__0_OFFSET))(this, x);
		}
	};
}
