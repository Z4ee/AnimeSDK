#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1350;
class Class_1_310250D457C6B8CD;
class Class_1_5060AE803DAE1512;
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapViewModel; }
namespace RPG::Client::FateRin::HouguMap { class HouguMapFightViewModel; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5ABC80)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0___BUILDFIGHTVIEWMODELS_B__1_OFFSET UNITYSDK_OFFSET(0x1B5AC230)

namespace RPG::Client::FateRin::HouguMap
{
	inline static constexpr unsigned int FateRinHouguMapViewModel___c__DisplayClass3_0_TypeDefinitionIndex = 79443;

	class FateRinHouguMapViewModel___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::HouguMap::FateRinHouguMapViewModel* __4__this; // 0x10
		::Class_1_5060AE803DAE1512* missionProgressService; // 0x18
		::Class_1_310250D457C6B8CD* overrideService; // 0x20
		::Class_0_16E4307DCC419505_1350* redDotService; // 0x28
		::System::Boolean bossIsHard; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* __BuildFightViewModels_b__1(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
		{
			return ((::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0___BUILDFIGHTVIEWMODELS_B__1_OFFSET))(this, a1);
		}
	};
}
