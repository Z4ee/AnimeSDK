#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

class Class_3_FFD0045B4597F294;
namespace NPCCrowd { class CrowdTickControlInstance; }
namespace NPCCrowd { class NPCGoPool; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0xEC7DFE0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0xEC7E240)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDSHOW_OFFSET UNITYSDK_OFFSET(0xEC7E3C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORYGO_OFFSET UNITYSDK_OFFSET(0xEC7F8B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_CREATEACCESSORY_OFFSET UNITYSDK_OFFSET(0xEC7F500)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORYGO_OFFSET UNITYSDK_OFFSET(0xEC7FE40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_DESTROYACCESSORY_OFFSET UNITYSDK_OFFSET(0xEC7FC50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xEC7AC90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INITFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0xEC7C750)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xEC7AE10)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEC7B1B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEC7B8C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLERDEVICEWHEEL_OFFSET UNITYSDK_OFFSET(0xEC7CEF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTFOLLOWTRANSHANDLER_OFFSET UNITYSDK_OFFSET(0xEC7C570)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTSETLOD_OFFSET UNITYSDK_OFFSET(0xEC7E560)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHDITHERTASK_OFFSET UNITYSDK_OFFSET(0xEC7F0B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_RELEASEACCESSORYASSETS_OFFSET UNITYSDK_OFFSET(0xEC7FFC0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REMOVEACCESSORYCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xEC800C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETACCESSORYHIDDEN_OFFSET UNITYSDK_OFFSET(0xEC7B990)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETLODASSET_OFFSET UNITYSDK_OFFSET(0xEC7E4A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_OFFSET UNITYSDK_OFFSET(0xEC7E900)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STOPFADE_OFFSET UNITYSDK_OFFSET(0xEC7EE90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEACCESSORYATTACH_OFFSET UNITYSDK_OFFSET(0xEC7B210)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATEFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0xEC7BA20)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATESHOWSTATUSBYANIMID_OFFSET UNITYSDK_OFFSET(0xEC7C270)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xEC7B150)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC81020)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xEC81010)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xEC81100)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEC81190)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEC81230)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEC812C0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryManager_TypeDefinitionIndex = 55240;

	class NPCAccessoryManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_NpcAccessorySkinGoName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x32F50);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x32F58);
		}
		static ::System::String** StaticGet_NpcAccessoryGoName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryManager_TypeDefinitionIndex)->GetStaticField(0x32F60);
		}
		// static const ::System::Int32 MaxPoolNum = 0x32; // 0x0
		::NPCCrowd::NPCGoPool* _accSkinnedRootGoPool; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories; // 0x20
		::NPCCrowd::CrowdTickControlInstance* LateUpdateControl; // 0x28
		::NPCCrowd::NPCGoPool* _accNoSkinGoPool; // 0x30
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

		::Cysharp::Threading::Tasks::UniTaskVoid SetAccessoryHidden(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Boolean bIsHidden, ::System::Boolean fade)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETACCESSORYHIDDEN_OFFSET))(this, acc, bIsHidden, fade);
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

		static ::System::Boolean AccessoryNeedFadein(::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDFADEIN_OFFSET))(oldLod, lod);
		}

		static ::System::Boolean AccessoryNeedFadeout(::NPCCrowd::Lod::ELODLevel oldLod, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDFADEOUT_OFFSET))(oldLod, lod);
		}

		static ::System::Boolean AccessoryNeedShow(::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_ACCESSORYNEEDSHOW_OFFSET))(lod);
		}

		static ::System::Void SetLODAsset(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel newLod, ::System::Boolean forceSet)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_SETLODASSET_OFFSET))(acc, newLod, forceSet);
		}

		static ::System::Void PostSetLOD(::NPCCrowd::Accessories::NPCAccessory* acc, ::NPCCrowd::Lod::ELODLevel newLod, ::NPCCrowd::Lod::ELODLevel oldLod, ::System::Boolean ownerAvatarUseGpuLod, ::System::Boolean forceSet)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Lod::ELODLevel, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_POSTSETLOD_OFFSET))(acc, newLod, oldLod, ownerAvatarUseGpuLod, forceSet);
		}

		static ::Cysharp::Threading::Tasks::UniTask StartFade(::NPCCrowd::Accessories::NPCAccessory* acc, ::System::Boolean bFadein, ::Class_3_FFD0045B4597F294* materialComponent, ::System::Boolean forceSet)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean, ::Class_3_FFD0045B4597F294*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STARTFADE_OFFSET))(acc, bFadein, materialComponent, forceSet);
		}

		static ::System::Void StopFade(::NPCCrowd::Accessories::NPCAccessory* acc)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_STOPFADE_OFFSET))(acc);
		}

		static ::System::Void RefreshDitherTask(::NPCCrowd::Accessories::NPCAccessory* acc, ::Class_3_FFD0045B4597F294* materialComponent, ::System::Boolean fadeIn, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::Class_3_FFD0045B4597F294*, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMANAGER_REFRESHDITHERTASK_OFFSET))(acc, materialComponent, fadeIn, unionAnimator);
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
