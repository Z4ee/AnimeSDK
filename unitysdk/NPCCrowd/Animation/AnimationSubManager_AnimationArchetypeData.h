#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingMotionTarget.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_IKControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationBoneDeltaData16.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationCacheAdditionalData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationInstanceData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/NPCCrowd/Animation/BlendShapeSampleData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/InstanceEntityData.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickLayerData.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_3_F2DAD7F45F518868;
namespace Foundation::Adapter { template <typename T> class ChunkList2D_1; }
namespace Foundation::Adapter { template <typename T> class ChunkList_1; }
namespace Foundation::Adapter { template <typename T> class ManagedChunkList_1; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager_StateMachineArchetypeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTAVATARARCHETYPEDATA_OFFSET UNITYSDK_OFFSET(0x8C31EC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTCOUNT_OFFSET UNITYSDK_OFFSET(0x8C30C00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTMONTAGEARCHETYPEDATA_OFFSET UNITYSDK_OFFSET(0x8C30E80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTSTATEMACHINEARCHETYPEDATA_OFFSET UNITYSDK_OFFSET(0x8C2FB10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C2D6E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_FREE_OFFSET UNITYSDK_OFFSET(0x8C2F3E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GETREDIRECTVALUE_OFFSET UNITYSDK_OFFSET(0x8C36980)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GET_INSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x8C2BF00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8C2DBD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GET_VISIBLEINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x8C2BF20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_ISSAMELENGTH_OFFSET UNITYSDK_OFFSET(0x8C31E00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_NEWINSTANCE_OFFSET UNITYSDK_OFFSET(0x8C2DF80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x8C31D30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_SET_INSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x8C2BF10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_SET_VISIBLEINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x8C2BF30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C2BF40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationArchetypeData_TypeDefinitionIndex = 57398;

	class AnimationSubManager_AnimationArchetypeData : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChunkSize = 0x10; // 0x0
		// static const ::System::Int32 ChunkSizeBit = 0x4; // 0x0
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData>* _inertializationInstances; // 0x10
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData>* AdjustmentBlendingControlData; // 0x18
		::Foundation::Adapter::ChunkList2D_1<::Foundation::StateMachine::Parameter>* Params; // 0x20
		::Foundation::Adapter::ChunkList2D_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationBoneDeltaData16>* _inertializationDelta; // 0x28
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer>* States; // 0x30
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>* TickData; // 0x38
		::Foundation::Adapter::ChunkList2D_1<::System::Single>* BlendShapeValues; // 0x40
		::Foundation::Adapter::ChunkList2D_1<::UnityEngine::NapTransformData>* _inertializationPose1; // 0x48
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::BlendShapeSampleData>* BlendShapeData; // 0x50
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_IKControlData>* _ikControlData; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* SlopeSpeedScaleLookupTable; // 0x60
		::Foundation::Adapter::ChunkList2D_1<::UnityEngine::NapTransformData>* BoneAdjustIkDrivenPoseList; // 0x68
		::Foundation::Adapter::ChunkList_1<::System::Boolean>* BoneAdjustEnabledList; // 0x70
		::Foundation::Adapter::ChunkList_1<::System::UInt32>* Instances; // 0x78
		::Foundation::Adapter::ManagedChunkList_1<::Class_3_F2DAD7F45F518868*>* NpcComponents; // 0x80
		::Foundation::Adapter::ChunkList2D_1<::UnityEngine::Quaternion>* BoneAdjustMasterBoneAnimRotList; // 0x88
		::Foundation::Adapter::ChunkList_1<::UnityEngine::NapTransformData>* Transforms; // 0x90
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData>* AdjustmentBlendingTickData; // 0x98
		::Foundation::Adapter::ChunkList2D_1<::System::Int32>* BlendShapeCurves; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::StateMachine::ParameterId>* ParamLookupTable; // 0xA8
		::Foundation::Adapter::ChunkList_1<::UnityEngine::NapTransformData>* RootMotions; // 0xB0
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_MotionControlData>* MotionControlDatas; // 0xB8
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData>* _inertializationAdditional1; // 0xC0
		::Foundation::Adapter::ChunkList2D_1<::UnityEngine::NapTransformData>* Bones; // 0xC8
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::MontageTickLayerData>* MontageData; // 0xD0
		::Foundation::Adapter::ChunkList2D_1<::UnityEngine::NapTransformData>* _inertializationPose2; // 0xD8
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>* ClipData; // 0xE0
		::Foundation::Adapter::ChunkList2D_1<::UnityEngine::NapTransformData>* BoneAdjustAnimDrivenPoseList; // 0xE8
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_FootStepControlData>* FootStepControlDataList; // 0xF0
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget>* AdjustmentBlendingWarpingTarget; // 0xF8
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData>* _inertializationAdditional2; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _redirectMap; // 0x108
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Lod::ELODLevel>* EntityLODs; // 0x110
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest>* _inertializationRequest; // 0x118
		::System::Int32 _InstanceCount_k__BackingField; // 0x120
		::System::Int32 _VisibleInstanceCount_k__BackingField; // 0x124

		::System::Void _ctor(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::System::Int32 boneCount, ::System::Int32 blendShapeCount, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::StateMachine::ParameterId>* paramLookUpTable, ::System::Int32 boneAdjustMasterBoneCount, ::System::Int32 boneAdjustDrivenBoneCount)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::StateMachine::ParameterId>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA__CTOR_OFFSET))(this, config, boneCount, blendShapeCount, paramLookUpTable, boneAdjustMasterBoneCount, boneAdjustDrivenBoneCount);
		}

		::System::Int32 get_InstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GET_INSTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_InstanceCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_SET_INSTANCECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_VisibleInstanceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GET_VISIBLEINSTANCECOUNT_OFFSET))(this);
		}

		::System::Void set_VisibleInstanceCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_SET_VISIBLEINSTANCECOUNT_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Int32 NewInstance(::System::Collections::Generic::List_1<::NPCCrowd::Animation::InstanceEntityData>* instanceIds, ::System::Int32 sharedIndex, ::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData* stateMachine)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::InstanceEntityData>*, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_NEWINSTANCE_OFFSET))(this, instanceIds, sharedIndex, stateMachine);
		}

		::System::Void Free(::System::Collections::Generic::List_1<::System::UInt32>* instanceIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_FREE_OFFSET))(this, instanceIds);
		}

		::System::Boolean CollectStateMachineArchetypeData(::Foundation::Container::NativeVector_1<::System::Int32>& count, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* chunkData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Container::NativeVector_1<::System::Int32>&, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTSTATEMACHINEARCHETYPEDATA_OFFSET))(this, count, chunkData);
		}

		::System::Boolean CollectMontageArchetypeData(::Foundation::Container::NativeVector_1<::System::Int32>& count, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* chunkData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Container::NativeVector_1<::System::Int32>&, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTMONTAGEARCHETYPEDATA_OFFSET))(this, count, chunkData);
		}

		::System::Void RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_REFRESHVISIBLE_OFFSET))(this);
		}

		static ::System::Boolean IsSameLength(::Foundation::Container::NativeVector_1<::System::Int32> count, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* chunkData)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeVector_1<::System::Int32>, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_ISSAMELENGTH_OFFSET))(count, chunkData);
		}

		::System::Boolean CollectAvatarArchetypeData(::System::Int32 frameCount, ::Foundation::Container::NativeVector_1<::System::Int32>& count, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* chunkData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Container::NativeVector_1<::System::Int32>&, ::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTAVATARARCHETYPEDATA_OFFSET))(this, frameCount, count, chunkData);
		}

		::System::Void CollectCount(::Foundation::Container::NativeVector_1<::System::Int32>& count)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeVector_1<::System::Int32>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_COLLECTCOUNT_OFFSET))(this, count);
		}

		::System::Boolean GetRedirectValue(::System::UInt32 entityID, ::System::Int32& idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONARCHETYPEDATA_GETREDIRECTVALUE_OFFSET))(this, entityID, idx);
		}
	};
}
