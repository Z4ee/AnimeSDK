#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFFEA70)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS1_0__PREPARECHRONICLEMISSIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC002430)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleModule___c__DisplayClass1_0_TypeDefinitionIndex = 61791;

	class MissionChronicleModule___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _PrepareChronicleMissionData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS1_0__PREPARECHRONICLEMISSIONDATA_B__0_OFFSET))(this);
		}
	};
}
