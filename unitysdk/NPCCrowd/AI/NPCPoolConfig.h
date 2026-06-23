#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/NPCIDItem.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class CrowdConditionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCPOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC1F70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCPoolConfig_TypeDefinitionIndex = 61617;

	class NPCPoolConfig : public ::System::Object
	{
	public:
		::System::Int32 PoolID; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* poolConditions; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::NPCIDItem>* npcIDList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCPOOLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
