#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x44EB50)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimatorManager_SampleData_TypeDefinitionIndex = 87992;

	struct alignas(4) NPCAccessoryAnimatorManager_SampleData
	{
		::System::Int32 AnimationId; // 0x10
		::System::Single Time; // 0x14

		::System::Void _ctor(::System::Int32 animationId, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEDATA__CTOR_OFFSET))(this, animationId, time);
		}
	};
}
