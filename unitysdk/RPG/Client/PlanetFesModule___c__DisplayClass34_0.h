#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesBuffSource; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C9AB0)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__GETBUFFSOURCE_B__0_OFFSET UNITYSDK_OFFSET(0x1A1C9AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass34_0_TypeDefinitionIndex = 63700;

	class PlanetFesModule___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::UInt32 sourceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuffSource_b__0(::RPG::Client::PlanetFesBuffSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS34_0__GETBUFFSOURCE_B__0_OFFSET))(this, a1);
		}
	};
}
