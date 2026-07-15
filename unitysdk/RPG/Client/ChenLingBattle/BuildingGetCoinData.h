#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Building; }

#define RPG_CLIENT_CHENLINGBATTLE_BUILDINGGETCOINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x196399A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int BuildingGetCoinData_TypeDefinitionIndex = 72328;

	class BuildingGetCoinData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Building* Building; // 0x10
		::System::Int32 DeltaValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDINGGETCOINDATA__CTOR_OFFSET))(this);
		}
	};
}
