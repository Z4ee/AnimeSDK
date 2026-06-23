#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView2D_1.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView_1.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/Foundation/StateMachine/Machine.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/Foundation/StateMachine/StateId.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_StateMachineArchetypeChunkData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedStateData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace Foundation::Adapter { template <typename T> class ChunkList2D_1; }
namespace Foundation::Adapter { template <typename T> class ChunkList_1; }
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationSharedData; }
namespace NPCCrowd::Animation { class ICPUAnimationLib; }
namespace NPCCrowd::Animation { class NPCAnimationLib_AvatarAnimatorCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_ADDADDITIONALANIMATION_OFFSET UNITYSDK_OFFSET(0xFDE8DB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_ADDSHAREDDATA_OFFSET UNITYSDK_OFFSET(0xFDE83E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_CHECKSHAREDSTATEDATA_OFFSET UNITYSDK_OFFSET(0xFDE9E60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET UNITYSDK_OFFSET(0xFDEA3D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_COLLECT_OFFSET UNITYSDK_OFFSET(0xFDEA4D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFDEA780)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_FINDORADDSHAREDDATA_OFFSET UNITYSDK_OFFSET(0xFDE81D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GETSHAREDDATA_OFFSET UNITYSDK_OFFSET(0xFDEA060)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GETSHAREDPARAMDATA_OFFSET UNITYSDK_OFFSET(0xFDEA2A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GETSHAREDSTATEDATA_OFFSET UNITYSDK_OFFSET(0xFDEA170)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0xFDE80E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_ISCHUNKVALID_OFFSET UNITYSDK_OFFSET(0xFDE8140)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xFDE7FD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_SHAREDDATAVIEW_OFFSET UNITYSDK_OFFSET(0xFDEA6F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_SHAREDSTATEDATAVIEW_OFFSET UNITYSDK_OFFSET(0xFDEA650)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0xFDEA530)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDE73F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineArchetypeData_TypeDefinitionIndex = 57384;

	class AnimationSubManager_StateMachineArchetypeData : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_NormalizedTimeHashs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_StateMachineArchetypeData_TypeDefinitionIndex)->GetStaticField(0x3D0F0);
		}
		// static const ::System::Int32 ChunkSizeBit = 0x4; // 0x0
		// static const ::System::String* NormalizedTimeLayer; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::StateMachine::ParameterId>* ParamLookupTable; // 0x10
		::Il2CppArray<::Foundation::Container::NativeVector_1<::System::IntPtr>>* _chunkData; // 0x18
		::Foundation::Adapter::ChunkList2D_1<::Foundation::StateMachine::Parameter>* _sharedParamData; // 0x20
		::Il2CppArray<::Foundation::StateMachine::StateId>* DefaultState; // 0x28
		::Foundation::Adapter::ChunkList2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>* _sharedStateData; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* StateLookupTable; // 0x38
		::Foundation::Adapter::ChunkList_1<::NPCCrowd::Animation::CPUStateMachine::SharedData>* _sharedData; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>* _instanceConfigs; // 0x48
		::NPCCrowd::Animation::AnimationControllerTemplateConfig* _templateConfig; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* _sharedDataMap; // 0x58
		::Foundation::Container::NativeVector_1<::System::Int32> _dimensions; // 0x60
		::Foundation::StateMachine::Machine MachineData; // 0x70
		::Foundation::Container::NativeVector_1<::Foundation::StateMachine::ParameterId> NormalizedTimeIds; // 0x128
		::Foundation::Container::NativeVector_1<::System::Int32> _count; // 0x138

		::System::Void _ctor(::NPCCrowd::Animation::AnimationControllerTemplateConfig* templateConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerTemplateConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA__CTOR_OFFSET))(this, templateConfig);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsChunkValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_ISCHUNKVALID_OFFSET))(this);
		}

		::System::Int32 FindOrAddSharedData(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData* sharedData)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_FINDORADDSHAREDDATA_OFFSET))(this, instanceConfig, instanceIndex, sharedData);
		}

		::System::Boolean AddAdditionalAnimation(::Il2CppArray<::System::Int32>* additionalData, ::System::Boolean isLibValid, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache* cache, ::NPCCrowd::Animation::ICPUAnimationLib* animationLib, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData* sharedData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::NPCCrowd::Animation::NPCAnimationLib_AvatarAnimatorCache*, ::NPCCrowd::Animation::ICPUAnimationLib*, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_ADDADDITIONALANIMATION_OFFSET))(this, additionalData, isLibValid, cache, animationLib, sharedData);
		}

		::System::Int32 AddSharedData(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData* sharedData)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_ADDSHAREDDATA_OFFSET))(this, instanceConfig, instanceIndex, sharedData);
		}

		::System::Void CheckSharedStateData(::System::Int32 index, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_CHECKSHAREDSTATEDATA_OFFSET))(this, index, data);
		}

		::NPCCrowd::Animation::CPUStateMachine::SharedData GetSharedData(::System::Int32 sharedIndex)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::SharedData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GETSHAREDDATA_OFFSET))(this, sharedIndex);
		}

		::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> GetSharedStateData(::System::Int32 sharedIndex)
		{
			return ((::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GETSHAREDSTATEDATA_OFFSET))(this, sharedIndex);
		}

		::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter> GetSharedParamData(::System::Int32 sharedIndex)
		{
			return ((::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GETSHAREDPARAMDATA_OFFSET))(this, sharedIndex);
		}

		::System::Void ClearCollectData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_CLEARCOLLECTDATA_OFFSET))(this);
		}

		::System::Boolean Collect(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_COLLECT_OFFSET))(this, data);
		}

		::System::Void PostCollect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_POSTCOLLECT_OFFSET))(this);
		}

		::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> get_SharedStateDataView()
		{
			return ((::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_SHAREDSTATEDATAVIEW_OFFSET))(this);
		}

		::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData> get_SharedDataView()
		{
			return ((::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_GET_SHAREDDATAVIEW_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEARCHETYPEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
