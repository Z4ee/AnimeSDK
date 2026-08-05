#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/MoleMole/ECrowdShadowFineness.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryAnimationInfo_FollowMdbPose.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
class FNpcAvatarGenericParams_PartInfo;
class NPCAvatarMeshAssetsSO;
class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
class NapRenderEntity;
namespace MoleMole { class MonoAttachPoint; }
namespace MoleMole { class MonoFeaturePoint; }
namespace MoleMole { class MonoInteractionPoint; }
namespace MoleMole { class MonoItemState; }
namespace NPCCrowd { class NPCGoPool; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Accessories { class NPCAccessoryMDBPose; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceShadowProxyComponentInfo; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceSimpleModelComponentInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshObstacle; }
namespace UnityEngine::Rendering::Universal { class MonoRenderEntityWrapper; }
namespace miHoYoEmotion { class ClipShapeManager; }
namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class EyeKey; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_BEFOREAVATARFADEOUT_OFFSET UNITYSDK_OFFSET(0x10CA2420)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_BINDBONESLOTSGALGAME_OFFSET UNITYSDK_OFFSET(0x10CAA090)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARACCESSORIESASYNC_OFFSET UNITYSDK_OFFSET(0x10CB0C10)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARBODYPARTSASYNC_OFFSET UNITYSDK_OFFSET(0x10CAF760)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARGO_1_OFFSET UNITYSDK_OFFSET(0x10CA4910)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARGO_OFFSET UNITYSDK_OFFSET(0x10CA4540)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESASYNC_1_OFFSET UNITYSDK_OFFSET(0x10CA62E0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESASYNC_2_OFFSET UNITYSDK_OFFSET(0x10CA6440)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESASYNC_OFFSET UNITYSDK_OFFSET(0x10CA5F90)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_OFFSET UNITYSDK_OFFSET(0x10CA9F10)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATAR_OFFSET UNITYSDK_OFFSET(0x10CA3A70)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARANIMATOR_OFFSET UNITYSDK_OFFSET(0x10CA5D60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARCOLLIDER_OFFSET UNITYSDK_OFFSET(0x10CA4B30)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARGOGALGAMEASYNC_OFFSET UNITYSDK_OFFSET(0x10CA98D0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x10CB0600)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOCLIPSHAPEMANAGER_OFFSET UNITYSDK_OFFSET(0x10CA58C0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOEMOSYNC_OFFSET UNITYSDK_OFFSET(0x10CA5B80)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOEYEKEY_OFFSET UNITYSDK_OFFSET(0x10CA5720)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x10CA51F0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOINTERACTPOINT_OFFSET UNITYSDK_OFFSET(0x10CA5420)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOITEMSTATE_OFFSET UNITYSDK_OFFSET(0x10CA5650)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARNAVMESHOBSTACLE_OFFSET UNITYSDK_OFFSET(0x10CA5030)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_ENABLEIKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10CABE50)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GETAVATARSHAREDGPUMATERIALS_OFFSET UNITYSDK_OFFSET(0x10CB02A0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GETAVATARSHAREDGPUMATERIAL_OFFSET UNITYSDK_OFFSET(0x10CA7D60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x10CA1160)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GPUMATPARAMPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10CA8220)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYANIMATORCULLINGMODEASYNC_OFFSET UNITYSDK_OFFSET(0x10CA95F0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYANIMATOR_OFFSET UNITYSDK_OFFSET(0x10CA8670)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYDEVICENUMBERPLATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x10CA92C0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYMDBCOMPONENT_OFFSET UNITYSDK_OFFSET(0x10CA8990)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYMDBPOSE_OFFSET UNITYSDK_OFFSET(0x10CB1780)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYSCENEOBJECT_OFFSET UNITYSDK_OFFSET(0x10CA9050)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITCPUMATERIALCOLORS_OFFSET UNITYSDK_OFFSET(0x10C9F980)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITGPUMATERIALCOLORS_OFFSET UNITYSDK_OFFSET(0x10CB08F0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITGPUMATERIALS_OFFSET UNITYSDK_OFFSET(0x10CB0720)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITLOGICTAGS_OFFSET UNITYSDK_OFFSET(0x10CA9660)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x10CA2F60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10CA3910)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_PLAYMDBREFERENCEPOSECLIP_OFFSET UNITYSDK_OFFSET(0x10CB1A60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARACCESSORYGALGAME_OFFSET UNITYSDK_OFFSET(0x10CACB10)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARACCESSORY_OFFSET UNITYSDK_OFFSET(0x10CA8420)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARGOGALGAME_OFFSET UNITYSDK_OFFSET(0x10CAA8E0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARGO_OFFSET UNITYSDK_OFFSET(0x10CA6640)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RANDOMSPAWNNPCFROMLIB_OFFSET UNITYSDK_OFFSET(0x10CA4210)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARPARTS_OFFSET UNITYSDK_OFFSET(0x10CAD070)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARROOTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x10CAECC0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARSHADOWPROXY_OFFSET UNITYSDK_OFFSET(0x10CAE2B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARSIMPLEMODEL_OFFSET UNITYSDK_OFFSET(0x10CADDC0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0x10CA12E0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASENPCFORRANDOMLIB_OFFSET UNITYSDK_OFFSET(0x10CAF5A0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPACCESSORYSIMPLERENDERER_OFFSET UNITYSDK_OFFSET(0x10CB10A0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARACCESSORYINFOFBXASYNC_OFFSET UNITYSDK_OFFSET(0x10CB0D40)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARACCESSORYINFOMATERIALASYNC_OFFSET UNITYSDK_OFFSET(0x10CB0EA0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARACCESSORYINFOMATERIALFORDEVICENUMBERPLATE_OFFSET UNITYSDK_OFFSET(0x10CB15D0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARPARTINFOASYNC_OFFSET UNITYSDK_OFFSET(0x10CAF900)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPCPUPARTINFO_OFFSET UNITYSDK_OFFSET(0x10CAFA60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPGPUPARTINFO_OFFSET UNITYSDK_OFFSET(0x10CB0080)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPNPCAVATARLOD0MESH_OFFSET UNITYSDK_OFFSET(0x10CAB6F0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_UPDATENPCAVATARANIMATORFORGALGAME_OFFSET UNITYSDK_OFFSET(0x10CB0460)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CB1C20)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB1C10)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPCPUPARTINFO_G__GETPARTBOUNDINGBOXBYPARTTYPE_43_0_OFFSET UNITYSDK_OFFSET(0x10CAFF80)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x10CB1D90)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10CB1E20)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager_TypeDefinitionIndex = 60720;

	class NPCCrowdAvatarManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>** StaticGet_AvatarAccessoryAsyncLoadTasks()
		{
			return (::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager_TypeDefinitionIndex)->GetStaticField(0x37770);
		}
		static ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>** StaticGet_AvatarPartAsyncLoadTasks()
		{
			return (::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager_TypeDefinitionIndex)->GetStaticField(0x37778);
		}
		static ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>** StaticGet_AvatarAsyncLoadTasks()
		{
			return (::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager_TypeDefinitionIndex)->GetStaticField(0x37780);
		}
		// static const ::System::Int32 MaxPoolNum = 0x32; // 0x0
		// static const ::System::String* _IK_POINT_NAME; // 0x0
		::NPCCrowd::NPCGoPool* rootGoPool; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _npcRandomLibTagPools; // 0x20
		::NPCCrowd::NPCGoPool* gpuPartGoPool; // 0x28
		::NPCCrowd::NPCGoPool* cpuPartGoPool; // 0x30
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* lodShadowFineness; // 0x38
		::NPCCrowd::NPCGoPool* shadowProxySkinnedGoPool; // 0x40
		::NPCCrowd::NPCGoPool* shadowProxyStaticGoPool; // 0x48
		::NPCCrowd::NPCGoPool* simpleModelGoPool; // 0x50
		::System::Boolean bCreateSkinnedShadowProxy; // 0x58
		::System::Boolean bCreateStaticShadowProxy; // 0x59
		::System::Boolean bUseShadowProxy; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Avatar::NPCCrowdAvatarManager* Get()
		{
			return ((::NPCCrowd::Avatar::NPCCrowdAvatarManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean CreateAvatar(::Class_3_F2DAD7F45F518868* npcComp, ::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornRot, ::UnityEngine::Transform* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATAR_OFFSET))(this, npcComp, bornPosition, bornRot, parent);
		}

		::NPCCrowd::Avatar::NPCAvatarGOReference* CreateAvatarGo(::FNpcAvatarGenericParams avatarParams, ::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornRot, ::UnityEngine::Transform* parent)
		{
			return ((::NPCCrowd::Avatar::NPCAvatarGOReference*(*)(::PVOID, ::FNpcAvatarGenericParams, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARGO_OFFSET))(this, avatarParams, bornPosition, bornRot, parent);
		}

		::NPCCrowd::Avatar::NPCAvatarGOReference* CreateAvatarGo_1(::FNpcAvatarGenericParams avatarParams, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::NPCCrowd::Avatar::NPCAvatarGOReference*(*)(::PVOID, ::FNpcAvatarGenericParams, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARGO_1_OFFSET))(this, avatarParams, assetSo);
		}

		::System::Void CreateAvatarPartsAndAccessoriesAsync(::Class_3_F2DAD7F45F518868* npcComp, ::System::Action* callback, ::System::Boolean enableGPULod)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESASYNC_OFFSET))(this, npcComp, callback, enableGPULod);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CreateAvatarPartsAndAccessoriesAsync_1(::Class_3_F2DAD7F45F518868* npcComp, ::NPCAvatarMeshAssetsSO* assetSo, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos, ::NPCCrowd::Avatar::NPCAvatarGOReference* goRef, ::System::Boolean enableGPULod, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator, ::System::Action* callback, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCAvatarMeshAssetsSO*, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>*, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*, ::System::Action*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESASYNC_1_OFFSET))(this, npcComp, assetSo, partInfos, accessoryInfos, goRef, enableGPULod, unionAnimator, callback, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*>> CreateAvatarPartsAndAccessoriesAsync_2(::NPCAvatarMeshAssetsSO* assetSo, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos, ::UnityEngine::GameObject* avatarGo, ::System::Int32 logID, ::System::Boolean enableGPULod, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*>>(*)(::PVOID, ::NPCAvatarMeshAssetsSO*, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>*, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean, ::NPCCrowd::Animation::NPCUnionAnimator*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESASYNC_2_OFFSET))(this, assetSo, partInfos, accessoryInfos, avatarGo, logID, enableGPULod, unionAnimator, cancellationToken);
		}

		::System::Void PostLoadAvatarGo(::Class_3_F2DAD7F45F518868* npcComp, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCCrowd::Avatar::NPCAvatarGOReference* goRef, ::System::Boolean enableGPULod)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCAvatarMeshAssetsSO*, ::NPCCrowd::Avatar::NPCAvatarGOReference*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARGO_OFFSET))(this, npcComp, assetSo, goRef, enableGPULod);
		}

		static ::System::Void PostLoadAvatarAccessory(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARACCESSORY_OFFSET))(npcComp);
		}

		static ::System::Void InitLogicTags(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITLOGICTAGS_OFFSET))(npcComp);
		}

		::System::Void CreateNPCAvatarGoGalgameAsync(::System::String* prefabPath, ::System::Int32 avatarParamsID, ::System::String* strSlotName, ::System::Boolean enableLookIK, ::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornRot, ::UnityEngine::Transform* parent, ::System::Boolean keedDefaultAccessory, ::System::Action_1<::UnityEngine::GameObject*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARGOGALGAMEASYNC_OFFSET))(this, prefabPath, avatarParamsID, strSlotName, enableLookIK, bornPosition, bornRot, parent, keedDefaultAccessory, callback);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CreateAvatarPartsAndAccessoriesGalgameAsync(::UnityEngine::GameObject* avatarGo, ::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::NPCAvatarMeshAssetsSO* assetSo, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos, ::System::Int32 avatarParamsID, ::System::Boolean enableLookIK, ::System::Action_1<::UnityEngine::GameObject*>* callback, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::UnityEngine::GameObject*, ::ENPCAvatarGender, ::ENPCAvatarSize, ::NPCAvatarMeshAssetsSO*, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>*, ::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*, ::System::Int32, ::System::Boolean, ::System::Action_1<::UnityEngine::GameObject*>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_OFFSET))(this, avatarGo, gender, size, assetSo, partInfos, accessoryInfos, avatarParamsID, enableLookIK, callback, cancellationToken);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* BindBoneSlotsGalgame(::NPCAvatarMeshAssetsSO* assetSo, ::UnityEngine::GameObject* avatarGo, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*(*)(::NPCAvatarMeshAssetsSO*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_BINDBONESLOTSGALGAME_OFFSET))(assetSo, avatarGo, accessories);
		}

		static ::System::Void PostLoadAvatarGoGalgame(::NPCAvatarMeshAssetsSO* assetSo, ::UnityEngine::GameObject* avatarGo, ::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* parts, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* boneTransformDict, ::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::System::Boolean enableLookIK)
		{
			return ((::System::Void(*)(::NPCAvatarMeshAssetsSO*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*, ::ENPCAvatarGender, ::ENPCAvatarSize, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARGOGALGAME_OFFSET))(assetSo, avatarGo, parts, boneTransformDict, gender, size, enableLookIK);
		}

		static ::System::Void EnableIKComponent(::NPCAvatarMeshAssetsSO* assetSo, ::UnityEngine::GameObject* avatarGo, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* boneTransformDict)
		{
			return ((::System::Void(*)(::NPCAvatarMeshAssetsSO*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_ENABLEIKCOMPONENT_OFFSET))(assetSo, avatarGo, boneTransformDict);
		}

		static ::System::Void PostLoadAvatarAccessoryGalgame(::NPCAvatarMeshAssetsSO* assetSo, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* boneTransformDict)
		{
			return ((::System::Void(*)(::NPCAvatarMeshAssetsSO*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_POSTLOADAVATARACCESSORYGALGAME_OFFSET))(assetSo, accessories, boneTransformDict);
		}

		::System::Void BeforeAvatarFadeOut(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_BEFOREAVATARFADEOUT_OFFSET))(this, entityID);
		}

		::System::Void ReleaseAvatar(::Class_3_F2DAD7F45F518868* comp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATAR_OFFSET))(this, comp);
		}

		::System::Void ReleaseAvatarSimpleModel(::NPCCrowd::Avatar::NPCAvatarGOReferenceSimpleModelComponentInfo* simpleModelComponentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReferenceSimpleModelComponentInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARSIMPLEMODEL_OFFSET))(this, simpleModelComponentInfo);
		}

		::System::Void ReleaseAvatarShadowProxy(::NPCCrowd::Avatar::NPCAvatarGOReferenceShadowProxyComponentInfo* shadowProxyComponentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReferenceShadowProxyComponentInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARSHADOWPROXY_OFFSET))(this, shadowProxyComponentInfo);
		}

		static ::System::Void ReleaseAvatarRootComponents(::NPCCrowd::Avatar::NPCAvatarGOReference* goRef)
		{
			return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReference*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARROOTCOMPONENTS_OFFSET))(goRef);
		}

		::System::Void ReleaseAvatarParts(::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* parts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASEAVATARPARTS_OFFSET))(this, parts);
		}

		::System::Void RandomSpawnNpcFromLib(::System::Int32 libID, ::FNpcAvatarGenericParams& avatarParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FNpcAvatarGenericParams&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RANDOMSPAWNNPCFROMLIB_OFFSET))(this, libID, avatarParams);
		}

		::System::Void ReleaseNpcForRandomLib(::System::Int32 libID, ::System::Int32 avatarParamsID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_RELEASENPCFORRANDOMLIB_OFFSET))(this, libID, avatarParamsID);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*> CreateAvatarBodyPartsAsync(::NPCAvatarMeshAssetsSO* assetSo, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos, ::UnityEngine::GameObject* avatarGo, ::System::Int32 logID, ::System::Boolean enableGPULod, ::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*>(*)(::PVOID, ::NPCAvatarMeshAssetsSO*, ::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean, ::NPCCrowd::Animation::NPCCrowdAnimator*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARBODYPARTSASYNC_OFFSET))(this, assetSo, partInfos, avatarGo, logID, enableGPULod, gpuAnimator, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask SetupAvatarPartInfoAsync(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo, ::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::System::Boolean enableGPULod, ::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*, ::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::System::Boolean, ::NPCCrowd::Animation::NPCCrowdAnimator*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARPARTINFOASYNC_OFFSET))(this, partGoInfo, avatarGo, assetSo, meshAss, enableGPULod, gpuAnimator, cancellationToken);
		}

		::System::Void SetupCPUPartInfo(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo, ::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::Il2CppArray<::UnityEngine::Material*>* materials)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*, ::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPCPUPARTINFO_OFFSET))(this, partGoInfo, avatarGo, meshAss, materials);
		}

		::System::Void SetupGPUPartInfo(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo, ::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::Il2CppArray<::UnityEngine::Material*>* materials)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*, ::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPGPUPARTINFO_OFFSET))(this, partGoInfo, avatarGo, meshAss, materials);
		}

		static ::UnityEngine::Animator* CreateNPCAvatarAnimator(::UnityEngine::GameObject* avatarGo, ::UnityEngine::Avatar* avatar)
		{
			return ((::UnityEngine::Animator*(*)(::UnityEngine::GameObject*, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARANIMATOR_OFFSET))(avatarGo, avatar);
		}

		static ::System::Void UpdateNPCAvatarAnimatorForGalgame(::UnityEngine::GameObject* avatarGo, ::UnityEngine::Avatar* avatar)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Avatar*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_UPDATENPCAVATARANIMATORFORGALGAME_OFFSET))(avatarGo, avatar);
		}

		static ::UnityEngine::Collider* CreateNPCAvatarCollider(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::UnityEngine::Collider*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARCOLLIDER_OFFSET))(avatarGo, assetSo);
		}

		static ::UnityEngine::AI::NavMeshObstacle* CreateNPCAvatarNavmeshObstacle(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::UnityEngine::AI::NavMeshObstacle*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARNAVMESHOBSTACLE_OFFSET))(avatarGo, assetSo);
		}

		static ::MoleMole::MonoFeaturePoint* CreateNPCAvatarMonoFeaturePoint(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::MoleMole::MonoFeaturePoint*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOFEATUREPOINT_OFFSET))(avatarGo, assetSo);
		}

		static ::MoleMole::MonoInteractionPoint* CreateNPCAvatarMonoInteractPoint(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::MoleMole::MonoInteractionPoint*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOINTERACTPOINT_OFFSET))(avatarGo, assetSo);
		}

		static ::MoleMole::MonoAttachPoint* CreateNPCAvatarMonoAttachPoint(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::MoleMole::MonoAttachPoint*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOATTACHPOINT_OFFSET))(avatarGo, assetSo);
		}

		static ::MoleMole::MonoItemState* CreateNPCAvatarMonoItemState(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::MoleMole::MonoItemState*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOITEMSTATE_OFFSET))(avatarGo, assetSo);
		}

		static ::miHoYoEmotion::EyeKey* CreateNPCAvatarMonoEyeKey(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::miHoYoEmotion::EyeKey*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOEYEKEY_OFFSET))(avatarGo, assetSo);
		}

		static ::miHoYoEmotion::ClipShapeManager* CreateNPCAvatarMonoClipShapeManager(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::miHoYoEmotion::ClipShapeManager*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOCLIPSHAPEMANAGER_OFFSET))(avatarGo, assetSo);
		}

		static ::miHoYoEmotion::EmoSync* CreateNPCAvatarMonoEmoSync(::UnityEngine::GameObject* avatarGo, ::NPCAvatarMeshAssetsSO* assetSo)
		{
			return ((::miHoYoEmotion::EmoSync*(*)(::UnityEngine::GameObject*, ::NPCAvatarMeshAssetsSO*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATENPCAVATARMONOEMOSYNC_OFFSET))(avatarGo, assetSo);
		}

		static ::System::Void SetupNPCAvatarLOD0Mesh(::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* allPartsGo, ::NPCAvatarMeshAssetsSO* assetSo, ::UnityEngine::Rendering::Universal::MonoRenderEntityWrapper* renderEntity)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*, ::NPCAvatarMeshAssetsSO*, ::UnityEngine::Rendering::Universal::MonoRenderEntityWrapper*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPNPCAVATARLOD0MESH_OFFSET))(allPartsGo, assetSo, renderEntity);
		}

		static ::Il2CppArray<::UnityEngine::Material*>* GetAvatarSharedGPUMaterials(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss, ::Il2CppArray<::UnityEngine::Material*>* originalMaterials)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GETAVATARSHAREDGPUMATERIALS_OFFSET))(meshAss, originalMaterials);
		}

		static ::UnityEngine::Material* GetAvatarSharedGPUMaterial(::UnityEngine::Material* originalMaterial)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GETAVATARSHAREDGPUMATERIAL_OFFSET))(originalMaterial);
		}

		static ::System::Void GpuMatParamProcessor(::UnityEngine::Material* m, ::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_GPUMATPARAMPROCESSOR_OFFSET))(m, gpuAnimator);
		}

		static ::System::Void InitGPUMaterials(::Il2CppArray<::UnityEngine::Material*>* gpuMats, ::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITGPUMATERIALS_OFFSET))(gpuMats, gpuAnimator);
		}

		static ::System::Void InitCPUMaterialColors(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo, ::NapRenderEntity* renderEntity)
		{
			return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITCPUMATERIALCOLORS_OFFSET))(partGoInfo, renderEntity);
		}

		static ::System::Void InitGPUMaterialColors(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo, ::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator)
		{
			return ((::System::Void(*)(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITGPUMATERIALCOLORS_OFFSET))(partGoInfo, gpuAnimator);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*> CreateAvatarAccessoriesAsync(::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos, ::UnityEngine::GameObject* avatarGo, ::System::Int32 logID, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*>(*)(::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>*, ::UnityEngine::GameObject*, ::System::Int32, ::NPCCrowd::Animation::NPCUnionAnimator*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_CREATEAVATARACCESSORIESASYNC_OFFSET))(accessoryInfos, avatarGo, logID, unionAnimator, cancellationToken);
		}

		static ::Cysharp::Threading::Tasks::UniTask SetupAvatarAccessoryInfoFbxAsync(::FNpcAvatarGenericParams_AccessoryInfo accessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* avatarAss, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshAss, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::FNpcAvatarGenericParams_AccessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARACCESSORYINFOFBXASYNC_OFFSET))(accessoryInfo, cpInfo, avatarAss, meshAss, cancellationToken);
		}

		static ::Cysharp::Threading::Tasks::UniTask SetupAvatarAccessoryInfoMaterialAsync(::FNpcAvatarGenericParams_AccessoryInfo accessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* avatarAss, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets* meshAss, ::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::FNpcAvatarGenericParams_AccessoryInfo, ::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*, ::NPCCrowd::Animation::NPCUnionAnimator*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARACCESSORYINFOMATERIALASYNC_OFFSET))(accessoryInfo, cpInfo, avatarAss, meshAss, unionAnimator, cancellationToken);
		}

		static ::System::Void SetupAccessorySimpleRenderer(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo, ::UnityEngine::Material* fallbackMaterial)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPACCESSORYSIMPLERENDERER_OFFSET))(cpInfo, fallbackMaterial);
		}

		static ::System::Void SetupAvatarAccessoryInfoMaterialForDeviceNumberPlate(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_SETUPAVATARACCESSORYINFOMATERIALFORDEVICENUMBERPLATE_OFFSET))(cpInfo);
		}

		static ::System::Void InitAccessoryAnimator(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYANIMATOR_OFFSET))(accessory);
		}

		static ::System::Void InitAccessoryMdbComponent(::NPCCrowd::Accessories::NPCAccessory* accessory, ::System::Boolean isPathNpc)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYMDBCOMPONENT_OFFSET))(accessory, isPathNpc);
		}

		static ::System::Void InitAccessoryMdbPose(::NPCCrowd::Accessories::NPCAccessory* accessory, ::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowMdbPose poseInfo)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::NPCAccessoryAnimationInfo_FollowMdbPose))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYMDBPOSE_OFFSET))(accessory, poseInfo);
		}

		static ::System::Void PlayMdbReferencePoseClip(::NPCCrowd::Accessories::NPCAccessory* accessory, ::NPCCrowd::Accessories::NPCAccessoryMDBPose* mdbPose)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*, ::NPCCrowd::Accessories::NPCAccessoryMDBPose*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_PLAYMDBREFERENCEPOSECLIP_OFFSET))(accessory, mdbPose);
		}

		static ::System::Void InitAccessorySceneObject(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYSCENEOBJECT_OFFSET))(accessory);
		}

		static ::System::Void InitAccessoryDeviceNumberPlateComponent(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::System::Void(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYDEVICENUMBERPLATECOMPONENT_OFFSET))(accessory);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid InitAccessoryAnimatorCullingModeAsync(::NPCCrowd::Accessories::NPCAccessory* accessory)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::NPCCrowd::Accessories::NPCAccessory*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER_INITACCESSORYANIMATORCULLINGMODEASYNC_OFFSET))(accessory);
		}

		static ::UnityEngine::Bounds _SetupCPUPartInfo_g__GetPartBoundingBoxByPartType_43_0(::ENPCAvatarBodyPart partType)
		{
			return ((::UnityEngine::Bounds(*)(::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPCPUPARTINFO_G__GETPARTBOUNDINGBOXBYPARTTYPE_43_0_OFFSET))(partType);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
