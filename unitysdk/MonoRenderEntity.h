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
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
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

#define MONORENDERENTITY_APPLYNATIVEBACKEND_OFFSET UNITYSDK_OFFSET(0x1B7E7A90)
#define MONORENDERENTITY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B7E8560)
#define MONORENDERENTITY_CHECKDAMAGEDECALQUALITY_OFFSET UNITYSDK_OFFSET(0x1B7E8EF0)
#define MONORENDERENTITY_CLEANUPDECAL_OFFSET UNITYSDK_OFFSET(0x1B7E89D0)
#define MONORENDERENTITY_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B7EA360)
#define MONORENDERENTITY_COLLIDERTOCAPSULE_OFFSET UNITYSDK_OFFSET(0x1B7EAE00)
#define MONORENDERENTITY_CREATENATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B7E78B0)
#define MONORENDERENTITY_CREATERANDOMZROTATIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1B7EC5E0)
#define MONORENDERENTITY_DESTROYNATIVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B7E79F0)
#define MONORENDERENTITY_DISABLEGLOBALDAMAGEDECAL_OFFSET UNITYSDK_OFFSET(0x1B7EE1F0)
#define MONORENDERENTITY_FIREDAMAGEDECAL_OFFSET UNITYSDK_OFFSET(0x1B7EDF70)
#define MONORENDERENTITY_FORCEREFRESH_OFFSET UNITYSDK_OFFSET(0x1B7EA6F0)
#define MONORENDERENTITY_GETCELLINDEX_OFFSET UNITYSDK_OFFSET(0x1B7ECE60)
#define MONORENDERENTITY_GET_ACTUALCONTROLLINGENTITY_OFFSET UNITYSDK_OFFSET(0x1B7E76B0)
#define MONORENDERENTITY_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B7E78A0)
#define MONORENDERENTITY_GET_USENATIVEBACKEND_OFFSET UNITYSDK_OFFSET(0x1B7E77E0)
#define MONORENDERENTITY_INITGUNEYES_OFFSET UNITYSDK_OFFSET(0x1B7E9120)
#define MONORENDERENTITY_INITIALIZEDAMAGEDECALINFO_OFFSET UNITYSDK_OFFSET(0x1B7EB5B0)
#define MONORENDERENTITY_KILLCELL_OFFSET UNITYSDK_OFFSET(0x1B7ECC00)
#define MONORENDERENTITY_ONCUSTOMLIGHTDIRECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1B7E74D0)
#define MONORENDERENTITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7EA4C0)
#define MONORENDERENTITY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B7E71B0)
#define MONORENDERENTITY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B7E6FA0)
#define MONORENDERENTITY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1B7E73D0)
#define MONORENDERENTITY_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B7E7430)
#define MONORENDERENTITY_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1B7E7270)
#define MONORENDERENTITY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1B7E7060)
#define MONORENDERENTITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B7E8CB0)
#define MONORENDERENTITY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B7E8950)
#define MONORENDERENTITY_PEROBJECTSHADOWFADEWITHHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B7EEC40)
#define MONORENDERENTITY_RECALCULATECAPSULEAOARRAYS_OFFSET UNITYSDK_OFFSET(0x1B7E8010)
#define MONORENDERENTITY_RECOVERGLOBALDAMAGEDECAL_OFFSET UNITYSDK_OFFSET(0x1B7EE620)
#define MONORENDERENTITY_REFRESHIMPL_OFFSET UNITYSDK_OFFSET(0x1B7EA650)
#define MONORENDERENTITY_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B7EA600)
#define MONORENDERENTITY_REGISTERENTITYFORCG_OFFSET UNITYSDK_OFFSET(0x1B7E8C60)
#define MONORENDERENTITY_REGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x1B7E86F0)
#define MONORENDERENTITY_RESETRENDERERSHADOWCASTER_OFFSET UNITYSDK_OFFSET(0x1B7EEAC0)
#define MONORENDERENTITY_SELFUPDATE_OFFSET UNITYSDK_OFFSET(0x1B7EA740)
#define MONORENDERENTITY_SETGUNEYEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B7EF160)
#define MONORENDERENTITY_SETUPNATIVE_OFFSET UNITYSDK_OFFSET(0x1B7E7B40)
#define MONORENDERENTITY_SET_USENATIVEBACKEND_OFFSET UNITYSDK_OFFSET(0x1B7E7840)
#define MONORENDERENTITY_SHUFFLEOVERLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1B7EDB00)
#define MONORENDERENTITY_SPAWNDECAL_OFFSET UNITYSDK_OFFSET(0x1B7EC830)
#define MONORENDERENTITY_SYNCWITHMONORENDERENTITYBUTTON_OFFSET UNITYSDK_OFFSET(0x1B7E7490)
#define MONORENDERENTITY_UPDATECELLSTATE_OFFSET UNITYSDK_OFFSET(0x1B7E8D10)
#define MONORENDERENTITY_UPDATEMONSTERMATERIALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B7ECF00)
#define MONORENDERENTITY_UPDATENATIVEPEROBJECTSHADOWRESOLVEALPHA_OFFSET UNITYSDK_OFFSET(0x1B7E7590)
#define MONORENDERENTITY_VALIDATEENTITYVISIBILITYUPDATE_OFFSET UNITYSDK_OFFSET(0x1B7E9080)
#define MONORENDERENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7EFBE0)
#define MONORENDERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EF810)

inline static constexpr unsigned int MonoRenderEntity_TypeDefinitionIndex = 27244;

class MonoRenderEntity : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MonoRenderEntity_MonsterDecalInfo*>** StaticGet_DamageDecalTargetsInfo()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::MonoRenderEntity_MonsterDecalInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x20A40);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitGunEyes()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x20A48);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_RecalculateCapsuleAOArrays()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x20A50);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitializeDamageDecalInfo()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x20A58);
	}
	static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet_cachedPairs()
	{
		return (::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x20A60);
	}
	static ::System::Boolean* StaticGet__UseNativeBackend_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x54E0);
	}
	static ::System::Boolean* StaticGet_modelReceiveDecal()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x54E1);
	}
	static ::System::Boolean* StaticGet_enableDamageDecalPerformanceTest()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x54E2);
	}
	static ::System::Int32* StaticGet_defaultDamageDecalLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderEntity_TypeDefinitionIndex)->GetStaticField(0x54E4);
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
	::System::Single perObjectShadowCullDistanceScale; // 0x70
	::System::Boolean shadowFadeWithHeight; // 0x74
	::System::Single fadeStartHeight; // 0x78
	::System::Single fadeEndHeight; // 0x7C
	::System::Single fadeStartDistance; // 0x80
	::System::Single fadeEndDistance; // 0x84
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShadowCastingMode>* _rendererShadowCastingModes; // 0x88
	::Il2CppArray<::UnityEngine::Renderer*>* perObjectShadowRenderer; // 0x90
	::System::Boolean needResetShadowCasting; // 0x98
	::System::Boolean rayCastForCullingSphere; // 0x99
	::System::Boolean perObjectShadowOptimizeSize; // 0x9A
	::System::Single perObjectShadowMaxBoundsSize; // 0x9C
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* perObjectShadowLowPriorityRenderers; // 0xA0
	::UnityEngine::Vector4 headSphereNormalCenter; // 0xA8
	::Il2CppArray<::UnityEngine::Renderer*>* lodIndexedRenderers; // 0xB8
	::System::Boolean isOrderedRenderers; // 0xC0
	::Il2CppArray<::UnityEngine::Renderer*>* lodRenderers; // 0xC8
	::Il2CppArray<::System::Int32>* lodRendererPartIdOffsets; // 0xD0
	::UnityEngine::SkinnedMeshRenderer* gunEyeRenderer; // 0xD8
	::UnityEngine::Transform* gunEyeBoneL; // 0xE0
	::UnityEngine::Transform* gunEyeBoneR; // 0xE8
	::System::Int32 gunEyeState; // 0xF0
	::NapRenderer* gunEyeNapRenderer; // 0xF8
	::NapMaterial* gunEyeNapMaterial; // 0x100
	::System::Int32 gunEyeNapMaterialIndex; // 0x108
	::System::Int32 gunEyeStateCtlIndex; // 0x10C
	::System::Boolean useCustomBlendedDirectionalLightSize; // 0x110
	::System::Single customBlendedDirectionalLightSize; // 0x114
	::System::Boolean fixRed; // 0x118
	::System::Boolean preferPerMaterialMpb; // 0x119
	::System::Boolean preferPerRendererMpb; // 0x11A
	::System::Boolean selfActivate; // 0x11B
	::System::Boolean forceInShadow; // 0x11C
	::System::Boolean initialized; // 0x11D
	::NapRenderEntity* NapRenderEntity; // 0x120
	::System::IntPtr m_NativeHandle; // 0x128
	::Il2CppArray<::UnityEngine::NAPRenderPipeline0::NapCapsuleAoNodeBinding>* elements; // 0x130
	::System::Single capsuleAORadius; // 0x138
	::Il2CppArray<::Capsule>* Capsules; // 0x140
	::Character thisChar; // 0x148
	::System::Int32 Index; // 0x164
	::System::Int32 _DamageDecalInfo; // 0x168
	::System::Int32 _DamageDecalInfo2; // 0x16C
	::System::Int32 _DamageDecalEmissionColor; // 0x170
	::System::Int32 _DamageDecalKillIndex; // 0x174
	::System::Int32 _DecalFadeDistance; // 0x178
	::System::Int32 _DecalUVSet; // 0x17C
	::System::Int32 _CellSize; // 0x180
	::System::Int32 _DecalProjectionNormal; // 0x184
	::System::Int32 _IsHit; // 0x188
	::System::Int32 _DamageDecalArray; // 0x18C
	::System::Boolean enableDamageDecal; // 0x190
	::MonoRenderEntity_DecalResolution decalResolution; // 0x194
	::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* decalModelList; // 0x198
	::System::Collections::Generic::List_1<::MonoRenderEntity_UVSet>* decalUVList; // 0x1A0
	::System::Single decalWidthFactor; // 0x1A8
	::System::Single decalHeightFactor; // 0x1AC
	::System::Single decalDepthFactor; // 0x1B0
	::System::Single decalLifetimeFactor; // 0x1B4
	::System::Boolean decalUseCustomColor; // 0x1B8
	::UnityEngine::Color decalDamageColor; // 0x1BC
	::System::Single decalFadeDistance; // 0x1CC
	::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* pipelineAsset; // 0x1D0
	::UnityEngine::Rendering::Universal::ForwardRendererData* forwardRendererData; // 0x1D8
	::Il2CppArray<::DamageDecalConfig*>* decalConfigs; // 0x1E0
	::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* skinnedMeshRenderers; // 0x1E8
	::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* matBlocks; // 0x1F0
	::System::Int32 decalTypeCount; // 0x1F8
	::System::Int32 currentDecalCount; // 0x1FC
	::System::Int32 decalCellIndex; // 0x200
	::System::Collections::BitArray* decalCellOccupied; // 0x208
	::System::Int32 maxDecals; // 0x210
	::System::Int32 decalKillThreshold; // 0x214
	::System::Int32 decalCellSize; // 0x218
	::System::Single decalWidth; // 0x21C
	::System::Single decalHeight; // 0x220
	::System::Single decalDepth; // 0x224
	::System::Boolean finishDrawDecalLUT; // 0x228
	::Il2CppArray<::System::Single>* decalCellLifeTime; // 0x230
	::Il2CppArray<::System::Single>* decalCellKillTime; // 0x238
	::Il2CppArray<::UnityEngine::Color>* decalCellEmissionColor; // 0x240
	::System::Boolean decalFinishInit; // 0x248
	::UnityEngine::Material* decalMaterial; // 0x250
	::Il2CppArray<::System::Int32>* decalCellOverlayIndex; // 0x258
	::MonoRenderEntity_MonsterDecalInfo* decalTargetInfo; // 0x260
	::UnityEngine::RenderTexture* decalDilationLUT; // 0x268
	::Il2CppArray<::UnityEngine::Vector4>* damageDecalInfoData; // 0x270
	::Il2CppArray<::UnityEngine::Vector4>* damageDecalInfoData2; // 0x278
	::Il2CppArray<::System::Single>* damageDecalAngle; // 0x280
	::UnityEngine::Rendering::Universal::GraphicSettings_EDamageDecalQuality damageDecalQuality; // 0x288
	::System::Boolean napRenderEntityVisible; // 0x28C

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

	::System::Void ResetRendererShadowCaster()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_RESETRENDERERSHADOWCASTER_OFFSET))(this);
	}

	::System::Void PerObjectShadowFadeWithHeight()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONORENDERENTITY_PEROBJECTSHADOWFADEWITHHEIGHT_OFFSET))(this);
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
