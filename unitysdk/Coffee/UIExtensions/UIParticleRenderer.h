#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CombineInstance.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Texture; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET UNITYSDK_OFFSET(0x119E8E80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CULL_OFFSET UNITYSDK_OFFSET(0x119EE1E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x119EBDF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x119ED460)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET UNITYSDK_OFFSET(0x119EC420)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x119EACE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x119E4330)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x119EAE70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x119EAE80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x119EBD70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x119EBBB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x119E61B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x119EC730)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x119E8E20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET UNITYSDK_OFFSET(0x119E65C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x119ECBE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x119EE1D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x119EDDC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x119E7630)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x119EE690)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x119EE610)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_TypeDefinitionIndex = 34896;

	class UIParticleRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::Il2CppArray<::UnityEngine::CombineInstance>** StaticGet_s_CombineInstances()
		{
			return (::Il2CppArray<::UnityEngine::CombineInstance>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0xFB0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_Materials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0xFB8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0xFC0);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_Mpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0xFC8);
		}
		::System::Boolean _delay; // 0xF0
		::System::Int32 _index; // 0xF4
		::System::Boolean _isPrevStored; // 0xF8
		::System::Boolean _isTrail; // 0xF9
		::UnityEngine::Bounds _lastBounds; // 0xFC
		::UnityEngine::Material* _materialForRendering; // 0x118
		::UnityEngine::Material* _modifiedMaterial; // 0x120
		::Coffee::UIExtensions::UIParticle* _parent; // 0x128
		::UnityEngine::ParticleSystem* _particleSystem; // 0x130
		::System::Single _prevCanvasScale; // 0x138
		::UnityEngine::Vector3 _prevPsPos; // 0x13C
		::UnityEngine::Vector3 _prevScale; // 0x148
		::UnityEngine::Vector2Int _prevScreenSize; // 0x154
		::System::Boolean _preWarm; // 0x15C
		::UnityEngine::ParticleSystemRenderer* _renderer; // 0x160
		::UnityEngine::ParticleSystem* _mainEmitter; // 0x168

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

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void Reset(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET))(this, index);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET))(this);
		}

		static ::Coffee::UIExtensions::UIParticleRenderer* AddRenderer(::Coffee::UIExtensions::UIParticle* parent, ::System::Int32 index)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer*(*)(::Coffee::UIExtensions::UIParticle*, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET))(parent, index);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void Set(::Coffee::UIExtensions::UIParticle* parent, ::UnityEngine::ParticleSystem* ps, ::System::Boolean isTrail, ::UnityEngine::ParticleSystem* mainEmitter)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET))(this, parent, ps, isTrail, mainEmitter);
		}

		::System::Void UpdateMesh(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET))(this, bakeCamera);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CULL_OFFSET))(this, clipRect, validRect);
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
	};
}
