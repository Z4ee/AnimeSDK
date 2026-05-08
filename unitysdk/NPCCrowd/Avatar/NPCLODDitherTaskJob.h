#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AVATAR_NPCLODDITHERTASKJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6B5500)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCLODDitherTaskJob_TypeDefinitionIndex = 43247;

	struct alignas(4) NPCLODDitherTaskJob
	{
		::System::Single deltaTime; // 0x10

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCLODDITHERTASKJOB_EXECUTE_OFFSET))(this);
		}
	};
}
