#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"
#include "unitysdk/NPCCrowd/Animation/InstanceEntityData.h"
#include "unitysdk/NPCCrowd/Animation/InstanceKey.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xD938B40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_FINDORADDINSTANCELIST_OFFSET UNITYSDK_OFFSET(0xD9390C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_FREE_OFFSET UNITYSDK_OFFSET(0xD938F80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xD938490)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xD938480)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xD9384F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0xD9385C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD939370)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SpawnInstanceProcessor_TypeDefinitionIndex = 57473;

	class AnimationSubManager_SpawnInstanceProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::InstanceKey, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::InstanceEntityData>*>* _cache; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::InstanceEntityData>*>* _instanceMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		::System::Void Allocate(::System::UInt32 instanceId, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::System::Int32 instanceIndex, ::Class_3_F2DAD7F45F518868* npcComponent, ::System::Boolean useStateMachine, ::System::Boolean useMontage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::Class_3_F2DAD7F45F518868*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_ALLOCATE_OFFSET))(this, instanceId, config, instanceIndex, npcComponent, useStateMachine, useMontage);
		}

		::System::Void Free(::System::UInt32 instanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_FREE_OFFSET))(this, instanceId);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::Animation::InstanceEntityData>* FindOrAddInstanceList(::NPCCrowd::Animation::InstanceKey instanceKey)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::Animation::InstanceEntityData>*(*)(::PVOID, ::NPCCrowd::Animation::InstanceKey))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SPAWNINSTANCEPROCESSOR_FINDORADDINSTANCELIST_OFFSET))(this, instanceKey);
		}
	};
}
