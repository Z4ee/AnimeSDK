#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameTargetType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x5CC740)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x5CC6A0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5CC750)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x5CC690)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x5CC7B0)
#define NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5CC820)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdFrameKeyManager_SeqFrameRuntimeKey_TypeDefinitionIndex = 87210;

	struct alignas(4) NPCCrowdFrameKeyManager_SeqFrameRuntimeKey
	{
		::System::UInt32 entityId; // 0x10
		::NPCCrowd::Animation::MontageSeqFrameTargetType targetType; // 0x14
		::System::Int32 targetId; // 0x18

		::System::Void _ctor(::System::UInt32 entityId, ::NPCCrowd::Animation::MontageSeqFrameTargetType targetType, ::System::Int32 targetId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::MontageSeqFrameTargetType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY__CTOR_OFFSET))(this, entityId, targetType, targetId);
		}

		::System::Boolean Equals(::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdFrameKeyManager_SeqFrameRuntimeKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDFRAMEKEYMANAGER_SEQFRAMERUNTIMEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
