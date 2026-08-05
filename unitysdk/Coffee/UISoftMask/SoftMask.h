#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UISoftMask/SoftMask_DownSamplingRate.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/Mask.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class VertexHelper; }

#define COFFEE_UISOFTMASK_SOFTMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F8DB300)
#define COFFEE_UISOFTMASK_SOFTMASK_GETDOWNSAMPLINGSIZE_OFFSET UNITYSDK_OFFSET(0x1F8DAE50)
#define COFFEE_UISOFTMASK_SOFTMASK_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F8DB8B0)
#define COFFEE_UISOFTMASK_SOFTMASK_GETPIXELVALUE_OFFSET UNITYSDK_OFFSET(0x1F8DBCB0)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x1F8DA280)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_DOWNSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x1F8DA080)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1F8DAF80)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_IGNOREPARENT_OFFSET UNITYSDK_OFFSET(0x1F8DA2C0)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_IGNORESELFGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F8DB0E0)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_IGNORESELFSTENCIL_OFFSET UNITYSDK_OFFSET(0x1F8DB1A0)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1F8DB5A0)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1F8DB6F0)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1F8DB0D0)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_PARTOFPARENT_OFFSET UNITYSDK_OFFSET(0x1F8DA600)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_SOFTMASKBUFFER_OFFSET UNITYSDK_OFFSET(0x1F8DA640)
#define COFFEE_UISOFTMASK_SOFTMASK_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1F8DA200)
#define COFFEE_UISOFTMASK_SOFTMASK_ISRAYCASTLOCATIONVALID_1_OFFSET UNITYSDK_OFFSET(0x1F8DC3D0)
#define COFFEE_UISOFTMASK_SOFTMASK_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0x1F8DBA40)
#define COFFEE_UISOFTMASK_SOFTMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F8DB3A0)
#define COFFEE_UISOFTMASK_SOFTMASK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F8DC9E0)
#define COFFEE_UISOFTMASK_SOFTMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F8DC3E0)
#define COFFEE_UISOFTMASK_SOFTMASK_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1F8DA300)
#define COFFEE_UISOFTMASK_SOFTMASK_REGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F8DC920)
#define COFFEE_UISOFTMASK_SOFTMASK_RELEASEOBJECT_OFFSET UNITYSDK_OFFSET(0x1F8DD5F0)
#define COFFEE_UISOFTMASK_SOFTMASK_RELEASERT_OFFSET UNITYSDK_OFFSET(0x1F8DAD00)
#define COFFEE_UISOFTMASK_SOFTMASK_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1F8DD0E0)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_BORDER_OFFSET UNITYSDK_OFFSET(0x1F8DA290)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_DOWNSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x1F8DA090)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1F8DA0B0)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_IGNOREPARENT_OFFSET UNITYSDK_OFFSET(0x1F8DA2D0)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_IGNORESELFGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F8DB0F0)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_IGNORESELFSTENCIL_OFFSET UNITYSDK_OFFSET(0x1F8DB1B0)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_PARTOFPARENT_OFFSET UNITYSDK_OFFSET(0x1F8DA610)
#define COFFEE_UISOFTMASK_SOFTMASK_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1F8DA210)
#define COFFEE_UISOFTMASK_SOFTMASK_UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0x1F8DB9A0)
#define COFFEE_UISOFTMASK_SOFTMASK_UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1F8DB980)
#define COFFEE_UISOFTMASK_SOFTMASK_UNREGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1F8DD020)
#define COFFEE_UISOFTMASK_SOFTMASK_UPDATEMASKTEXTURES_OFFSET UNITYSDK_OFFSET(0x1F8DD7A0)
#define COFFEE_UISOFTMASK_SOFTMASK_UPDATEMASKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F8DE5B0)
#define COFFEE_UISOFTMASK_SOFTMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E0060)
#define COFFEE_UISOFTMASK_SOFTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8DFF40)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int SoftMask_TypeDefinitionIndex = 94433;

	class SoftMask : public ::UnityEngine::UI::Mask
	{
	public:
		static ::UnityEngine::Texture2D** StaticGet_s_ReadTexture()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52540);
		}
		static ::Il2CppArray<::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMask*>*>** StaticGet_s_TmpSoftMasks()
		{
			return (::Il2CppArray<::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMask*>*>**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52548);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMask*>** StaticGet_s_TempRelatables()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMask*>**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52550);
		}
		static ::UnityEngine::Shader** StaticGet_s_SoftMaskShader()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52558);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Matrix4x4>** StaticGet_s_PreviousViewProjectionMatrices()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52560);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Matrix4x4>** StaticGet_s_NowViewProjectionMatrices()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52568);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_s_ClearColors()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52570);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMask*>** StaticGet_s_ActiveSoftMasks()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMask*>**)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x52578);
		}
		static ::System::Int32* StaticGet_s_ColorMaskId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x131F0);
		}
		static ::System::Int32* StaticGet_s_StencilCompId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x131F4);
		}
		static ::System::Boolean* StaticGet_s_IsMetal()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x131F8);
		}
		static ::System::Boolean* StaticGet_s_UVStartsAtTop()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x131F9);
		}
		static ::System::Int32* StaticGet_s_PreviousWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x131FC);
		}
		static ::System::Int32* StaticGet_s_BorderId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x13200);
		}
		static ::System::Int32* StaticGet_s_SoftnessId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x13204);
		}
		static ::System::Int32* StaticGet_s_PreviousHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x13208);
		}
		static ::System::Int32* StaticGet_s_MainTexId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SoftMask_TypeDefinitionIndex)->GetStaticField(0x1320C);
		}
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x40
		::UnityEngine::Rendering::CommandBuffer* _cb; // 0x48
		::UnityEngine::Material* _material; // 0x50
		::UnityEngine::RenderTexture* _softMaskBuffer; // 0x58
		::System::Int32 _stencilDepth; // 0x60
		::UnityEngine::Mesh* _mesh; // 0x68
		::Coffee::UISoftMask::SoftMask* _parent; // 0x70
		::System::Collections::Generic::List_1<::Coffee::UISoftMask::SoftMask*>* _children; // 0x78
		::System::Boolean _hasChanged; // 0x80
		::System::Boolean _hasStencilStateChanged; // 0x81
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _loadedAssetRequests; // 0x88
		::Coffee::UISoftMask::SoftMask_DownSamplingRate m_DownSamplingRate; // 0x90
		::System::Single m_Softness; // 0x94
		::System::Boolean m_IgnoreParent; // 0x98
		::System::Boolean m_PartOfParent; // 0x99
		::System::Boolean m_IgnoreSelfGraphic; // 0x9A
		::System::Boolean m_IgnoreSelfStencil; // 0x9B
		::UnityEngine::Vector2 m_Border; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK__CCTOR_OFFSET))();
		}

		::Coffee::UISoftMask::SoftMask_DownSamplingRate get_downSamplingRate()
		{
			return ((::Coffee::UISoftMask::SoftMask_DownSamplingRate(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_DOWNSAMPLINGRATE_OFFSET))(this);
		}

		::System::Void set_downSamplingRate(::Coffee::UISoftMask::SoftMask_DownSamplingRate value)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UISoftMask::SoftMask_DownSamplingRate))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_DOWNSAMPLINGRATE_OFFSET))(this, value);
		}

		::System::Single get_softness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Void set_softness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_SOFTNESS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_border()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_BORDER_OFFSET))(this);
		}

		::System::Void set_border(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_BORDER_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_IGNOREPARENT_OFFSET))(this);
		}

		::System::Void set_ignoreParent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_IGNOREPARENT_OFFSET))(this, value);
		}

		::System::Boolean get_partOfParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_PARTOFPARENT_OFFSET))(this);
		}

		::System::Void set_partOfParent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_PARTOFPARENT_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_softMaskBuffer()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_SOFTMASKBUFFER_OFFSET))(this);
		}

		::System::Boolean get_hasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Void set_hasChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_HASCHANGED_OFFSET))(this, value);
		}

		::Coffee::UISoftMask::SoftMask* get_parent()
		{
			return ((::Coffee::UISoftMask::SoftMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_PARENT_OFFSET))(this);
		}

		::System::Boolean get_ignoreSelfGraphic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_IGNORESELFGRAPHIC_OFFSET))(this);
		}

		::System::Void set_ignoreSelfGraphic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_IGNORESELFGRAPHIC_OFFSET))(this, value);
		}

		::System::Boolean get_ignoreSelfStencil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_IGNORESELFSTENCIL_OFFSET))(this);
		}

		::System::Void set_ignoreSelfStencil(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SET_IGNORESELFSTENCIL_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_MATERIAL_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void UnityEngine_UI_IMeshModifier_ModifyMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_OFFSET))(this, mesh);
		}

		::System::Void UnityEngine_UI_IMeshModifier_ModifyMesh_1(::UnityEngine::UI::VertexHelper* verts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_UNITYENGINE_UI_IMESHMODIFIER_MODIFYMESH_1_OFFSET))(this, verts);
		}

		::System::Boolean IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera, ::UnityEngine::UI::Graphic* g, ::Il2CppArray<::System::Int32>* interactions)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::UI::Graphic*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_ISRAYCASTLOCATIONVALID_OFFSET))(this, sp, eventCamera, g, interactions);
		}

		::System::Boolean IsRaycastLocationValid_1(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_ISRAYCASTLOCATIONVALID_1_OFFSET))(this, sp, eventCamera);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		static ::System::Void UpdateMaskTextures()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_UPDATEMASKTEXTURES_OFFSET))();
		}

		::System::Void UpdateMaskTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_UPDATEMASKTEXTURE_OFFSET))(this);
		}

		static ::System::Void GetDownSamplingSize(::Coffee::UISoftMask::SoftMask_DownSamplingRate rate, ::System::Int32& w, ::System::Int32& h)
		{
			return ((::System::Void(*)(::Coffee::UISoftMask::SoftMask_DownSamplingRate, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GETDOWNSAMPLINGSIZE_OFFSET))(rate, w, h);
		}

		static ::System::Void ReleaseRt(::UnityEngine::RenderTexture*& tmpRT)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*&))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_RELEASERT_OFFSET))(tmpRT);
		}

		static ::System::Void ReleaseObject(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_RELEASEOBJECT_OFFSET))(obj);
		}

		::System::Void SetParent(::Coffee::UISoftMask::SoftMask* newParent)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UISoftMask::SoftMask*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_SETPARENT_OFFSET))(this, newParent);
		}

		::System::Single GetPixelValue(::System::Int32 x, ::System::Int32 y, ::Il2CppArray<::System::Int32>* interactions)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_GETPIXELVALUE_OFFSET))(this, x, y, interactions);
		}

		::System::Void RegisterMeshModifierForGraphic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_REGISTERMESHMODIFIERFORGRAPHIC_OFFSET))(this);
		}

		::System::Void UnregisterMeshModifierForGraphic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK_UNREGISTERMESHMODIFIERFORGRAPHIC_OFFSET))(this);
		}
	};
}
