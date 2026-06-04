#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_312;
namespace RPG::Client { class Map; }

#define RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB22E3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureMapTestInitParams_TypeDefinitionIndex = 56975;

	class AdventureMapTestInitParams : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_312* DefaultEnvProfile; // 0x10
		::RPG::Client::Map* Map; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
