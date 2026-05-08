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

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET UNITYSDK_OFFSET(0x1B57FE40)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B584BB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETUIPARTICLEOPTSTATE_OFFSET UNITYSDK_OFFSET(0x1B585170)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1B586A10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET UNITYSDK_OFFSET(0x1B5859C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B5770F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1B5831D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1B5831E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B584930)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B584880)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B584530)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x1B579DE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1B585B90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET UNITYSDK_OFFSET(0x1B57A3F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1B5861F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B587410)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B587050)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1B57C4E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1B57F800)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B587D20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B587D10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B587F50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B587EF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B587F60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B587F70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B587F80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B587F90)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_TypeDefinitionIndex = 32676;

	class UIParticleRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet_s_Renderers()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x25E30);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_Mpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x25E38);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_Materials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x25E40);
		}
		static ::Il2CppArray<::UnityEngine::CombineInstance>** StaticGet_s_CombineInstances()
		{
			return (::Il2CppArray<::UnityEngine::CombineInstance>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x25E48);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x25E50);
		}
		static ::System::Int32* StaticGet__CanvasMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x7E60);
		}
		static ::System::Int32* StaticGet__CombineMeshMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x7E64);
		}
		static ::System::Int32* StaticGet__UITransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x7E68);
		}
		static ::System::Int32* StaticGet__MultipliedColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x7E6C);
		}
		static ::System::Int32* StaticGet__BakeCameraTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x7E70);
		}
		static ::System::Int32* StaticGet__ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x7E74);
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
		::System::Boolean _lastOptState; // 0x178
		::System::Boolean _initResetKeyword; // 0x179
		::System::Boolean disableOpt; // 0x17A

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

		::System::Void __base_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET))(this);
		}
	};
}
