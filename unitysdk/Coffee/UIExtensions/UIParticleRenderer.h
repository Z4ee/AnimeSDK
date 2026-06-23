#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CombineInstance.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStream.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleRenderer_OverrideEntry; }
namespace Coffee::UIExtensions { class UIParticleRenderer_RendererMaterialEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Texture; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIRERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7DABF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET UNITYSDK_OFFSET(0x1D7D4710)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYREQUIREDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1D7DA2A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATEONMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7DA9C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATE_OFFSET UNITYSDK_OFFSET(0x1D7D8AB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1D7D96A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7DAF70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETUIPARTICLEOPTSTATE_OFFSET UNITYSDK_OFFSET(0x1D7DB530)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1D7DCDD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET UNITYSDK_OFFSET(0x1D7DBD80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D7CB740)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1D7D7AA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1D7D7AB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7DA170)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D7D9F30)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D7D9D60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D7D98A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7DA0C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1D7DA220)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHCLIPANCESTOR_OFFSET UNITYSDK_OFFSET(0x1D7D9C00)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7D8E80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x1D7CE430)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1D7DBF50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESTOREVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1D7DA6F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET UNITYSDK_OFFSET(0x1D7CEB50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1D7DC5B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_START_OFFSET UNITYSDK_OFFSET(0x1D7D9830)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1D7DD7D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D7DD410)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1D7D0B40)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1D7D4060)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE0E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DE0D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D7DE500)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D7DE4A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7DE510)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D7DE5E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D7DE5F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D7DE600)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7DE610)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1D7DE6E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1D7DE770)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1D7DE800)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_TypeDefinitionIndex = 34227;

	class UIParticleRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::Il2CppArray<::UnityEngine::CombineInstance>** StaticGet_s_CombineInstances()
		{
			return (::Il2CppArray<::UnityEngine::CombineInstance>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_RendererMaterialEntry*>** StaticGet_s_RendererMaterialEntries()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_RendererMaterialEntry*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278A8);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet_s_Renderers()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278B0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_OverrideEntry*>** StaticGet_s_OverrideEntries()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::Coffee::UIExtensions::UIParticleRenderer_OverrideEntry*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278C0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_Materials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278C8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>** StaticGet_s_RequiredStreams()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278D0);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_Mpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x278D8);
		}
		static ::System::Int32* StaticGet__MultipliedColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8310);
		}
		static ::System::Int32* StaticGet__ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8314);
		}
		static ::System::Int32* StaticGet__UITransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8318);
		}
		static ::System::Int32* StaticGet__BakeCameraTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x831C);
		}
		static ::System::Int32* StaticGet__CombineMeshMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8320);
		}
		static ::System::Int32* StaticGet__CanvasMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8324);
		}
		::UnityEngine::Material* _currentMaterialForRendering; // 0xF8
		::System::Boolean _delay; // 0x100
		::System::Int32 _index; // 0x104
		::System::Boolean _isTrail; // 0x108
		::UnityEngine::Bounds _lastBounds; // 0x10C
		::UnityEngine::Material* _modifiedMaterial; // 0x128
		::Coffee::UIExtensions::UIParticle* _parent; // 0x130
		::UnityEngine::ParticleSystem* _particleSystem; // 0x138
		::System::Int32 _prevParticleCount; // 0x140
		::UnityEngine::Vector3 _prevPsPos; // 0x144
		::UnityEngine::Vector3 _prevScale; // 0x150
		::UnityEngine::Vector2Int _prevScreenSize; // 0x15C
		::System::Boolean _prewarm; // 0x164
		::UnityEngine::ParticleSystemRenderer* _renderer; // 0x168
		::UnityEngine::Material* _rendererMaterial; // 0x170
		::System::Boolean _rendererMaterialAcquired; // 0x178
		::System::Boolean _lastOptState; // 0x179
		::System::Boolean _initResetKeyword; // 0x17A
		::System::Boolean disableOpt; // 0x17B
		::System::Boolean _hasClipAncestor; // 0x17C
		::System::Boolean _streamsOverridden; // 0x17D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_raycastTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET))(this);
		}

		::UnityEngine::Rect get_rootCanvasRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET))(this);
		}

		::System::Void Reset(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET))(this, index);
		}

		::System::Void EnableUIVertexColorCalc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void RefreshClipAncestor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHCLIPANCESTOR_OFFSET))(this);
		}

		::System::Void ApplyRequiredVertexStreams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYREQUIREDVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void RestoreVertexStreams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESTOREVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void CleanupOptStateOnMaterial(::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATEONMATERIAL_OFFSET))(this, m);
		}

		::System::Void AcquireRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIRERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void ReleaseRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void CleanupOptState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATE_OFFSET))(this);
		}

		static ::Coffee::UIExtensions::UIParticleRenderer* AddRenderer(::Coffee::UIExtensions::UIParticle* parent, ::System::Int32 index)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer*(*)(::Coffee::UIExtensions::UIParticle*, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET))(parent, index);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Boolean GetUIParticleOptState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETUIPARTICLEOPTSTATE_OFFSET))(this);
		}

		::System::Void Set(::Coffee::UIExtensions::UIParticle* parent, ::UnityEngine::ParticleSystem* ps, ::System::Boolean isTrail)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*, ::UnityEngine::ParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET))(this, parent, ps, isTrail);
		}

		::System::Void UpdateMesh(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET))(this, bakeCamera);
		}

		::System::Void UpdateParticleCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEPARTICLECOUNT_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetWorldScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldMatrix(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET))(this, psPos, scale);
		}

		::System::Void ResolveResolutionChange(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET))(this, psPos, scale);
		}

		::System::Void Simulate(::UnityEngine::Vector3 scale, ::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET))(this, scale, paused);
		}

		::System::Void UpdateMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* __base_GetModifiedMaterial(::UnityEngine::Material* P0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GETMODIFIEDMATERIAL_OFFSET))(this, P0);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_START_OFFSET))(this);
		}

		::System::Void __base_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET))(this);
		}
	};
}
