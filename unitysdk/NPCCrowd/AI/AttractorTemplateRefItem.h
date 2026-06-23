#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AttractorDefinition.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_ATTRACTORTEMPLATEREFITEM_SETATTRACTORID_OFFSET UNITYSDK_OFFSET(0x4103E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorTemplateRefItem_TypeDefinitionIndex = 79653;

	struct alignas(8) AttractorTemplateRefItem
	{
		::System::Int32 attractorId; // 0x10
		::System::Boolean overrideParam; // 0x14
		::NPCCrowd::AI::AttractorDefinition overrideDefinition; // 0x18

		::System::Void SetAttractorId(::System::Int32 attractorId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORTEMPLATEREFITEM_SETATTRACTORID_OFFSET))(this, attractorId);
		}
	};
}
