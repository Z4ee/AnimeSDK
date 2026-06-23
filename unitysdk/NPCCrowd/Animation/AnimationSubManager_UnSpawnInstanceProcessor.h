#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x11794A10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_FREE_OFFSET UNITYSDK_OFFSET(0x117949D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x117942A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x11794290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x11794300)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x11794350)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11794A80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_UnSpawnInstanceProcessor_TypeDefinitionIndex = 57368;

	class AnimationSubManager_UnSpawnInstanceProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _cache; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _instanceIds; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _instanceIdSet; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		::System::Void Free(::System::UInt32 instanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_FREE_OFFSET))(this, instanceId);
		}

		::System::Void Allocate(::System::UInt32 instanceId, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::System::Int32 instanceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UNSPAWNINSTANCEPROCESSOR_ALLOCATE_OFFSET))(this, instanceId, config, instanceIndex);
		}
	};
}
