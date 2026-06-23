#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/NPCCrowd/AI/ReactionRegisterObjectType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI { class ReactionCallbackDelegate; }
namespace NPCCrowd::AI { class ReactionConditionDelegate; }
namespace System { class Object; }

#define NPCCROWD_AI_REGISTERITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x650030)
#define NPCCROWD_AI_REGISTERITEM___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x650040)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int RegisterItem_TypeDefinitionIndex = 62292;

	struct alignas(8) RegisterItem
	{
		::Foundation::Unreal::FGameplayTag tag; // 0x10
		::NPCCrowd::AI::ReactionCallbackDelegate* callback; // 0x18
		::NPCCrowd::AI::ReactionConditionDelegate* condition; // 0x20
		::System::UInt32 reactionID; // 0x28
		::System::UInt32 priority; // 0x2C
		::System::Int32 handlerID; // 0x30
		::NPCCrowd::AI::ReactionRegisterObjectType reactionRegisterObjectType; // 0x34

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REGISTERITEM_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_REGISTERITEM___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
