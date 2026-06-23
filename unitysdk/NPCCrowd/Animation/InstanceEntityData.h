#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/LogicArchetypeKey.h"
#include "unitysdk/System/ValueType.h"

class Class_3_F2DAD7F45F518868;

#define NPCCROWD_ANIMATION_INSTANCEENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x4123C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int InstanceEntityData_TypeDefinitionIndex = 44782;

	struct alignas(8) InstanceEntityData
	{
		::System::UInt32 EntityId; // 0x10
		::Class_3_F2DAD7F45F518868* NpcComponent; // 0x18
		::NPCCrowd::Animation::LogicArchetypeKey LogicArchetypeKey; // 0x20

		::System::Void _ctor(::System::UInt32 entityId, ::Class_3_F2DAD7F45F518868* npcComponent, ::NPCCrowd::Animation::LogicArchetypeKey logicArchetypeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::LogicArchetypeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_INSTANCEENTITYDATA__CTOR_OFFSET))(this, entityId, npcComponent, logicArchetypeKey);
		}
	};
}
