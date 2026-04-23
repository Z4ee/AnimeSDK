#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8B4D80)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS2_0__GETEMPTYMISSIONDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0xA8B7740)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleModule___c__DisplayClass2_0_TypeDefinitionIndex = 60858;

	class MissionChronicleModule___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetEmptyMissionDataList_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___C__DISPLAYCLASS2_0__GETEMPTYMISSIONDATALIST_B__0_OFFSET))(this);
		}
	};
}
