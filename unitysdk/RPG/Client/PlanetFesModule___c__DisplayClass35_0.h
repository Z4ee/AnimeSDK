#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesSourceSystemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesBuffSource; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BC1E0)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS35_0__GETBUFFSOURCESBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1C2BC1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c__DisplayClass35_0_TypeDefinitionIndex = 66686;

	class PlanetFesModule___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesSourceSystemType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuffSourcesByType_b__0(::RPG::Client::PlanetFesBuffSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS35_0__GETBUFFSOURCESBYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
