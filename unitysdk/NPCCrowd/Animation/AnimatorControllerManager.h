#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerManager_ArchetypeData.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerParamEntry.h"
#include "unitysdk/NPCCrowd/Animation/AnimatorControllerStateEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { template <typename T1, typename T2> class AnimatorControllerInstance_2; }
namespace NPCCrowd::Animation { template <typename T> class AnimatorControllerParamResolver_1; }
namespace NPCCrowd::Animation { template <typename T> class AnimatorControllerStateResolver_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimatorOverrideController; }

#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_ALLOCATECHUNK_OFFSET UNITYSDK_OFFSET(0x12D208B0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x12D20990)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D21BB0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_FINDORADD_OFFSET UNITYSDK_OFFSET(0x12D216E0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETARCHETYPE_OFFSET UNITYSDK_OFFSET(0x12D20770)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETINSTANCECONTROLLER_OFFSET UNITYSDK_OFFSET(0x12D220A0)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETINSTANCEPARAM_OFFSET UNITYSDK_OFFSET(0x12D21F70)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETINSTANCESTATE_OFFSET UNITYSDK_OFFSET(0x12D22000)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_ISVALIDINSTANCE_OFFSET UNITYSDK_OFFSET(0x12D21A40)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_NEW_OFFSET UNITYSDK_OFFSET(0x12D20D70)
#define NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12D22120)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerManager_TypeDefinitionIndex = 72654;

	class AnimatorControllerManager : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSize = 0x8; // 0x0
		// static const ::System::Int32 ChunkSizeBit = 0x3; // 0x0
		// static const ::System::Int32 ChunkMask = 0x7; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::ValueTuple_2<::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimatorControllerStateEntry>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimatorControllerParamEntry>>>*, ::System::Int32>>* _archetypeData; // 0x10
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::UnityEngine::AnimatorOverrideController*, ::NPCCrowd::Animation::AnimatorControllerManager_ArchetypeData>>*>* _instanceData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetArchetype(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETARCHETYPE_OFFSET))(this, instanceConfig, instanceIndex);
		}

		::System::ValueTuple_2<::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimatorControllerStateEntry>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimatorControllerParamEntry>> AllocateChunk(::System::Int32 stateCount, ::System::Int32 paramCount)
		{
			return ((::System::ValueTuple_2<::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimatorControllerStateEntry>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimatorControllerParamEntry>>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_ALLOCATECHUNK_OFFSET))(this, stateCount, paramCount);
		}

		::NPCCrowd::Animation::AnimatorControllerManager_ArchetypeData Allocate(::System::UInt32 archetype)
		{
			return ((::NPCCrowd::Animation::AnimatorControllerManager_ArchetypeData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_ALLOCATE_OFFSET))(this, archetype);
		}

		::System::ValueTuple_2<::UnityEngine::AnimatorOverrideController*, ::NPCCrowd::Animation::AnimatorControllerManager_ArchetypeData> New(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex)
		{
			return ((::System::ValueTuple_2<::UnityEngine::AnimatorOverrideController*, ::NPCCrowd::Animation::AnimatorControllerManager_ArchetypeData>(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_NEW_OFFSET))(this, instanceConfig, instanceIndex);
		}

		::System::ValueTuple_2<::UnityEngine::AnimatorOverrideController*, ::NPCCrowd::Animation::AnimatorControllerManager_ArchetypeData> FindOrAdd(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex)
		{
			return ((::System::ValueTuple_2<::UnityEngine::AnimatorOverrideController*, ::NPCCrowd::Animation::AnimatorControllerManager_ArchetypeData>(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_FINDORADD_OFFSET))(this, instanceConfig, instanceIndex);
		}

		static ::System::Boolean IsValidInstance(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instance, ::System::Int32 instanceIndex)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_ISVALIDINSTANCE_OFFSET))(instance, instanceIndex);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_DISPOSE_OFFSET))(this);
		}

		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry> GetInstanceParam(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex)
		{
			return ((::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerParamEntry>(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETINSTANCEPARAM_OFFSET))(this, instanceConfig, instanceIndex);
		}

		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry> GetInstanceState(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex)
		{
			return ((::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::AnimatorControllerStateEntry>(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETINSTANCESTATE_OFFSET))(this, instanceConfig, instanceIndex);
		}

		::UnityEngine::AnimatorOverrideController* GetInstanceController(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex)
		{
			return ((::UnityEngine::AnimatorOverrideController*(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORCONTROLLERMANAGER_GETINSTANCECONTROLLER_OFFSET))(this, instanceConfig, instanceIndex);
		}
	};
}
