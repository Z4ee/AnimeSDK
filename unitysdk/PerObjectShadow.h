#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IntegerRectangle.h"
#include "unitysdk/PerObjectShadow___c__DisplayClass35_0.h"
#include "unitysdk/PerObjectShadow___c__DisplayClass35_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawPerObjectShadowParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PerObjectShadowResolveData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CSharpPerObjectShadowSettings;
class IPerObjectShadowEntity;
class NapRenderEntity;
class RectanglePacker;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine::NAPRenderPipeline0 { class CameraCacheData; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class MonoPerObjectShadow; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define PEROBJECTSHADOW_ACTIVECULLINGFORMONOPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1A2EC370)
#define PEROBJECTSHADOW_ACTIVECULLINGFORNAPRENDERENTITY_OFFSET UNITYSDK_OFFSET(0x1A2EB1A0)
#define PEROBJECTSHADOW_CASTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1A2ED3A0)
#define PEROBJECTSHADOW_CULLENTITY_OFFSET UNITYSDK_OFFSET(0x1A2EBAB0)
#define PEROBJECTSHADOW_FINDMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x1A2EE2A0)
#define PEROBJECTSHADOW_FRUSTUMCULLING_OFFSET UNITYSDK_OFFSET(0x1A2EE5E0)
#define PEROBJECTSHADOW_GETSCREENSPACEDRAWPARAMS_OFFSET UNITYSDK_OFFSET(0x1A2F08C0)
#define PEROBJECTSHADOW_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1A2E9F60)
#define PEROBJECTSHADOW_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A2E9EB0)
#define PEROBJECTSHADOW_GET_USESHADOWPROXY_OFFSET UNITYSDK_OFFSET(0x1A2E9F70)
#define PEROBJECTSHADOW_PREPARERENDERDATA_OFFSET UNITYSDK_OFFSET(0x1A2EE820)
#define PEROBJECTSHADOW_SETPARTMASKTOSHADOWPROXYWHENUSINGCSM_OFFSET UNITYSDK_OFFSET(0x1A2ED160)
#define PEROBJECTSHADOW_SORTENTITIES_OFFSET UNITYSDK_OFFSET(0x1A2EC9C0)
#define PEROBJECTSHADOW_UPDATEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1A2F0930)
#define PEROBJECTSHADOW_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x1A2EA250)
#define PEROBJECTSHADOW__ACTIVECULLINGFORNAPRENDERENTITY_G__GETISACTIVEANDENABLED_35_0_OFFSET UNITYSDK_OFFSET(0x1A2EE0A0)
#define PEROBJECTSHADOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F0FC0)
#define PEROBJECTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EA0B0)

inline static constexpr unsigned int PerObjectShadow_TypeDefinitionIndex = 29622;

class PerObjectShadow : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SetRendererStates()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24860);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_ProcessFading()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24868);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_CheckRendererVisibility()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24870);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleRegularCulling()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24878);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SortEntities()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24880);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleFindMainLight()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24888);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePerObjectShadowEditorOnly()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24890);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePerObjectShadow()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x24898);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleFrustumCulling()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248A0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_BeforeGetScreenSpaceDrawParams()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248A8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_AfterGetScreenSpaceDrawParams()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248B0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_CalculateFrustumPlanes()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248B8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_UpdatePerObjectShadow()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248C0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleObjectShadow()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248C8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_CullEntity()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248D0);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePerObjectShadowUpdateTargets()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248D8);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePrepareForCulling()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x248E0);
	}
	static ::System::Boolean* StaticGet_DebugPause()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x7540);
	}
	::RectanglePacker* _packer; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::PerObjectShadowResolveData>* resolveData; // 0x18
	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* m_Entities; // 0x20
	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* m_PreviousEntities; // 0x28
	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* sortList; // 0x30
	::System::Int32 listCount; // 0x38
	::IntegerRectangle _rect; // 0x3C
	::UnityEngine::Vector2 atlasSize; // 0x5C

	::System::Void _ctor(::CSharpPerObjectShadowSettings* setting)
	{
		return ((::System::Void(*)(::PVOID, ::CSharpPerObjectShadowSettings*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW__CTOR_OFFSET))(this, setting);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW__CCTOR_OFFSET))();
	}

	static ::PerObjectShadow* get_instance()
	{
		return ((::PerObjectShadow*(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_INSTANCE_OFFSET))();
	}

	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* get_Entities()
	{
		return ((::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_ENTITIES_OFFSET))(this);
	}

	::System::Boolean get_UseShadowProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_USESHADOWPROXY_OFFSET))(this);
	}

	::System::Void UpdateTargets(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_UPDATETARGETS_OFFSET))(this, camera, renderingData, postCullRenderingData);
	}

	static ::System::Void SetPartMaskToShadowProxyWhenUsingCSM(::CSharpPerObjectShadowSettings* settings, ::IPerObjectShadowEntity* entity)
	{
		return ((::System::Void(*)(::CSharpPerObjectShadowSettings*, ::IPerObjectShadowEntity*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_SETPARTMASKTOSHADOWPROXYWHENUSINGCSM_OFFSET))(settings, entity);
	}

	::System::Boolean ActiveCullingForNapRenderEntity(::NapRenderEntity* entity, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset, ::CSharpPerObjectShadowSettings* setting, ::System::Boolean disableCulling, ::UnityEngine::NAPRenderPipeline0::CameraCacheData* cacheData)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderEntity*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::CSharpPerObjectShadowSettings*, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::CameraCacheData*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_ACTIVECULLINGFORNAPRENDERENTITY_OFFSET))(this, entity, asset, setting, disableCulling, cacheData);
	}

	::System::Boolean ActiveCullingForMonoPerObjectShadow(::UnityEngine::Rendering::Universal::MonoPerObjectShadow* entity, ::CSharpPerObjectShadowSettings* setting, ::UnityEngine::Camera* camera)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::MonoPerObjectShadow*, ::CSharpPerObjectShadowSettings*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_ACTIVECULLINGFORMONOPEROBJECTSHADOW_OFFSET))(this, entity, setting, camera);
	}

	::System::Void CullEntity(::IPerObjectShadowEntity* entity, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset, ::System::Boolean fade)
	{
		return ((::System::Void(*)(::PVOID, ::IPerObjectShadowEntity*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_CULLENTITY_OFFSET))(this, entity, asset, fade);
	}

	static ::UnityEngine::Light* FindMainLight()
	{
		return ((::UnityEngine::Light*(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_FINDMAINLIGHT_OFFSET))();
	}

	::System::Boolean FrustumCulling(::IPerObjectShadowEntity* entity, ::Il2CppArray<::UnityEngine::Plane>* cullingPlanes)
	{
		return ((::System::Boolean(*)(::PVOID, ::IPerObjectShadowEntity*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_FRUSTUMCULLING_OFFSET))(this, entity, cullingPlanes);
	}

	::System::Void PrepareRenderData(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::CSharpPerObjectShadowSettings* setting)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::CSharpPerObjectShadowSettings*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_PREPARERENDERDATA_OFFSET))(this, postCullRenderingData, setting);
	}

	static ::System::Void SortEntities(::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* entities, ::System::Int32 maxDrawCount, ::UnityEngine::Camera* camera)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>*, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_SORTENTITIES_OFFSET))(entities, maxDrawCount, camera);
	}

	::System::Void CastPerObjectShadow(::CSharpPerObjectShadowSettings* settings, ::IPerObjectShadowEntity* entity, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::CSharpPerObjectShadowSettings*, ::IPerObjectShadowEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_CASTPEROBJECTSHADOW_OFFSET))(this, settings, entity, enable);
	}

	::System::Void GetScreenSpaceDrawParams(::UnityEngine::NAPRenderPipeline0::DrawPerObjectShadowParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawPerObjectShadowParams&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GETSCREENSPACEDRAWPARAMS_OFFSET))(this, p);
	}

	::System::Void UpdatePerObjectShadow(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_UPDATEPEROBJECTSHADOW_OFFSET))(this, postCullRenderingData);
	}

	static ::System::Boolean _ActiveCullingForNapRenderEntity_g__GetIsActiveAndEnabled_35_0(::PerObjectShadow___c__DisplayClass35_0& a1, ::PerObjectShadow___c__DisplayClass35_1& a2)
	{
		return ((::System::Boolean(*)(::PerObjectShadow___c__DisplayClass35_0&, ::PerObjectShadow___c__DisplayClass35_1&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW__ACTIVECULLINGFORNAPRENDERENTITY_G__GETISACTIVEANDENABLED_35_0_OFFSET))(a1, a2);
	}
};
