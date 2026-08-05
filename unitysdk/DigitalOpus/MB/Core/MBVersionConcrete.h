#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MBVersion_PipelineType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ColorSpace.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MB2_TextureBakeResults;
class MB2_TextureBakeResults_CoroutineResult;
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ADDBLENDSHAPEFRAME_OFFSET UNITYSDK_OFFSET(0x1F7962F0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_CLEARBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1F7962D0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_COLLECTPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1F796440)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_DETECTPIPELINE_OFFSET UNITYSDK_OFFSET(0x1F796F90)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_DOSPECIALRENDERPIPELINE_TEXTUREPACKERFASTSETUP_OFFSET UNITYSDK_OFFSET(0x1F797200)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_FINDRUNTIMEMATERIALSFROMADDRESSES_OFFSET UNITYSDK_OFFSET(0x1F7975D0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_FINDSCENEOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1F795640)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F7955C0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBLENDSHAPEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1F796230)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBLENDSHAPEFRAMEVERTICES_OFFSET UNITYSDK_OFFSET(0x1F796290)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBLENDSHAPEFRAMEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F796260)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBONES_OFFSET UNITYSDK_OFFSET(0x1F7960A0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETLIGHTMAPTILINGOFFSET_OFFSET UNITYSDK_OFFSET(0x1F796060)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETMESHUV1S_OFFSET UNITYSDK_OFFSET(0x1F7956F0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETMESHUVCHANNEL_OFFSET UNITYSDK_OFFSET(0x1F795920)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETPROJECTCOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1F797210)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETSCALEINLIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1F796430)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1F7963F0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISASSETINPROJECT_OFFSET UNITYSDK_OFFSET(0x1F797620)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISRUNNINGANDMESHNOTREADWRITEABLE_OFFSET UNITYSDK_OFFSET(0x1F7956B0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISTEXTUREREADABLE_OFFSET UNITYSDK_OFFSET(0x1F796410)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISTEXTURE_SRGBGAMMACORRECTED_OFFSET UNITYSDK_OFFSET(0x1F796400)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_IS_2017_1_ORNEWER_OFFSET UNITYSDK_OFFSET(0x1F7955A0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_IS_2018_3_ORNEWER_OFFSET UNITYSDK_OFFSET(0x1F7955B0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_MAXMESHVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1F796330)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_MESHASSIGNUVCHANNEL_OFFSET UNITYSDK_OFFSET(0x1F795EE0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_MESHCLEAR_OFFSET UNITYSDK_OFFSET(0x1F795EB0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_OPTIMIZEMESH_OFFSET UNITYSDK_OFFSET(0x1F7956A0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_SETACTIVERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1F795610)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F7955E0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_SETMESHINDEXFORMATANDCLEARMESH_OFFSET UNITYSDK_OFFSET(0x1F796340)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1F7975C0)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_VERSION_OFFSET UNITYSDK_OFFSET(0x1F795560)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F797630)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MBVersionConcrete_TypeDefinitionIndex = 94496;

	class MBVersionConcrete : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 _HALF_UV; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__CTOR_OFFSET))(this);
		}

		::System::String* version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_VERSION_OFFSET))(this);
		}

		::System::Boolean Is_2017_1_OrNewer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_IS_2017_1_ORNEWER_OFFSET))(this);
		}

		::System::Boolean Is_2018_3_OrNewer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_IS_2018_3_ORNEWER_OFFSET))(this);
		}

		::System::Boolean GetActive(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETACTIVE_OFFSET))(this, go);
		}

		::System::Void SetActive(::UnityEngine::GameObject* go, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_SETACTIVE_OFFSET))(this, go, isActive);
		}

		::System::Void SetActiveRecursively(::UnityEngine::GameObject* go, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_SETACTIVERECURSIVELY_OFFSET))(this, go, isActive);
		}

		::Il2CppArray<::UnityEngine::Object*>* FindSceneObjectsOfType(::System::Type* t)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_FINDSCENEOBJECTSOFTYPE_OFFSET))(this, t);
		}

		::System::Void OptimizeMesh(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_OPTIMIZEMESH_OFFSET))(this, m);
		}

		::System::Boolean IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISRUNNINGANDMESHNOTREADWRITEABLE_OFFSET))(this, m);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetMeshUV1s(::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETMESHUV1S_OFFSET))(this, m, LOG_LEVEL);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetMeshUVChannel(::System::Int32 channel, ::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETMESHUVCHANNEL_OFFSET))(this, channel, m, LOG_LEVEL);
		}

		::System::Void MeshClear(::UnityEngine::Mesh* m, ::System::Boolean t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_MESHCLEAR_OFFSET))(this, m, t);
		}

		::System::Void MeshAssignUVChannel(::System::Int32 channel, ::UnityEngine::Mesh* m, ::Il2CppArray<::UnityEngine::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_MESHASSIGNUVCHANNEL_OFFSET))(this, channel, m, uvs);
		}

		::UnityEngine::Vector4 GetLightmapTilingOffset(::UnityEngine::Renderer* r)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETLIGHTMAPTILINGOFFSET_OFFSET))(this, r);
		}

		::Il2CppArray<::UnityEngine::Transform*>* GetBones(::UnityEngine::Renderer* r, ::System::Boolean isSkinnedMeshWithBones)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBONES_OFFSET))(this, r, isSkinnedMeshWithBones);
		}

		::System::Int32 GetBlendShapeFrameCount(::UnityEngine::Mesh* m, ::System::Int32 shapeIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBLENDSHAPEFRAMECOUNT_OFFSET))(this, m, shapeIndex);
		}

		::System::Single GetBlendShapeFrameWeight(::UnityEngine::Mesh* m, ::System::Int32 shapeIndex, ::System::Int32 frameIndex)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBLENDSHAPEFRAMEWEIGHT_OFFSET))(this, m, shapeIndex, frameIndex);
		}

		::System::Void GetBlendShapeFrameVertices(::UnityEngine::Mesh* m, ::System::Int32 shapeIndex, ::System::Int32 frameIndex, ::Il2CppArray<::UnityEngine::Vector3>* vs, ::Il2CppArray<::UnityEngine::Vector3>* ns, ::Il2CppArray<::UnityEngine::Vector3>* ts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETBLENDSHAPEFRAMEVERTICES_OFFSET))(this, m, shapeIndex, frameIndex, vs, ns, ts);
		}

		::System::Void ClearBlendShapes(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_CLEARBLENDSHAPES_OFFSET))(this, m);
		}

		::System::Void AddBlendShapeFrame(::UnityEngine::Mesh* m, ::System::String* nm, ::System::Single wt, ::Il2CppArray<::UnityEngine::Vector3>* vs, ::Il2CppArray<::UnityEngine::Vector3>* ns, ::Il2CppArray<::UnityEngine::Vector3>* ts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::String*, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ADDBLENDSHAPEFRAME_OFFSET))(this, m, nm, wt, vs, ns, ts);
		}

		::System::Int32 MaxMeshVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_MAXMESHVERTEXCOUNT_OFFSET))(this);
		}

		::System::Void SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh* m, ::System::Int32 numVerts, ::System::Boolean vertices, ::System::Boolean justClearTriangles)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_SETMESHINDEXFORMATANDCLEARMESH_OFFSET))(this, m, numVerts, vertices, justClearTriangles);
		}

		::System::Boolean GraphicsUVStartsAtTop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GRAPHICSUVSTARTSATTOP_OFFSET))(this);
		}

		::System::Boolean IsTexture_sRGBgammaCorrected(::UnityEngine::Texture2D* tex, ::System::Boolean hint)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISTEXTURE_SRGBGAMMACORRECTED_OFFSET))(this, tex, hint);
		}

		::System::Boolean IsTextureReadable(::UnityEngine::Texture2D* tex)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISTEXTUREREADABLE_OFFSET))(this, tex);
		}

		::System::Single GetScaleInLightmap(::UnityEngine::MeshRenderer* r)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETSCALEINLIGHTMAP_OFFSET))(this, r);
		}

		::System::Boolean CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::Il2CppArray<::DigitalOpus::MB::Core::ShaderTextureProperty*>* shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames, ::UnityEngine::Material* resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::Il2CppArray<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_COLLECTPROPERTYNAMES_OFFSET))(this, texPropertyNames, shaderTexPropertyNames, _customShaderPropNames, resultMaterial, LOG_LEVEL);
		}

		::System::Void DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject* cameraGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_DOSPECIALRENDERPIPELINE_TEXTUREPACKERFASTSETUP_OFFSET))(this, cameraGameObject);
		}

		::UnityEngine::ColorSpace GetProjectColorSpace()
		{
			return ((::UnityEngine::ColorSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_GETPROJECTCOLORSPACE_OFFSET))(this);
		}

		::DigitalOpus::MB::Core::MBVersion_PipelineType DetectPipeline()
		{
			return ((::DigitalOpus::MB::Core::MBVersion_PipelineType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_DETECTPIPELINE_OFFSET))(this);
		}

		::System::String* UnescapeURL(::System::String* url)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_UNESCAPEURL_OFFSET))(this, url);
		}

		::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::MB2_TextureBakeResults* texBakeResult, ::MB2_TextureBakeResults_CoroutineResult* isComplete)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MB2_TextureBakeResults*, ::MB2_TextureBakeResults_CoroutineResult*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_FINDRUNTIMEMATERIALSFROMADDRESSES_OFFSET))(this, texBakeResult, isComplete);
		}

		::System::Boolean IsAssetInProject(::UnityEngine::Object* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE_ISASSETINPROJECT_OFFSET))(this, target);
		}
	};
}
