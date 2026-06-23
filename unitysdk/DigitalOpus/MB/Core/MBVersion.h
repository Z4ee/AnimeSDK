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
namespace DigitalOpus::MB::Core { class MBVersionInterface; }
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

#define DIGITALOPUS_MB_CORE_MBVERSION_ADDBLENDSHAPEFRAME_OFFSET UNITYSDK_OFFSET(0x1D94C700)
#define DIGITALOPUS_MB_CORE_MBVERSION_CLEARBLENDSHAPES_OFFSET UNITYSDK_OFFSET(0x1D94C620)
#define DIGITALOPUS_MB_CORE_MBVERSION_COLLECTPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1D9469C0)
#define DIGITALOPUS_MB_CORE_MBVERSION_DETECTPIPELINE_OFFSET UNITYSDK_OFFSET(0x1D94CD90)
#define DIGITALOPUS_MB_CORE_MBVERSION_DOSPECIALRENDERPIPELINE_TEXTUREPACKERFASTSETUP_OFFSET UNITYSDK_OFFSET(0x1D94CC10)
#define DIGITALOPUS_MB_CORE_MBVERSION_FINDRUNTIMEMATERIALSFROMADDRESSES_OFFSET UNITYSDK_OFFSET(0x1D94D250)
#define DIGITALOPUS_MB_CORE_MBVERSION_FINDSCENEOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1D94BB30)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETACTIVE_OFFSET UNITYSDK_OFFSET(0x1D94B890)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETBLENDSHAPEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1D94C350)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETBLENDSHAPEFRAMEVERTICES_OFFSET UNITYSDK_OFFSET(0x1D94C520)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETBLENDSHAPEFRAMEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D94C430)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETBONES_OFFSET UNITYSDK_OFFSET(0x1D94C1B0)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETLIGHTMAPTILINGOFFSET_OFFSET UNITYSDK_OFFSET(0x1D94C0B0)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETMESHCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D94BD50)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETPROJECTCOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1D94CCD0)
#define DIGITALOPUS_MB_CORE_MBVERSION_GETSCALEINLIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1D94BE30)
#define DIGITALOPUS_MB_CORE_MBVERSION_GRAPHICSUVSTARTSATTOP_OFFSET UNITYSDK_OFFSET(0x1D94C9B0)
#define DIGITALOPUS_MB_CORE_MBVERSION_ISASSETINPROJECT_OFFSET UNITYSDK_OFFSET(0x1D94CFB0)
#define DIGITALOPUS_MB_CORE_MBVERSION_ISRUNNINGANDMESHNOTREADWRITEABLE_OFFSET UNITYSDK_OFFSET(0x1D94BC50)
#define DIGITALOPUS_MB_CORE_MBVERSION_ISTEXTUREREADABLE_OFFSET UNITYSDK_OFFSET(0x1D94CB30)
#define DIGITALOPUS_MB_CORE_MBVERSION_ISTEXTURE_SRGBGAMMACORRECTED_OFFSET UNITYSDK_OFFSET(0x1D94CA70)
#define DIGITALOPUS_MB_CORE_MBVERSION_ISUSINGADDRESSABLES_OFFSET UNITYSDK_OFFSET(0x1D94D070)
#define DIGITALOPUS_MB_CORE_MBVERSION_IS_2017_1_ORNEWER_OFFSET UNITYSDK_OFFSET(0x1D94B7D0)
#define DIGITALOPUS_MB_CORE_MBVERSION_IS_2018_3_ORNEWER_OFFSET UNITYSDK_OFFSET(0x1D94B710)
#define DIGITALOPUS_MB_CORE_MBVERSION_MAXMESHVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1D94C800)
#define DIGITALOPUS_MB_CORE_MBVERSION_MESHASSIGNUVCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D94BFD0)
#define DIGITALOPUS_MB_CORE_MBVERSION_MESHCLEAR_OFFSET UNITYSDK_OFFSET(0x1D94BEF0)
#define DIGITALOPUS_MB_CORE_MBVERSION_OPTIMIZEMESH_OFFSET UNITYSDK_OFFSET(0x1D94C290)
#define DIGITALOPUS_MB_CORE_MBVERSION_SETACTIVERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1D94BA50)
#define DIGITALOPUS_MB_CORE_MBVERSION_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1D94B970)
#define DIGITALOPUS_MB_CORE_MBVERSION_SETMESHINDEXFORMATANDCLEARMESH_OFFSET UNITYSDK_OFFSET(0x1D94C8C0)
#define DIGITALOPUS_MB_CORE_MBVERSION_UNESCAPEURL_OFFSET UNITYSDK_OFFSET(0x1D94CE50)
#define DIGITALOPUS_MB_CORE_MBVERSION_VERSION_OFFSET UNITYSDK_OFFSET(0x1D94B620)
#define DIGITALOPUS_MB_CORE_MBVERSION__CREATEMBVERSIONCONCRETE_OFFSET UNITYSDK_OFFSET(0x1D94B590)
#define DIGITALOPUS_MB_CORE_MBVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D94D2A0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MBVersion_TypeDefinitionIndex = 90611;

	class MBVersion : public ::System::Object
	{
	public:
		static ::DigitalOpus::MB::Core::MBVersionInterface** StaticGet__MBVersion()
		{
			return (::DigitalOpus::MB::Core::MBVersionInterface**)Il2CppClass::FromTypeDefinitionIndex(MBVersion_TypeDefinitionIndex)->GetStaticField(0x4E3F0);
		}
		// static const ::System::String* MB_USING_HDRP; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION__CTOR_OFFSET))(this);
		}

		static ::DigitalOpus::MB::Core::MBVersionInterface* _CreateMBVersionConcrete()
		{
			return ((::DigitalOpus::MB::Core::MBVersionInterface*(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION__CREATEMBVERSIONCONCRETE_OFFSET))();
		}

		static ::System::String* version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_VERSION_OFFSET))();
		}

		static ::System::Boolean Is_2018_3_OrNewer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_IS_2018_3_ORNEWER_OFFSET))();
		}

		static ::System::Boolean Is_2017_1_OrNewer()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_IS_2017_1_ORNEWER_OFFSET))();
		}

		static ::System::Boolean GetActive(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETACTIVE_OFFSET))(go);
		}

		static ::System::Void SetActive(::UnityEngine::GameObject* go, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_SETACTIVE_OFFSET))(go, isActive);
		}

		static ::System::Void SetActiveRecursively(::UnityEngine::GameObject* go, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_SETACTIVERECURSIVELY_OFFSET))(go, isActive);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindSceneObjectsOfType(::System::Type* t)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_FINDSCENEOBJECTSOFTYPE_OFFSET))(t);
		}

		static ::System::Boolean IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh* m)
		{
			return ((::System::Boolean(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_ISRUNNINGANDMESHNOTREADWRITEABLE_OFFSET))(m);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetMeshChannel(::System::Int32 channel, ::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Int32, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETMESHCHANNEL_OFFSET))(channel, m, LOG_LEVEL);
		}

		static ::System::Single GetScaleInLightmap(::UnityEngine::MeshRenderer* r)
		{
			return ((::System::Single(*)(::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETSCALEINLIGHTMAP_OFFSET))(r);
		}

		static ::System::Void MeshClear(::UnityEngine::Mesh* m, ::System::Boolean t)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_MESHCLEAR_OFFSET))(m, t);
		}

		static ::System::Void MeshAssignUVChannel(::System::Int32 channel, ::UnityEngine::Mesh* m, ::Il2CppArray<::UnityEngine::Vector2>* uvs)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_MESHASSIGNUVCHANNEL_OFFSET))(channel, m, uvs);
		}

		static ::UnityEngine::Vector4 GetLightmapTilingOffset(::UnityEngine::Renderer* r)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETLIGHTMAPTILINGOFFSET_OFFSET))(r);
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* GetBones(::UnityEngine::Renderer* r, ::System::Boolean isSkinnedMeshWithBones)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETBONES_OFFSET))(r, isSkinnedMeshWithBones);
		}

		static ::System::Void OptimizeMesh(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_OPTIMIZEMESH_OFFSET))(m);
		}

		static ::System::Int32 GetBlendShapeFrameCount(::UnityEngine::Mesh* m, ::System::Int32 shapeIndex)
		{
			return ((::System::Int32(*)(::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETBLENDSHAPEFRAMECOUNT_OFFSET))(m, shapeIndex);
		}

		static ::System::Single GetBlendShapeFrameWeight(::UnityEngine::Mesh* m, ::System::Int32 shapeIndex, ::System::Int32 frameIndex)
		{
			return ((::System::Single(*)(::UnityEngine::Mesh*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETBLENDSHAPEFRAMEWEIGHT_OFFSET))(m, shapeIndex, frameIndex);
		}

		static ::System::Void GetBlendShapeFrameVertices(::UnityEngine::Mesh* m, ::System::Int32 shapeIndex, ::System::Int32 frameIndex, ::Il2CppArray<::UnityEngine::Vector3>* vs, ::Il2CppArray<::UnityEngine::Vector3>* ns, ::Il2CppArray<::UnityEngine::Vector3>* ts)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETBLENDSHAPEFRAMEVERTICES_OFFSET))(m, shapeIndex, frameIndex, vs, ns, ts);
		}

		static ::System::Void ClearBlendShapes(::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_CLEARBLENDSHAPES_OFFSET))(m);
		}

		static ::System::Void AddBlendShapeFrame(::UnityEngine::Mesh* m, ::System::String* nm, ::System::Single wt, ::Il2CppArray<::UnityEngine::Vector3>* vs, ::Il2CppArray<::UnityEngine::Vector3>* ns, ::Il2CppArray<::UnityEngine::Vector3>* ts)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::String*, ::System::Single, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_ADDBLENDSHAPEFRAME_OFFSET))(m, nm, wt, vs, ns, ts);
		}

		static ::System::Int32 MaxMeshVertexCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_MAXMESHVERTEXCOUNT_OFFSET))();
		}

		static ::System::Void SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh* m, ::System::Int32 numVerts, ::System::Boolean vertices, ::System::Boolean justClearTriangles)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_SETMESHINDEXFORMATANDCLEARMESH_OFFSET))(m, numVerts, vertices, justClearTriangles);
		}

		static ::System::Boolean GraphicsUVStartsAtTop()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GRAPHICSUVSTARTSATTOP_OFFSET))();
		}

		static ::System::Boolean IsTexture_sRGBgammaCorrected(::UnityEngine::Texture2D* tex, ::System::Boolean hint)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_ISTEXTURE_SRGBGAMMACORRECTED_OFFSET))(tex, hint);
		}

		static ::System::Boolean IsTextureReadable(::UnityEngine::Texture2D* tex)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_ISTEXTUREREADABLE_OFFSET))(tex);
		}

		static ::System::Void CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::Il2CppArray<::DigitalOpus::MB::Core::ShaderTextureProperty*>* shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames, ::UnityEngine::Material* resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::Il2CppArray<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_COLLECTPROPERTYNAMES_OFFSET))(texPropertyNames, shaderTexPropertyNames, _customShaderPropNames, resultMaterial, LOG_LEVEL);
		}

		static ::System::Void DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject* cameraGameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_DOSPECIALRENDERPIPELINE_TEXTUREPACKERFASTSETUP_OFFSET))(cameraGameObject);
		}

		static ::UnityEngine::ColorSpace GetProjectColorSpace()
		{
			return ((::UnityEngine::ColorSpace(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_GETPROJECTCOLORSPACE_OFFSET))();
		}

		static ::DigitalOpus::MB::Core::MBVersion_PipelineType DetectPipeline()
		{
			return ((::DigitalOpus::MB::Core::MBVersion_PipelineType(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_DETECTPIPELINE_OFFSET))();
		}

		static ::System::String* UnescapeURL(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_UNESCAPEURL_OFFSET))(url);
		}

		static ::System::Boolean IsAssetInProject(::UnityEngine::Object* target)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_ISASSETINPROJECT_OFFSET))(target);
		}

		static ::System::Boolean IsUsingAddressables()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_ISUSINGADDRESSABLES_OFFSET))();
		}

		static ::System::Collections::IEnumerator* FindRuntimeMaterialsFromAddresses(::MB2_TextureBakeResults* textureBakeResult, ::MB2_TextureBakeResults_CoroutineResult* isComplete)
		{
			return ((::System::Collections::IEnumerator*(*)(::MB2_TextureBakeResults*, ::MB2_TextureBakeResults_CoroutineResult*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSION_FINDRUNTIMEMATERIALSFROMADDRESSES_OFFSET))(textureBakeResult, isComplete);
		}
	};
}
