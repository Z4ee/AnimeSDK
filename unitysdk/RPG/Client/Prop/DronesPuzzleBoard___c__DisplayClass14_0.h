#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAchieveAreaConfig.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DronesPuzzleBoard; }

#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___C__DISPLAYCLASS14_0__BUILDACHIEVEMENTAREAS_B__1_OFFSET UNITYSDK_OFFSET(0xDC55420)
#define RPG_CLIENT_PROP_DRONESPUZZLEBOARD___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC54920)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleBoard___c__DisplayClass14_0_TypeDefinitionIndex = 78097;

	class DronesPuzzleBoard___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::DronesPuzzleBoard* __4__this; // 0x10
		::RPG::Client::Prop::DronesPuzzleAchieveAreaConfig areaConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildAchievementAreas_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEBOARD___C__DISPLAYCLASS14_0__BUILDACHIEVEMENTAREAS_B__1_OFFSET))(this);
		}
	};
}
