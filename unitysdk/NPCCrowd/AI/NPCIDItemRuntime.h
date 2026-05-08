#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/NPCIDItem.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCIDITEMRUNTIME_ADDITEM_OFFSET UNITYSDK_OFFSET(0xB52BD20)
#define NPCCROWD_AI_NPCIDITEMRUNTIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB52BCE0)
#define NPCCROWD_AI_NPCIDITEMRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xB52BEA0)
#define NPCCROWD_AI_NPCIDITEMRUNTIME___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB52BF20)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCIDItemRuntime_TypeDefinitionIndex = 60906;

	class NPCIDItemRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItem>* items; // 0x10
		::System::Int32 NPCID; // 0x18
		::System::Single weight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEMRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEMRUNTIME_GETHASHCODE_OFFSET))(this);
		}

		::System::Void AddItem(::NPCCrowd::AI::NPCIDItem item)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::NPCIDItem))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEMRUNTIME_ADDITEM_OFFSET))(this, item);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEMRUNTIME___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
