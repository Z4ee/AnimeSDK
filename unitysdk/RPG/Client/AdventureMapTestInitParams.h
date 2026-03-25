#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_293;
namespace RPG::Client { class Map; }

#define RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x902F1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureMapTestInitParams_TypeDefinitionIndex = 49416;

	class AdventureMapTestInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* Map; // 0x10
		::Class_0_16E4307DCC419505_293* DefaultEnvProfile; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREMAPTESTINITPARAMS__CTOR_OFFSET))(this);
		}
	};
}
