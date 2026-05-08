#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Accessories/NPCUnionAnimatorManager_CompositeKey.h"
#include "unitysdk/NPCCrowd/Accessories/NPCUnionAnimatorManager_NPCAnimationStateParams.h"
#include "unitysdk/NPCCrowd/Animation/MontageTransitionConfig.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationControllerTemplateConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationTransitionConfigAssetSO; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_1_OFFSET UNITYSDK_OFFSET(0x11B1DEB0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x11B1C550)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ADDMONTAGESHAREDDATA_OFFSET UNITYSDK_OFFSET(0x11B1C450)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPARESTATEHASH_OFFSET UNITYSDK_OFFSET(0x11B1F400)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_CREATEUNIONANIMATOR_OFFSET UNITYSDK_OFFSET(0x11B1E520)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_FREEANIMATIONSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x11B1E2B0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETDEFAULTTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x11B1C230)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETDRIVENBYSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x11B1D560)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETINSTANCECONFIG_OFFSET UNITYSDK_OFFSET(0x11B1DAF0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETMONTAGESTARTIDX_OFFSET UNITYSDK_OFFSET(0x11B1C4D0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETMONTAGETRANSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x11B1BFA0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETSTATEMACHINETRANSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x11B1C020)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x11B1C940)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x11B1C0B0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x11B1B210)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x11B1C280)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11B1EC20)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ONANIMATIONINIT_OFFSET UNITYSDK_OFFSET(0x11B1E9B0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11B1EDB0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x11B1B4C0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x11B1E3E0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x11B1B390)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x11B1E370)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_REGISTERCUSTOMIDLEENTITY_OFFSET UNITYSDK_OFFSET(0x11B1E310)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_RELEASEUNIONANIMATOR_OFFSET UNITYSDK_OFFSET(0x11B1EA70)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERBOOL_OFFSET UNITYSDK_OFFSET(0x11B1F0B0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERFLOAT_OFFSET UNITYSDK_OFFSET(0x11B1F250)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERINT_OFFSET UNITYSDK_OFFSET(0x11B1F180)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERTRIGGER_OFFSET UNITYSDK_OFFSET(0x11B1F330)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B1E480)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B1F500)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x11B1F470)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x11B1F740)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11B1F7D0)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11B1F870)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x11B1F900)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x11B1F990)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x11B1FA30)
#define NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B1FAD0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_TypeDefinitionIndex = 80913;

	class NPCUnionAnimatorManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_TransitionConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0x32DE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Accessories::NPCUnionAnimatorManager_NPCAnimationStateParams, ::System::Int32>** StaticGet_StateParam2Hash()
		{
			return (::System::Collections::Generic::Dictionary_2<::NPCCrowd::Accessories::NPCUnionAnimatorManager_NPCAnimationStateParams, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0x32DE8);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__transitionConfigAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0x32DF0);
		}
		static ::System::Nullable_1<::System::Int32>* StaticGet_DebugEntityId()
		{
			return (::System::Nullable_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xC650);
		}
		static ::System::Single* StaticGet_DebugTurnAroundAngle()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xC658);
		}
		static ::Unity::Collections::NativeHashMap_2<::NPCCrowd::Accessories::NPCUnionAnimatorManager_CompositeKey, ::System::Single>* StaticGet_trantitionMap()
		{
			return (::Unity::Collections::NativeHashMap_2<::NPCCrowd::Accessories::NPCUnionAnimatorManager_CompositeKey, ::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xC660);
		}
		static ::System::Int32* StaticGet_DebugWalkingStairsType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xC670);
		}
		static ::System::Boolean* StaticGet_DebugIsMoving()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xC674);
		}
		static ::System::Boolean* StaticGet_DebugTriggerTurnAround()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCUnionAnimatorManager_TypeDefinitionIndex)->GetStaticField(0xC675);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_3<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Int32>>* _configCache; // 0x18
		::NPCCrowd::Animation::AnimationTransitionConfigAssetSO* _transitionConfigSO; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCUnionAnimator*>* _animators; // 0x28
		::NPCCrowd::Animation::AnimationSubManager* _subManager; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Accessories::NPCUnionAnimatorManager* Get()
		{
			return ((::NPCCrowd::Accessories::NPCUnionAnimatorManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GET_OFFSET))();
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::NPCCrowd::Animation::MontageTransitionConfig GetMontageTransitionConfig()
		{
			return ((::NPCCrowd::Animation::MontageTransitionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETMONTAGETRANSITIONCONFIG_OFFSET))(this);
		}

		::Unity::Collections::NativeHashMap_2<::NPCCrowd::Accessories::NPCUnionAnimatorManager_CompositeKey, ::System::Single> GetStateMachineTransitionConfig()
		{
			return ((::Unity::Collections::NativeHashMap_2<::NPCCrowd::Accessories::NPCUnionAnimatorManager_CompositeKey, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETSTATEMACHINETRANSITIONCONFIG_OFFSET))(this);
		}

		::System::Single GetTransitionTime(::System::Int32 fromAnim, ::System::Int32 toAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETTRANSITIONTIME_OFFSET))(this, fromAnim, toAnim);
		}

		::System::Single GetDefaultTransitionTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETDEFAULTTRANSITIONTIME_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_INIT_OFFSET))(this);
		}

		::System::Void AddMontageSharedData(::System::Int32 montageKey, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Boolean& addedClip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ADDMONTAGESHAREDDATA_OFFSET))(this, montageKey, instanceConfig, addedClip);
		}

		::System::Boolean GetMontageStartIdx(::System::Int32 montageKey, ::System::Int32 layer, ::System::Int32& startIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETMONTAGESTARTIDX_OFFSET))(this, montageKey, layer, startIdx);
		}

		::System::Void AddAnimationStateMachine(::System::UInt32 entityId, ::Class_3_F2DAD7F45F518868* npcComponent, ::NPCCrowd::Animation::AnimationControllerInstanceConfig* instanceConfig, ::System::Int32 instanceIndex, ::System::Boolean useStateMachine, ::System::Boolean useMontage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_OFFSET))(this, entityId, npcComponent, instanceConfig, instanceIndex, useStateMachine, useMontage);
		}

		::System::ValueTuple_3<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Int32> GetStateMachine(::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>* configs, ::System::Int32 animationId)
		{
			return ((::System::ValueTuple_3<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::AnimationControllerTemplateConfig*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationControllerInstanceConfig*>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETSTATEMACHINE_OFFSET))(this, configs, animationId);
		}

		::System::Boolean GetDrivenByStateMachine(::Class_3_F2DAD7F45F518868* npcComponent, ::System::Int32 animationId, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*& instanceConfig, ::System::Int32& instanceIndex, ::System::Int32& stateIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Int32, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETDRIVENBYSTATEMACHINE_OFFSET))(this, npcComponent, animationId, instanceConfig, instanceIndex, stateIndex);
		}

		::System::Boolean GetInstanceConfig(::Class_3_F2DAD7F45F518868* npcComponent, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*& instanceConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_GETINSTANCECONFIG_OFFSET))(this, npcComponent, instanceConfig);
		}

		::System::Boolean AddAnimationStateMachine_1(::System::UInt32 entityId, ::Class_3_F2DAD7F45F518868* npcComponent, ::System::Int32 animationId, ::System::Boolean initOnlyForIdleState, ::System::Boolean useStateMachine, ::System::Boolean useMontage, ::System::Int32 instanceIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_3_F2DAD7F45F518868*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ADDANIMATIONSTATEMACHINE_1_OFFSET))(this, entityId, npcComponent, animationId, initOnlyForIdleState, useStateMachine, useMontage, instanceIdx);
		}

		::System::Void FreeAnimationStateMachine(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_FREEANIMATIONSTATEMACHINE_OFFSET))(this, entityId);
		}

		::System::Void RegisterCustomIdleEntity(::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_REGISTERCUSTOMIDLEENTITY_OFFSET))(this, npcComponent);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::Animation::NPCUnionAnimator* CreateUnionAnimator(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::NPCCrowd::Animation::NPCUnionAnimator*(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_CREATEUNIONANIMATOR_OFFSET))(this, npcComp);
		}

		::System::Boolean OnAnimationInit(::Class_3_F2DAD7F45F518868* npcComponent, ::System::Int32 animationId, ::System::Boolean initOnlyForIdleState, ::System::Boolean useStateMachine, ::System::Boolean useMontage, ::System::Int32 instanceIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ONANIMATIONINIT_OFFSET))(this, npcComponent, animationId, initOnlyForIdleState, useStateMachine, useMontage, instanceIdx);
		}

		::System::Void ReleaseUnionAnimator(::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_RELEASEUNIONANIMATOR_OFFSET))(this, npcComponent);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean SetControllerParameterBool(::System::UInt32 entityID, ::System::Int32 stateHash, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERBOOL_OFFSET))(this, entityID, stateHash, value);
		}

		::System::Boolean SetControllerParameterInt(::System::UInt32 entityID, ::System::Int32 stateHash, ::System::Int32 value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERINT_OFFSET))(this, entityID, stateHash, value);
		}

		::System::Boolean SetControllerParameterFloat(::System::UInt32 entityID, ::System::Int32 stateHash, ::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERFLOAT_OFFSET))(this, entityID, stateHash, value);
		}

		::System::Boolean SetControllerParameterTrigger(::System::UInt32 entityID, ::System::Int32 stateHash)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_SETCONTROLLERPARAMETERTRIGGER_OFFSET))(this, entityID, stateHash);
		}

		::System::Boolean CompareStateHash(::System::UInt32 entityID, ::System::Int32 stateHash)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER_COMPARESTATEHASH_OFFSET))(this, entityID, stateHash);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PostUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_POSTUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCUNIONANIMATORMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
