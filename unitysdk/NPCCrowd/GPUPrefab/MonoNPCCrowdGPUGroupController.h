#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/GPUPrefab/MonoNPCCrowdGPUGroupController_EGPULodState.h"
#include "unitysdk/NPCCrowd/GPUPrefab/MonoNPCCrowdGPUGroupController_NPCChildData.h"
#include "unitysdk/NPCCrowd/GPUPrefab/MonoNPCCrowdGPUGroupController_RendererMaterialPair.h"
#include "unitysdk/NPCCrowd/Lod/CrowdLODDistanceSetting.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALLINSTANCEPROPSTORENDERERS_OFFSET UNITYSDK_OFFSET(0xE02C520)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALLINSTANCEPROPSTORENDERER_OFFSET UNITYSDK_OFFSET(0xE02C6F0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALPHATOLOD_OFFSET UNITYSDK_OFFSET(0xE02D660)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALPHATORENDERER_OFFSET UNITYSDK_OFFSET(0xE02D7D0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYANIMPARAMSVIARENDERERMPB_OFFSET UNITYSDK_OFFSET(0xE02AEA0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYDITHERMATSTORENDERER_OFFSET UNITYSDK_OFFSET(0xE02D830)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYDITHERTORENDERERS_OFFSET UNITYSDK_OFFSET(0xE02C350)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYLODSTATE_OFFSET UNITYSDK_OFFSET(0xE02AD10)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYNORMALMATSTORENDERER_OFFSET UNITYSDK_OFFSET(0xE02DB40)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_BEGINTRANSITION_OFFSET UNITYSDK_OFFSET(0xE02CFB0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_CONFIGUREGPUCROWDSHADERPASSES_OFFSET UNITYSDK_OFFSET(0xE02ABC0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_CONFIGUREMATSFORGPUCROWD_OFFSET UNITYSDK_OFFSET(0xE02B270)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_EVALUATETARGETLOD_OFFSET UNITYSDK_OFFSET(0xE02BE90)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_FINISHTRANSITION_OFFSET UNITYSDK_OFFSET(0xE02CEB0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_GETRENDERERMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0xE02C690)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE02A750)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_INITMATERIALANIMPARAMS_OFFSET UNITYSDK_OFFSET(0xE02AAA0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xE02B4D0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_MAPTOGPULODSTATE_OFFSET UNITYSDK_OFFSET(0xE02CE60)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE02AA40)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE02A6E0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_SETLODGOACTIVE_OFFSET UNITYSDK_OFFSET(0xE02D120)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_SWITCHTODITHERMATERIALS_OFFSET UNITYSDK_OFFSET(0xE02D400)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_SWITCHTONORMALMATERIALS_OFFSET UNITYSDK_OFFSET(0xE02D530)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATECAMERADITHER_OFFSET UNITYSDK_OFFSET(0xE02C0F0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATECROSSFADE_OFFSET UNITYSDK_OFFSET(0xE02C050)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATELODTARGET_OFFSET UNITYSDK_OFFSET(0xE02BF90)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATEPREVIOUSMATRIX_OFFSET UNITYSDK_OFFSET(0xE02BDB0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE02DEA0)
#define NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE02DE50)

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int MonoNPCCrowdGPUGroupController_TypeDefinitionIndex = 47429;

	class MonoNPCCrowdGPUGroupController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::MaterialPropertyBlock** StaticGet__sharedMPB()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(MonoNPCCrowdGPUGroupController_TypeDefinitionIndex)->GetStaticField(0x4A2F0);
		}
		static ::System::Int32* StaticGet_SHADERID_PREV_MATRIX_ROW2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCCrowdGPUGroupController_TypeDefinitionIndex)->GetStaticField(0x11860);
		}
		static ::System::Int32* StaticGet_SHADERID_PREV_MATRIX_ROW1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCCrowdGPUGroupController_TypeDefinitionIndex)->GetStaticField(0x11864);
		}
		static ::System::Int32* StaticGet_SHADERID_PREV_MATRIX_ROW0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCCrowdGPUGroupController_TypeDefinitionIndex)->GetStaticField(0x11868);
		}
		static ::System::Int32* StaticGet_SHADERID_USE_CLIP_GRANULAR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCCrowdGPUGroupController_TypeDefinitionIndex)->GetStaticField(0x1186C);
		}
		static ::System::Int32* StaticGet_SHADERID_DITHER_ALPHA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoNPCCrowdGPUGroupController_TypeDefinitionIndex)->GetStaticField(0x11870);
		}
		// static const ::System::String* CLIPPED_FX_KEYWORD; // 0x0
		// static const ::System::String* GPUI_CROWD_INSTANCING_KEYWORD; // 0x0
		// static const ::System::Single CAMERA_DITHER_FADE_OUT_DISTANCE; // 0x0
		// static const ::System::Single CAMERA_DITHER_FADE_IN_DISTANCE; // 0x0
		// static const ::System::Single CAMERA_DITHER_PREPARE_DELAY; // 0x0
		// static const ::System::Single CAMERA_DITHER_MIN_ALPHA; // 0x0
		// static const ::System::Single NPC_DITHER_HEIGHT_OFFSET; // 0x0
		::Il2CppArray<::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData>* children; // 0x18
		::System::Single _fadeSpeed; // 0x20
		::System::Boolean _bInitialized; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_INITIALIZE_OFFSET))(this);
		}

		static ::System::Void InitMaterialAnimParams(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_INITMATERIALANIMPARAMS_OFFSET))(child);
		}

		static ::System::Void ApplyAnimParamsViaRendererMPB(::UnityEngine::Renderer* renderer, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYANIMPARAMSVIARENDERERMPB_OFFSET))(renderer, child);
		}

		static ::System::Void ConfigureGpuCrowdShaderPasses(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_CONFIGUREGPUCROWDSHADERPASSES_OFFSET))(child);
		}

		static ::System::Void ConfigureMatsForGpuCrowd(::Il2CppArray<::UnityEngine::Material*>* mats)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_CONFIGUREMATSFORGPUCROWD_OFFSET))(mats);
		}

		::System::Void ManualUpdate(::System::Single deltaTime, ::UnityEngine::Vector3 cameraPos, ::NPCCrowd::Lod::CrowdLODDistanceSetting lodSetting)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::NPCCrowd::Lod::CrowdLODDistanceSetting))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_MANUALUPDATE_OFFSET))(this, deltaTime, cameraPos, lodSetting);
		}

		static ::System::Void UpdatePreviousMatrix(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATEPREVIOUSMATRIX_OFFSET))(child);
		}

		static ::System::Int32 GetRendererMaterialCount(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair& pair)
		{
			return ((::System::Int32(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_GETRENDERERMATERIALCOUNT_OFFSET))(pair);
		}

		static ::System::Void ApplyAllInstancePropsToRenderers(::Il2CppArray<::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair>* renderers, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::Il2CppArray<::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair>*, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALLINSTANCEPROPSTORENDERERS_OFFSET))(renderers, child);
		}

		static ::System::Void ApplyAllInstancePropsToRenderer(::UnityEngine::Renderer* renderer, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::System::Int32 matCount)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALLINSTANCEPROPSTORENDERER_OFFSET))(renderer, child, matCount);
		}

		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState EvaluateTargetLod(::System::Single distanceM, ::NPCCrowd::Lod::CrowdLODDistanceSetting lodSetting)
		{
			return ((::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState(*)(::PVOID, ::System::Single, ::NPCCrowd::Lod::CrowdLODDistanceSetting))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_EVALUATETARGETLOD_OFFSET))(this, distanceM, lodSetting);
		}

		static ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState MapToGPULodState(::NPCCrowd::Lod::ELODLevel level)
		{
			return ((::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState(*)(::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_MAPTOGPULODSTATE_OFFSET))(level);
		}

		::System::Void UpdateLODTarget(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState newTarget)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATELODTARGET_OFFSET))(this, child, newTarget);
		}

		::System::Void BeginTransition(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_BEGINTRANSITION_OFFSET))(this, child);
		}

		::System::Void UpdateCrossFade(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATECROSSFADE_OFFSET))(this, child, deltaTime);
		}

		::System::Void FinishTransition(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_FINISHTRANSITION_OFFSET))(this, child);
		}

		::System::Void UpdateCameraDither(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::System::Single cameraDistance, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_UPDATECAMERADITHER_OFFSET))(this, child, cameraDistance, deltaTime);
		}

		::System::Void ApplyDitherToRenderers(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYDITHERTORENDERERS_OFFSET))(this, child);
		}

		static ::System::Void ApplyAlphaToLod(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState lod, ::System::Single alpha)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALPHATOLOD_OFFSET))(child, lod, alpha);
		}

		static ::System::Void ApplyAlphaToRenderer(::UnityEngine::Renderer* renderer, ::System::Single alpha)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYALPHATORENDERER_OFFSET))(renderer, alpha);
		}

		static ::System::Void SwitchToDitherMaterials(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState lod)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_SWITCHTODITHERMATERIALS_OFFSET))(child, lod);
		}

		static ::System::Void ApplyDitherMatsToRenderer(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair& pair)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYDITHERMATSTORENDERER_OFFSET))(pair);
		}

		static ::System::Void SwitchToNormalMaterials(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState lod)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_SWITCHTONORMALMATERIALS_OFFSET))(child, lod);
		}

		static ::System::Void ApplyNormalMatsToRenderer(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair& pair)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair&))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYNORMALMATSTORENDERER_OFFSET))(pair);
		}

		static ::System::Void SetLodGOActive(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState lod, ::System::Boolean active)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_SETLODGOACTIVE_OFFSET))(child, lod, active);
		}

		static ::System::Void ApplyLodState(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData& child, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState lod, ::System::Boolean useDither)
		{
			return ((::System::Void(*)(::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_NPCChildData&, ::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_MONONPCCROWDGPUGROUPCONTROLLER_APPLYLODSTATE_OFFSET))(child, lod, useDither);
		}
	};
}
