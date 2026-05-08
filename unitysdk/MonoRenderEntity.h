#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Capsule.h"
#include "unitysdk/Character.h"
#include "unitysdk/CullingSphereAnchor.h"
#include "unitysdk/MonoRenderEntity_DecalResolution.h"
#include "unitysdk/MonoRenderEntity_UVSet.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapCapsuleAoNodeBinding.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GraphicSettings_EDamageDecalQuality.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class DamageDecalConfig;
class MonoRenderEntity_MonsterDecalInfo;
class NapMaterial;
class NapRenderEntity;
class NapRenderer;
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define MONORENDERENTITY_APPLYNATIVEBACKEND_OFFSET UNITYSDK_OFFSET(0x1967E370)
#define MONORENDERENTITY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1967EE40)
#define MONORENDERENTITY_CHECKDAMAGEDECALQUALITY_OFFSET UNITYSDK_OFFSET(0x1967F7E0)
#define MONORENDERENTITY_CLEANUPDECAL_OFFSET UNITYSDK_OFFSET(0x1967F2B0)
#define MONORENDERENTITY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x19680C50)
#define MONORENDERENTITY_COLLIDERTOCAPSULE_OFFSET UNITYSDK_OFFSET(0x196816F0)
#define MONORENDERENTITY_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1967E190)
#define MONORENDERENTITY_CREATERANDOMZROTATIONMATRIX_OFFSET UNITYSDK_OFFSET(0x19682ED0)
#define MONORENDERENTITY_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1967E2D0)
#define MONORENDERENTITY_DISABLEGLOBALDAMAGEDECAL_OFFSET UNITYSDK_OFFSET(0x19684AE0)
#define MONORENDERENTITY_FIREDAMAGEDECAL_OFFSET UNITYSDK_OFFSET(0x19684860)
#define MONORENDERENTITY_FORCEREFRESH_OFFSET UNITYSDK_OFFSET(0x19680FE0)
#define MONORENDERENTITY_GETCELLINDEX_OFFSET UNITYSDK_OFFSET(0x19683750)
#define MONORENDERENTITY_GET_ACTUALCONTROLLINGENTITY_OFFSET UNITYSDK_OFFSET(0x1967DF90)
#define MONORENDERENTITY_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1967E180)
#define MONORENDERENTITY_GET_USENATIVEBACKEND_OFFSET UNITYSDK_OFFSET(0x1967E0C0)
#define MONORENDERENTITY_INITGUNEYES_OFFSET UNITYSDK_OFFSET(0x1967FA10)
#define MONORENDERENTITY_INITIALIZEDAMAGEDECALINFO_OFFSET UNITYSDK_OFFSET(0x19681EA0)
#define MONORENDERENTITY_KILLCELL_OFFSET UNITYSDK_OFFSET(0x196834F0)
#define MONORENDERENTITY_ONCUSTOMLIGHTDIRECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1967DDB0)
#define MONORENDERENTITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19680DB0)
#define MONORENDERENTITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1967DAE0)
#define MONORENDERENTITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1967D920)
#define MONORENDERENTITY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1967DCB0)
#define MONORENDERENTITY_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1967DD10)
#define MONORENDERENTITY_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1967DBA0)
#define MONORENDERENTITY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1967D9E0)
#define MONORENDERENTITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1967F5A0)
#define MONORENDERENTITY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1967F230)
#define MONORENDERENTITY_RECALCULATECAPSULEAOARRAYS_OFFSET UNITYSDK_OFFSET(0x1967E8F0)
#define MONORENDERENTITY_RECOVERGLOBALDAMAGEDECAL_OFFSET UNITYSDK_OFFSET(0x19684F10)
#define MONORENDERENTITY_REFRESHIMPL_OFFSET UNITYSDK_OFFSET(0x19680F40)
#define MONORENDERENTITY_REFRESH_OFFSET UNITYSDK_OFFSET(0x19680EF0)
#define MONORENDERENTITY_REGISTERENTITYFORCG_OFFSET UNITYSDK_OFFSET(0x1967F550)
#define MONORENDERENTITY_REGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x1967EFD0)
#define MONORENDERENTITY_SELFUPDATE_OFFSET UNITYSDK_OFFSET(0x19681030)
#define MONORENDERENTITY_SETGUNEYEMATERIAL_OFFSET UNITYSDK_OFFSET(0x196853B0)
#define MONORENDERENTITY_SETUPNATIVE_OFFSET UNITYSDK_OFFSET(0x1967E420)
#define MONORENDERENTITY_SET_USENATIVEBACKEND_OFFSET UNITYSDK_OFFSET(0x1967E120)
#define MONORENDERENTITY_SHUFFLEOVERLAYINDEX_OFFSET UNITYSDK_OFFSET(0x196843F0)
#define MONORENDERENTITY_SPAWNDECAL_OFFSET UNITYSDK_OFFSET(0x19683120)
#define MONORENDERENTITY_SYNCWITHMONORENDERENTITYBUTTON_OFFSET UNITYSDK_OFFSET(0x1967DD70)
#define MONORENDERENTITY_UPDATECELLSTATE_OFFSET UNITYSDK_OFFSET(0x1967F600)
#define MONORENDERENTITY_UPDATEMONSTERMATERIALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x196837F0)
#define MONORENDERENTITY_UPDATENATIVEPEROBJECTSHADOWRESOLVEALPHA_OFFSET UNITYSDK_OFFSET(0x1967DE70)
#define MONORENDERENTITY_VALIDATEENTITYVISIBILITYUPDATE_OFFSET UNITYSDK_OFFSET(0x1967F970)
#define MONORENDERENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19685DC0)
#define MONORENDERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19685A60)

inline static constexpr unsigned int MonoRenderEntity_TypeDefinitionIndex = 29566;

class MonoRenderEntity : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_RecalculateCapsuleAOArrays()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x23320);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitGunEyes()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x23328);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MonoRenderEntity_MonsterDecalInfo*>** StaticGet_DamageDecalTargetsInfo()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MonoRenderEntity_MonsterDecalInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x23330);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet_cachedPairs()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x23338);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitializeDamageDecalInfo()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x23340);
	}
	static ::System::Int32* StaticGet_defaultDamageDecalLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x5A20);
	}
	static ::System::Boolean* StaticGet__UseNativeBackend_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x5A24);
	}
	static ::System::Boolean* StaticGet_enableDamageDecalPerformanceTest()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x5A25);
	}
	static ::System::Boolean* StaticGet_modelReceiveDecal()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x5A26);
	}
	// static const ::System::Single DECAL_KILL_INTERVAL; // 0x0
	::System::Boolean syncWithMonoRenderEntity; // 0x18
	::System::Boolean isAwaken; // 0x19
	::System::Boolean skipClearMPB; // 0x1A
	::UnityEngine::Transform* middlePoint; // 0x20
	::UnityEngine::Transform* rootBone; // 0x28
	::UnityEngine::Transform* headBone; // 0x30
	::System::Boolean clipVerticesUnderRootBone; // 0x38
	::System::Single rootBoneClipOffset; // 0x3C
	::System::Boolean disableCullingSphere; // 0x40
	::CullingSphereAnchor cullingSphereAnchor; // 0x44
	::UnityEngine::Vector4 cullingSphere; // 0x48
	::System::Boolean fixShadowSamplePointOutOfFrustum; // 0x58
	::System::Boolean usePerObjectShadow; // 0x59
	::System::Boolean useCustomLightDirection; // 0x5A
	::UnityEngine::Vector3 customLightDirection; // 0x5C
	::System::Single perObjectShadowAlpha; // 0x68
	::System::Single perObjectShadowResolveAlpha; // 0x6C
	::System::Boolean rayCastForCullingSphere; // 0x70
	::System::Boolean perObjectShadowOptimizeSize; // 0x71
	::System::Single perObjectShadowMaxBoundsSize; // 0x74
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* perObjectShadowLowPriorityRenderers; // 0x78
	::UnityEngine::Vector4 headSphereNormalCenter; // 0x80
	::Il2CppArray<::UnityEngine::Renderer*>* lodIndexedRenderers; // 0x90
	::System::Boolean isOrderedRenderers; // 0x98
	::Il2CppArray<::UnityEngine::Renderer*>* lodRenderers; // 0xA0
	::Il2CppArray<::System::Int32>* lodRendererPartIdOffsets; // 0xA8
	::UnityEngine::SkinnedMeshRenderer* gunEyeRenderer; // 0xB0
	::UnityEngine::Transform* gunEyeBoneL; // 0xB8
	::UnityEngine::Transform* gunEyeBoneR; // 0xC0
	::System::Int32 gunEyeState; // 0xC8
	::NapRenderer* gunEyeNapRenderer; // 0xD0
	::NapMaterial* gunEyeNapMaterial; // 0xD8
	::System::Int32 gunEyeNapMaterialIndex; // 0xE0
	::System::Int32 gunEyeStateCtlIndex; // 0xE4
	::System::Boolean useCustomBlendedDirectionalLightSize; // 0xE8
	::System::Single customBlendedDirectionalLightSize; // 0xEC
	::System::Boolean fixRed; // 0xF0
	::System::Boolean preferPerMaterialMpb; // 0xF1
	::System::Boolean preferPerRendererMpb; // 0xF2
	::System::Boolean selfActivate; // 0xF3
	::System::Boolean forceInShadow; // 0xF4
	::System::Boolean initialized; // 0xF5
	::NapRenderEntity* NapRenderEntity; // 0xF8
	::System::IntPtr m_NativeHandle; // 0x100
	::Il2CppArray<::UnityEngine::NAPRenderPipeline0::NapCapsuleAoNodeBinding>* elements; // 0x108
	::System::Single capsuleAORadius; // 0x110
	::Il2CppArray<::Capsule>* Capsules; // 0x118
	::Character thisChar; // 0x120
	::System::Int32 Index; // 0x13C
	::System::Int32 _DamageDecalInfo; // 0x140
	::System::Int32 _DamageDecalInfo2; // 0x144
	::System::Int32 _DamageDecalEmissionColor; // 0x148
	::System::Int32 _DamageDecalKillIndex; // 0x14C
	::System::Int32 _DecalFadeDistance; // 0x150
	::System::Int32 _DecalUVSet; // 0x154
	::System::Int32 _CellSize; // 0x158
	::System::Int32 _DecalProjectionNormal; // 0x15C
	::System::Int32 _IsHit; // 0x160
	::System::Int32 _DamageDecalArray; // 0x164
	::System::Boolean enableDamageDecal; // 0x168
	::MonoRenderEntity_DecalResolution decalResolution; // 0x16C
	::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* decalModelList; // 0x170
	::System::Collections::Generic::List_1<::MonoRenderEntity_UVSet>* decalUVList; // 0x178
	::System::Single decalWidthFactor; // 0x180
	::System::Single decalHeightFactor; // 0x184
	::System::Single decalDepthFactor; // 0x188
	::System::Single decalLifetimeFactor; // 0x18C
	::System::Boolean decalUseCustomColor; // 0x190
	::UnityEngine::Color decalDamageColor; // 0x194
	::System::Single decalFadeDistance; // 0x1A4
	::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* pipelineAsset; // 0x1A8
	::UnityEngine::Rendering::Universal::ForwardRendererData* forwardRendererData; // 0x1B0
	::Il2CppArray<::DamageDecalConfig*>* decalConfigs; // 0x1B8
	::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* skinnedMeshRenderers; // 0x1C0
	::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* matBlocks; // 0x1C8
	::System::Int32 decalTypeCount; // 0x1D0
	::System::Int32 currentDecalCount; // 0x1D4
	::System::Int32 decalCellIndex; // 0x1D8
	::System::Collections::BitArray* decalCellOccupied; // 0x1E0
	::System::Int32 maxDecals; // 0x1E8
	::System::Int32 decalKillThreshold; // 0x1EC
	::System::Int32 decalCellSize; // 0x1F0
	::System::Single decalWidth; // 0x1F4
	::System::Single decalHeight; // 0x1F8
	::System::Single decalDepth; // 0x1FC
	::System::Boolean finishDrawDecalLUT; // 0x200
	::Il2CppArray<::System::Single>* decalCellLifeTime; // 0x208
	::Il2CppArray<::System::Single>* decalCellKillTime; // 0x210
	::Il2CppArray<::UnityEngine::Color>* decalCellEmissionColor; // 0x218
	::System::Boolean decalFinishInit; // 0x220
	::UnityEngine::Material* decalMaterial; // 0x228
	::Il2CppArray<::System::Int32>* decalCellOverlayIndex; // 0x230
	::MonoRenderEntity_MonsterDecalInfo* decalTargetInfo; // 0x238
	::UnityEngine::RenderTexture* decalDilationLUT; // 0x240
	::Il2CppArray<::UnityEngine::Vector4>* damageDecalInfoData; // 0x248
	::Il2CppArray<::UnityEngine::Vector4>* damageDecalInfoData2; // 0x250
	::Il2CppArray<::System::Single>* damageDecalAngle; // 0x258
	::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality damageDecalQuality; // 0x260
	::System::Boolean napRenderEntityVisible; // 0x264

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONORENDERENTITY__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void SyncWithMonoRenderEntityButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_SYNCWITHMONORENDERENTITYBUTTON_OFFSET))(this);
	}

	::System::Void OnCustomLightDirectionChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONCUSTOMLIGHTDIRECTIONCHANGED_OFFSET))(this);
	}

	::System::Void UpdateNativePerObjectShadowResolveAlpha()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_UPDATENATIVEPEROBJECTSHADOWRESOLVEALPHA_OFFSET))(this);
	}

	::System::Boolean get_ActualControllingEntity()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_GET_ACTUALCONTROLLINGENTITY_OFFSET))(this);
	}

	static ::System::Boolean get_UseNativeBackend()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MONORENDERENTITY_GET_USENATIVEBACKEND_OFFSET))();
	}

	static ::System::Void set_UseNativeBackend(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MONORENDERENTITY_SET_USENATIVEBACKEND_OFFSET))(value);
	}

	::System::IntPtr get_NativeHandle()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_GET_NATIVEHANDLE_OFFSET))(this);
	}

	::System::Void CreateNativeObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_CREATENATIVEOBJECT_OFFSET))(this);
	}

	::System::Void DestroyNativeObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_DESTROYNATIVEOBJECT_OFFSET))(this);
	}

	::System::Void ApplyNativeBackend(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONORENDERENTITY_APPLYNATIVEBACKEND_OFFSET))(this, enable);
	}

	::System::Void SetupNative()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_SETUPNATIVE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONREALENABLE_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_AWAKE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONVALIDATE_OFFSET))(this);
	}

	::System::Void RegisterEntityForCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_REGISTERENTITYFORCG_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONUPDATE_OFFSET))(this);
	}

	::System::Void RegisterEntity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_REGISTERENTITY_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_ONDESTROY_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_CLEANUP_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_REFRESH_OFFSET))(this);
	}

	::System::Void ForceRefresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_FORCEREFRESH_OFFSET))(this);
	}

	::System::Void RefreshImpl(::System::Boolean force)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONORENDERENTITY_REFRESHIMPL_OFFSET))(this, force);
	}

	::System::Void SelfUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_SELFUPDATE_OFFSET))(this);
	}

	::Capsule ColliderToCapsule(::UnityEngine::NAPRenderPipeline0::NapCapsuleAoNodeBinding capsule)
	{
		return ((::Capsule(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::NapCapsuleAoNodeBinding))((::PBYTE)hIl2Cpp + MONORENDERENTITY_COLLIDERTOCAPSULE_OFFSET))(this, capsule);
	}

	::System::Void RecalculateCapsuleAOArrays()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_RECALCULATECAPSULEAOARRAYS_OFFSET))(this);
	}

	::System::Void CheckDamageDecalQuality()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_CHECKDAMAGEDECALQUALITY_OFFSET))(this);
	}

	::System::Void InitializeDamageDecalInfo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_INITIALIZEDAMAGEDECALINFO_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 CreateRandomZRotationMatrix(::System::Single angle)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONORENDERENTITY_CREATERANDOMZROTATIONMATRIX_OFFSET))(this, angle);
	}

	::System::Void SpawnDecal(::UnityEngine::Vector3 hitPoint, ::UnityEngine::Vector3 hitNormal, ::System::Single angle, ::System::Int32 decalType, ::System::Single decalLength, ::System::Single lifeTime, ::UnityEngine::Color emissionColor)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MONORENDERENTITY_SPAWNDECAL_OFFSET))(this, hitPoint, hitNormal, angle, decalType, decalLength, lifeTime, emissionColor);
	}

	::System::Void UpdateCellState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_UPDATECELLSTATE_OFFSET))(this);
	}

	::System::Int32 GetCellIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_GETCELLINDEX_OFFSET))(this);
	}

	::System::Void KillCell()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_KILLCELL_OFFSET))(this);
	}

	::System::Void UpdateMonsterMaterialParameters(::DamageDecalConfig* config, ::System::Int32 cellIndex, ::UnityEngine::Vector3 hitPoint, ::UnityEngine::Vector3 hitNormal, ::System::Single angle)
	{
		return ((::System::Void(*)(::PVOID, ::DamageDecalConfig*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MONORENDERENTITY_UPDATEMONSTERMATERIALPARAMETERS_OFFSET))(this, config, cellIndex, hitPoint, hitNormal, angle);
	}

	::System::Void ShuffleOverlayIndex(::System::Int32 cellIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONORENDERENTITY_SHUFFLEOVERLAYINDEX_OFFSET))(this, cellIndex);
	}

	::System::Void CleanupDecal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_CLEANUPDECAL_OFFSET))(this);
	}

	::System::Void FireDamageDecal(::UnityEngine::Vector3 hitPoint, ::UnityEngine::Vector3 hitNormal, ::System::Int32 decalType, ::System::Single decalAngle, ::System::Single decalLength, ::System::Boolean isOverrideLifeTime, ::System::Single overrideLifeTime, ::System::Boolean isOverrideColor, ::UnityEngine::Color overrideColor)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MONORENDERENTITY_FIREDAMAGEDECAL_OFFSET))(this, hitPoint, hitNormal, decalType, decalAngle, decalLength, isOverrideLifeTime, overrideLifeTime, isOverrideColor, overrideColor);
	}

	static ::System::Void DisableGlobalDamageDecal()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONORENDERENTITY_DISABLEGLOBALDAMAGEDECAL_OFFSET))();
	}

	static ::System::Void RecoverGlobalDamageDecal()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONORENDERENTITY_RECOVERGLOBALDAMAGEDECAL_OFFSET))();
	}

	::System::Void ValidateEntityVisibilityUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_VALIDATEENTITYVISIBILITYUPDATE_OFFSET))(this);
	}

	::System::Void InitGunEyes(::NapRenderEntity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::NapRenderEntity*))((::PBYTE)hIl2Cpp + MONORENDERENTITY_INITGUNEYES_OFFSET))(this, entity);
	}

	::System::Void SetGunEyeMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_SETGUNEYEMATERIAL_OFFSET))(this);
	}
};
