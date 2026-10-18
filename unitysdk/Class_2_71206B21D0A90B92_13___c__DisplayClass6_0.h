#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionModule; }

#define CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7EB80)
#define CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS6_0___ACCEPTANDTRACKPREMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xBA7ED60)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_13___c__DisplayClass6_0_TypeDefinitionIndex = 53080;

class Class_2_71206B21D0A90B92_13___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::Client::MissionModule* missionModule; // 0x10
	::System::UInt32 preMissionID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __AcceptAndTrackPreMission_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS6_0___ACCEPTANDTRACKPREMISSION_B__0_OFFSET))(this);
	}
};
