#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/NPCCrowd/Animation/AnimationArchetypeKey.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_DependencyHelper_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_IndexData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class AnimationSubManagerConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationScheduler; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationSharedData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_IAnimationProcessor; }
namespace NPCCrowd::Animation { class AnimationSubManager_MontageArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_SpawnInstanceProcessor; }
namespace NPCCrowd::Animation { class AnimationSubManager_StateMachineArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_UnSpawnInstanceProcessor; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Avatar; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADDMONTAGESHAREDDATA_OFFSET UNITYSDK_OFFSET(0x106456B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADDMONTAGE_OFFSET UNITYSDK_OFFSET(0x10645400)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x10647A70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COMPARESTATEHASH_OFFSET UNITYSDK_OFFSET(0x10648480)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_CREATEPROCESSORSFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x10644C90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_CREATEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x10644D20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10646FC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ENTITYANIMATIONREADY_OFFSET UNITYSDK_OFFSET(0x10647ED0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FINDORADDANIMATION_OFFSET UNITYSDK_OFFSET(0x106465D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FINDORADDAVATAR_OFFSET UNITYSDK_OFFSET(0x10646250)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FINDORADDSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x106450B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FREE_OFFSET UNITYSDK_OFFSET(0x106479D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_GETMONTAGESTARTIDX_OFFSET UNITYSDK_OFFSET(0x10646040)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x10647FE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_GET_ENABLEFOOTIKGLOBAL_OFFSET UNITYSDK_OFFSET(0x10648750)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INITIALIZEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x10644AB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10647C40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ISVALIDINSTANCE_OFFSET UNITYSDK_OFFSET(0x10647860)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10647E10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x10647DA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x10647CA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERBOOL_OFFSET UNITYSDK_OFFSET(0x10647F30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERFLOAT_OFFSET UNITYSDK_OFFSET(0x10648330)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERINT_OFFSET UNITYSDK_OFFSET(0x10648290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERTRIGGER_OFFSET UNITYSDK_OFFSET(0x106483E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SET_ENABLEFOOTIKGLOBAL_OFFSET UNITYSDK_OFFSET(0x106487B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x10646F40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10647D30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10648CD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10648830)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_TypeDefinitionIndex = 88231;

	class AnimationSubManager : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_DownStairVelocityScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_TypeDefinitionIndex)->GetStaticField(0x10DD0);
		}
		static ::System::UInt32* StaticGet_debugEntityId()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_TypeDefinitionIndex)->GetStaticField(0x10DD4);
		}
		static ::System::Single* StaticGet_DebugWarpingDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_TypeDefinitionIndex)->GetStaticField(0x10DD8);
		}
		static ::System::Single* StaticGet_UpStairVelocityScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_TypeDefinitionIndex)->GetStaticField(0x10DDC);
		}
		static ::System::Boolean* StaticGet_BoneAdjustRecordDebugDataEnd()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_TypeDefinitionIndex)->GetStaticField(0x10DE0);
		}
		static ::System::Boolean* StaticGet_DebugApplyPoseWarping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_TypeDefinitionIndex)->GetStaticField(0x10DE1);
		}
		// static const ::System::UInt16 InvalidArchetypeIndex = 0xFFFF; // 0x0
		// static const ::System::Int32 MaxArchetypeNum = 0xFFFF; // 0x0
		// static const ::Unity::Collections::Allocator JobTempAllocator; // 0x0
		// static const ::System::Int32 CurveBufferCapacity = 0x2C; // 0x0
		// static const ::System::Single DefaultStateTransitionBlendingTime; // 0x0
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::UInt16>* _stateMachineArchetypeLookupTable; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>* _avatars; // 0x18
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationArchetypeKey, ::NPCCrowd::Animation::AnimationSubManager_IndexData>* _animationArchetypeLookupTable; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData*>* _stateMachines; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_MontageArchetypeData*>* _montages; // 0x30
		::NPCCrowd::Animation::AnimationSubManager_SpawnInstanceProcessor* _spawnProcessor; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Avatar*, ::System::UInt16>* _avatarArchetypeLookUpTable; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_IndexData>* _instanceLookupTable; // 0x48
		::NPCCrowd::Animation::AnimationSubManager_UnSpawnInstanceProcessor* _unSpawnProcessor; // 0x50
		::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData* _sharedData; // 0x58
		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler* _scheduler; // 0x60
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*>* _animations; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>* _processors; // 0x70
		::System::Int32 _totalStateMachineChunkCount; // 0x78
		::System::Int32 _totalChunkCount; // 0x7C
		::System::Single _deltaTime; // 0x80
		::System::Int32 _frameCount; // 0x84
		::System::Double _timestamp; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER__CCTOR_OFFSET))();
		}

		::System::Void InitializeProcessors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INITIALIZEPROCESSORS_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>* CreateProcessorsFromConfig(::NPCCrowd::Animation::AnimationSubManager* manager, ::NPCCrowd::Animation::AnimationSubManagerConfig* config)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>*(*)(::NPCCrowd::Animation::AnimationSubManager*, ::NPCCrowd::Animation::AnimationSubManagerConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_CREATEPROCESSORSFROMCONFIG_OFFSET))(manager, config);
		}

		::System::Void CreateProcessors(::NPCCrowd::Animation::AnimationSubManagerConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManagerConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_CREATEPROCESSORS_OFFSET))(this, config);
		}

		::System::UInt16 FindOrAddStateMachine(::NPCCrowd::Animation::AnimationControllerTemplateConfig* config)
		{
			return ((::System::UInt16(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerTemplateConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FINDORADDSTATEMACHINE_OFFSET))(this, config);
		}

		::System::Void AddMontage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADDMONTAGE_OFFSET))(this);
		}

		::System::Void AddMontageSharedData(::System::Int32 montageKey, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Boolean& addedClip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADDMONTAGESHAREDDATA_OFFSET))(this, montageKey, instanceConfig, addedClip);
		}

		::System::Boolean GetMontageStartIdx(::System::Int32 montageKey, ::System::Int32 layer, ::System::Int32& startIdx, ::System::Int32 montageIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_GETMONTAGESTARTIDX_OFFSET))(this, montageKey, layer, startIdx, montageIdx);
		}

		::System::UInt16 FindOrAddAvatar(::UnityEngine::Avatar* avatar, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::ENPCAvatarGender gender, ::ENPCAvatarSize size)
		{
			return ((::System::UInt16(*)(::PVOID, ::UnityEngine::Avatar*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FINDORADDAVATAR_OFFSET))(this, avatar, config, gender, size);
		}

		::NPCCrowd::Animation::AnimationSubManager_IndexData FindOrAddAnimation(::NPCCrowd::Animation::AnimationArchetypeKey archetypeKey, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>* avatars)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_IndexData(*)(::PVOID, ::NPCCrowd::Animation::AnimationArchetypeKey, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FINDORADDANIMATION_OFFSET))(this, archetypeKey, avatars);
		}

		::System::Void UpdateFrame(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UPDATEFRAME_OFFSET))(this, deltaTime);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean IsValidInstance(::NPCCrowd::Animation::AnimationControllerInstanceConfig* instance, ::System::Int32 instanceIndex)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ISVALIDINSTANCE_OFFSET))(instance, instanceIndex);
		}

		::System::Void Free(::System::UInt32 instanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FREE_OFFSET))(this, instanceId);
		}

		::System::Boolean Allocate(::System::UInt32 instanceId, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* config, ::System::Int32 instanceIndex, ::Class_3_F2DAD7F45F518868* managedComponent, ::System::Boolean useStateMachine, ::System::Boolean useMontage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::Class_3_F2DAD7F45F518868*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ALLOCATE_OFFSET))(this, instanceId, config, instanceIndex, managedComponent, useStateMachine, useMontage);
		}

		::System::Void Initialize(::NPCCrowd::Animation::AnimationSubManagerConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManagerConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INITIALIZE_OFFSET))(this, config);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean EntityAnimationReady(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ENTITYANIMATIONREADY_OFFSET))(this, entityID);
		}

		::System::Boolean SetControllerParameterBool(::System::UInt32 entityID, ::System::Int32 paramHash, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERBOOL_OFFSET))(this, entityID, paramHash, value);
		}

		::System::Boolean SetControllerParameterInt(::System::UInt32 entityID, ::System::Int32 paramHash, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERINT_OFFSET))(this, entityID, paramHash, value);
		}

		::System::Boolean SetControllerParameterFloat(::System::UInt32 entityID, ::System::Int32 paramHash, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERFLOAT_OFFSET))(this, entityID, paramHash, value);
		}

		::System::Boolean SetControllerParameterTrigger(::System::UInt32 entityID, ::System::Int32 paramHash)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SETCONTROLLERPARAMETERTRIGGER_OFFSET))(this, entityID, paramHash);
		}

		::System::Boolean GetParameter(::System::UInt32 entityID, ::System::Int32 paramHash, ::Foundation::StateMachine::ParameterId& paramID, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>& parameter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Foundation::StateMachine::ParameterId&, ::Unity::Collections::NativeSlice_1<::Foundation::StateMachine::Parameter>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_GETPARAMETER_OFFSET))(this, entityID, paramHash, paramID, parameter);
		}

		::System::Boolean CompareStateHash(::System::UInt32 entityID, ::System::Int32 stateHash, ::System::Int32 layerIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COMPARESTATEHASH_OFFSET))(this, entityID, stateHash, layerIdx);
		}

		static ::System::Boolean get_EnableFootIkGlobal()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_GET_ENABLEFOOTIKGLOBAL_OFFSET))();
		}

		static ::System::Void set_EnableFootIkGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SET_ENABLEFOOTIKGLOBAL_OFFSET))(value);
		}
	};
}
