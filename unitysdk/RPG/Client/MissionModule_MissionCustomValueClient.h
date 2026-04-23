#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4EE99D7CBA59EE47_10;

#define RPG_CLIENT_MISSIONMODULE_MISSIONCUSTOMVALUECLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA8E63C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_MissionCustomValueClient_TypeDefinitionIndex = 60908;

	class MissionModule_MissionCustomValueClient : public ::System::Object
	{
	public:
		::Class_1_4EE99D7CBA59EE47_10* MissionCustomValue; // 0x10
		::System::UInt32 SubMissionID; // 0x18

		::System::Void _ctor(::Class_1_4EE99D7CBA59EE47_10* customValue, ::System::UInt32 subMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4EE99D7CBA59EE47_10*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_MISSIONCUSTOMVALUECLIENT__CTOR_OFFSET))(this, customValue, subMissionID);
		}
	};
}
