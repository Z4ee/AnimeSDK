#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::HouguMap { class HouguMapFightViewModel; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD00B760)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___C__DISPLAYCLASS2_0___DOTRACKFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xD00B8B0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___C__DISPLAYCLASS2_0___DOTRACKFIGHT_B__1_OFFSET UNITYSDK_OFFSET(0xD00BAB0)

namespace RPG::Client::FateRin::HouguMap
{
	inline static constexpr unsigned int HouguMapFightViewModel___c__DisplayClass2_0_TypeDefinitionIndex = 79446;

	class HouguMapFightViewModel___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* __4__this; // 0x10
		::System::UInt32 blockID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoTrackFight_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___C__DISPLAYCLASS2_0___DOTRACKFIGHT_B__0_OFFSET))(this);
		}

		::System::Void __DoTrackFight_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___C__DISPLAYCLASS2_0___DOTRACKFIGHT_B__1_OFFSET))(this);
		}
	};
}
