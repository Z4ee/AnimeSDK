#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesBuffSource; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC0820)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__GETBUFFSOURCE_B__0_OFFSET UNITYSDK_OFFSET(0x9FC0830)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass34_0_TypeDefinitionIndex = 54247;

	class PlanetFesModule___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 sourceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuffSource_b__0(::RPG::Client::PlanetFesBuffSource* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__GETBUFFSOURCE_B__0_OFFSET))(this, x);
		}
	};
}
