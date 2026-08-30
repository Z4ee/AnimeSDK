#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F91AD0C5A85E4AFA_17;

#define RPG_CLIENT_MISSIONMODULE_MISSIONCUSTOMVALUECLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD6E0430)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_MissionCustomValueClient_TypeDefinitionIndex = 66189;

	class MissionModule_MissionCustomValueClient : public ::System::Object
	{
	public:
		::Class_1_F91AD0C5A85E4AFA_17* MissionCustomValue; // 0x10
		::System::UInt32 SubMissionID; // 0x18

		::System::Void _ctor(::Class_1_F91AD0C5A85E4AFA_17* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_17*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_MISSIONCUSTOMVALUECLIENT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
