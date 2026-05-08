#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_NPCIDITEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x714D60)
#define NPCCROWD_AI_NPCIDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x714DB0)
#define NPCCROWD_AI_NPCIDITEM___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x714DC0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCIDItem_TypeDefinitionIndex = 74175;

	struct alignas(4) NPCIDItem
	{
		::System::Int32 NPCID; // 0x10
		::System::Single weight; // 0x14

		::System::Void _ctor(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEM__CTOR_OFFSET))(this, weight);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEM_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEM___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
