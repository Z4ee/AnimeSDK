#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_299;
namespace RPG::Client { class Map; }

#define RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x9C8BF40)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureMapTestInitParams_TypeDefinitionIndex = 56213;

	class AdventureMapTestInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* Map; // 0x10
		::Class_0_16E4307DCC419505_299* DefaultEnvProfile; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
