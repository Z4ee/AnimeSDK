#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

class OpaqueSoftEdgeRenderer_ObjectInfo;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }

#define OPAQUESOFTEDGERENDERER_CREATEOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1BC14700)
#define OPAQUESOFTEDGERENDERER_DRAWSOFTEDGEGBUFFER_OFFSET UNITYSDK_OFFSET(0x1BC13FB0)
#define OPAQUESOFTEDGERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BC15400)
#define OPAQUESOFTEDGERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BC15B60)
#define OPAQUESOFTEDGERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC15450)
#define OPAQUESOFTEDGERENDERER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BC15B10)
#define OPAQUESOFTEDGERENDERER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1BC15D10)
#define OPAQUESOFTEDGERENDERER_REFRESHCACHEDINFO_OFFSET UNITYSDK_OFFSET(0x1BC15520)
#define OPAQUESOFTEDGERENDERER_RELEASEOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1BC14CD0)
#define OPAQUESOFTEDGERENDERER_RESETCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1BC154D0)
#define OPAQUESOFTEDGERENDERER_SYNCGIINFO_OFFSET UNITYSDK_OFFSET(0x1BC14E40)
#define OPAQUESOFTEDGERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC15EA0)
#define OPAQUESOFTEDGERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC15E40)

inline static constexpr unsigned int OpaqueSoftEdgeRenderer_TypeDefinitionIndex = 26522;

class OpaqueSoftEdgeRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet_SoftEdgePassName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer_TypeDefinitionIndex)->GetStaticField(0x219E0);
	}
	static ::System::Collections::Generic::List_1<::OpaqueSoftEdgeRenderer_ObjectInfo*>** StaticGet_OpaqueSoftEdgeObjectInfoList()
	{
		return (::System::Collections::Generic::List_1<::OpaqueSoftEdgeRenderer_ObjectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer_TypeDefinitionIndex)->GetStaticField(0x219E8);
	}
	static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::OpaqueSoftEdgeRenderer_ObjectInfo*>** StaticGet_s_SoftEdgeObjectInfoPool()
	{
		return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::OpaqueSoftEdgeRenderer_ObjectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer_TypeDefinitionIndex)->GetStaticField(0x219F0);
	}
	static ::System::Int32* StaticGet_cachedGeometrySoftEdgePassIndex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer_TypeDefinitionIndex)->GetStaticField(0x65E0);
	}
	static ::System::Int32* StaticGet__SoftEdgeParams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer_TypeDefinitionIndex)->GetStaticField(0x65E4);
	}
	static ::System::Int32* StaticGet__SceneStencil()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpaqueSoftEdgeRenderer_TypeDefinitionIndex)->GetStaticField(0x65E8);
	}
	::System::Int32 SubMeshID; // 0x18
	::System::Single SoftEdgeRange; // 0x1C
	::System::Single SoftEdgeViewOffset; // 0x20
	::UnityEngine::Material* sourceMat; // 0x28
	::OpaqueSoftEdgeRenderer_ObjectInfo* objectInfo; // 0x30
	::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x38
	::UnityEngine::MeshFilter* m_MeshFilter; // 0x40
	::System::Boolean m_IsValidSoftEdgeRenderer; // 0x48
	::System::Int32 cachedLightMapIndex; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER__CCTOR_OFFSET))();
	}

	static ::System::Void DrawSoftEdgeGBuffer(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_DRAWSOFTEDGEGBUFFER_OFFSET))(context, renderingData, postCullRenderingData);
	}

	::System::Void CreateObjectInfo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_CREATEOBJECTINFO_OFFSET))(this);
	}

	::System::Void ReleaseObjectInfo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_RELEASEOBJECTINFO_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void ResetCachedData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_RESETCACHEDDATA_OFFSET))(this);
	}

	::System::Void RefreshCachedInfo(::System::Boolean destroy)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_REFRESHCACHEDINFO_OFFSET))(this, destroy);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnWillRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_ONWILLRENDEROBJECT_OFFSET))(this);
	}

	::System::Void SyncGIInfo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAQUESOFTEDGERENDERER_SYNCGIINFO_OFFSET))(this);
	}
};
