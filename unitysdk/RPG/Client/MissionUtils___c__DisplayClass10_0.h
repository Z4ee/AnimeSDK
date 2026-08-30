#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4EEAD21E873B5A41;
namespace RPG::Client { class MainMissionData; }

#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19E14470)
#define RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__1_OFFSET UNITYSDK_OFFSET(0x19E18A50)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___c__DisplayClass10_0_TypeDefinitionIndex = 66233;

	class MissionUtils___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::MainMissionData* trackingMission; // 0x10
		::Class_2_4EEAD21E873B5A41* frvInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryAssistWayPointOneClickCompleteTransfer_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONUTILS___C__DISPLAYCLASS10_0__TRYASSISTWAYPOINTONECLICKCOMPLETETRANSFER_B__1_OFFSET))(this);
		}
	};
}
