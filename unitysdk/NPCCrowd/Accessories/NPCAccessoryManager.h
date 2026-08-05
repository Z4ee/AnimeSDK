#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryManager_AccessoryRenderState.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryManager___c__DisplayClass13_0.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

class Class_3_FFD0045B4597F294;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace NPCCrowd { class NPCGoPool; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDCROSSFADE_OFFSET UNITYSDK_OFFSET(0xE55E210)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDSHOW_OFFSET UNITYSDK_OFFSET(0xE55E2D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYUSESIMPLEASSET_OFFSET UNITYSDK_OFFSET(0xE55E1B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORYGO_OFFSET UNITYSDK_OFFSET(0xE560450)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORY_OFFSET UNITYSDK_OFFSET(0xE55FFF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORYGO_OFFSET UNITYSDK_OFFSET(0xE5609D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORY_OFFSET UNITYSDK_OFFSET(0xE5607E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETACCESSORYRENDERSTATE_OFFSET UNITYSDK_OFFSET(0xE55DD90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETOWNERLODRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0xE55B2C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETRENDERERBYRENDERSTATE_OFFSET UNITYSDK_OFFSET(0xE55F4E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xE55A280)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INITFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0xE55C450)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xE55A400)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE55A7A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE55B170)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLERDEVICEWHEEL_OFFSET UNITYSDK_OFFSET(0xE55CCA0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLER_OFFSET UNITYSDK_OFFSET(0xE55C270)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTSETLOD_OFFSET UNITYSDK_OFFSET(0xE55E750)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHDITHERTASK_OFFSET UNITYSDK_OFFSET(0xE55FC90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RELEASEACCESSORYASSETS_OFFSET UNITYSDK_OFFSET(0xE560B50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEACCESSORYCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xE560C60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETACCESSORYHIDDEN_OFFSET UNITYSDK_OFFSET(0xE55B240)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETLODASSET_OFFSET UNITYSDK_OFFSET(0xE55E620)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_1_OFFSET UNITYSDK_OFFSET(0xE55F160)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_OFFSET UNITYSDK_OFFSET(0xE55F000)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STOPFADE_OFFSET UNITYSDK_OFFSET(0xE55F950)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYSETSEQFRAMEKEYLODPLAYBACK_OFFSET UNITYSDK_OFFSET(0xE55EC80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYATTACH_OFFSET UNITYSDK_OFFSET(0xE55A800)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0xE55B390)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATESHOWSTATUSBYANIMID_OFFSET UNITYSDK_OFFSET(0xE55BE50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE55A740)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE562060)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE562050)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__STARTFADE_G__STARTFADEANDRELEASE_29_0_OFFSET UNITYSDK_OFFSET(0xE55F8C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__UPDATEACCESSORYATTACH_G__SETGPUANIMATIONINSTANCEID_13_0_OFFSET UNITYSDK_OFFSET(0xE55BC30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xE562140)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE5621D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE562270)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE562300)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_TypeDefinitionIndex = 82937;

	class NPCAccessoryManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x37630);
		}
		static ::System::String** StaticGet_NpcAccessoryGoName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x37638);
		}
		static ::System::String** StaticGet_NpcAccessorySkinGoName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x37640);
		}
		// static const ::System::Int32 MaxPoolNum = 0x32; // 0x0
		::NPCCrowd::NPCGoPool* _accNoSkinGoPool; // 0x18
		::NPCCrowd::NPCGoPool* _accSkinnedRootGoPool; // 0x20
		::NPCCrowd::CrowdTickControlInstance* LateUpdateControl; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories; // 0x30
		::NPCCrowd::NPCGoPool* _accSkinnedChildGoPool; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Accessories::NPCAccessoryManager* Get()
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ONDESTROY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid SetAccessoryHidden(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Boolean bIsHidden)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETACCESSORYHIDDEN_OFFSET))(this, acc, bIsHidden);
		}

		::System::Void UpdateAccessoryAttach(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYATTACH_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateFollowPos(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEFOLLOWPOS_OFFSET))(this, acc, deltaTime);
		}

		::System::Void InitFollowPos(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INITFOLLOWPOS_OFFSET))(this, acc);
		}

		static ::System::Void PostFollowTransHandler(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Single deltaTime, ::NPCCrowd::Ability::FTransformFragment& localPrs, ::NPCCrowd::Ability::FTransformFragment& worldPrs)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Single, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLER_OFFSET))(acc, deltaTime, localPrs, worldPrs);
		}

		static ::System::Void PostFollowTransHandlerDeviceWheel(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Single deltaTime, ::NPCCrowd::Ability::FTransformFragment& localPrs, ::NPCCrowd::Ability::FTransformFragment& worldPrs)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Single, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLERDEVICEWHEEL_OFFSET))(acc, deltaTime, localPrs, worldPrs);
		}

		::System::Void UpdateShowStatusByAnimID(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATESHOWSTATUSBYANIMID_OFFSET))(this, acc);
		}

		static ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState GetAccessoryRenderState(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETACCESSORYRENDERSTATE_OFFSET))(acc, lod, ownerLodRuntimeData);
		}

		static ::System::Boolean AccessoryNeedCrossFade(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDCROSSFADE_OFFSET))(acc, oldLod, lod, ownerLodRuntimeData);
		}

		static ::System::Boolean AccessoryUseSimpleAsset(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYUSESIMPLEASSET_OFFSET))(acc);
		}

		static ::System::Boolean AccessoryNeedShow(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel lod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDSHOW_OFFSET))(acc, lod, ownerLodRuntimeData);
		}

		static ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* GetOwnerLodRuntimeData(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodRuntimeData*(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETOWNERLODRUNTIMEDATA_OFFSET))(acc);
		}

		static ::System::Void SetLODAsset(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel newLod, ::System::Boolean forceSet, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState reserveState, ::NPCCrowd::Lod::ELODLevel reserveLod, ::System::Boolean deactivateSimpleGoImmediately)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETLODASSET_OFFSET))(acc, newLod, forceSet, ownerLodRuntimeData, reserveState, reserveLod, deactivateSimpleGoImmediately);
		}

		static ::System::Void PostSetLOD(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel newLod, ::NPCCrowd::Lod::ELODLevel oldLod, ::System::Boolean ownerAvatarUseGpuLod, ::System::Boolean forceSet, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::System::Boolean, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTSETLOD_OFFSET))(acc, newLod, oldLod, ownerAvatarUseGpuLod, forceSet, ownerLodRuntimeData);
		}

		static ::System::Void TrySetSeqFrameKeyLodPlayback(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel effectiveAccessoryLod, ::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* ownerLodRuntimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_TRYSETSEQFRAMEKEYLODPLAYBACK_OFFSET))(acc, effectiveAccessoryLod, oldLod, ownerLodRuntimeData);
		}

		static ::Cysharp::Threading::Tasks::UniTask StartFade(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Boolean bFadein, ::Class_3_FFD0045B4597F294* materialComponent, ::System::Boolean forceSet)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean, ::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_OFFSET))(acc, bFadein, materialComponent, forceSet);
		}

		static ::Cysharp::Threading::Tasks::UniTask StartFade_1(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState state, ::System::Boolean bFadein, ::Class_3_FFD0045B4597F294* materialComponent, ::System::Boolean forceSet)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState, ::System::Boolean, ::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_1_OFFSET))(acc, state, bFadein, materialComponent, forceSet);
		}

		static ::System::Void StopFade(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STOPFADE_OFFSET))(acc);
		}

		static ::System::Void RefreshDitherTask(::NPCCrowd::Accessories::NPCAccessory* acc, ::Class_3_FFD0045B4597F294* materialComponent, ::System::Boolean fadeIn, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::Class_3_FFD0045B4597F294*, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHDITHERTASK_OFFSET))(acc, materialComponent, fadeIn, unionAnimator);
		}

		static ::UnityEngine::Renderer* GetRendererByRenderState(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState state)
		{
			return ((::UnityEngine::Renderer*(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::NPCAccessoryManager_AccessoryRenderState))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GETRENDERERBYRENDERSTATE_OFFSET))(acc, state);
		}

		::NPCCrowd::Accessories::NPCAccessory* CreateAccessory(::FNpcAvatarGenericParams_AccessoryInfo accessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* avatarAss, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshAss, ::UnityEngine::GameObject* avatarGo, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::NPCCrowd::Accessories::NPCAccessory*(*)(::PVOID, ::FNpcAvatarGenericParams_AccessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*, ::UnityEngine::GameObject*, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORY_OFFSET))(this, accessoryInfo, cpInfo, avatarAss, meshAss, avatarGo, unionAnimator);
		}

		::UnityEngine::GameObject* CreateAccessoryGo(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::UnityEngine::Transform* parentTransform, ::System::Boolean hasAnimation, ::System::Int32 accessoryID, ::System::String* accessoryKey)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORYGO_OFFSET))(this, cpInfo, parentTransform, hasAnimation, accessoryID, accessoryKey);
		}

		::System::Void DestroyAccessory(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORY_OFFSET))(this, accessory);
		}

		::System::Void DestroyAccessoryGo(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::System::Boolean hasAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORYGO_OFFSET))(this, cpInfo, hasAnimation);
		}

		static ::System::Void RemoveAccessoryComponents(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::System::Boolean hasAnimation)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEACCESSORYCOMPONENTS_OFFSET))(cpInfo, hasAnimation);
		}

		static ::System::Void ReleaseAccessoryAssets(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RELEASEACCESSORYASSETS_OFFSET))(cpInfo);
		}

		static ::System::Void _UpdateAccessoryAttach_g__SetGpuAnimationInstanceId_13_0(::UnityEngine::Renderer* targetRenderer, ::NPCCrowd::Accessories::NPCAccessoryManager___c__DisplayClass13_0& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::NPCCrowd::Accessories::NPCAccessoryManager___c__DisplayClass13_0&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__UPDATEACCESSORYATTACH_G__SETGPUANIMATIONINSTANCEID_13_0_OFFSET))(targetRenderer, a2);
		}

		static ::Cysharp::Threading::Tasks::UniTask _StartFade_g__StartFadeAndRelease_29_0(::System::Int32 rendererInstanceID, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* renderers, ::System::Single fadeTime, ::System::Boolean fadeIn, ::Class_3_FFD0045B4597F294* matComponent, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>*, ::System::Single, ::System::Boolean, ::Class_3_FFD0045B4597F294*, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__STARTFADE_G__STARTFADEANDRELEASE_29_0_OFFSET))(rendererInstanceID, renderers, fadeTime, fadeIn, matComponent, unionAnimator);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
