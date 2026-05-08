#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/SpawnPoint.h"

#define NPCCROWD_AI_SPAWNCONFIGFORATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCE46410)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnConfigForAttractor_TypeDefinitionIndex = 43576;

	class SpawnConfigForAttractor : public ::NPCCrowd::AI::SpawnPoint
	{
	public:
		::System::Boolean useNpcSub; // 0x38
		::System::Int32 npcSubID; // 0x3C
		::System::Int32 npcCommonTagID; // 0x40
		::System::Int32 attractorHandler; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNCONFIGFORATTRACTOR__CTOR_OFFSET))(this);
		}
	};
}
