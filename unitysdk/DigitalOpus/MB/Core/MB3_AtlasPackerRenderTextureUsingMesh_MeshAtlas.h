#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_ADDNINESLICEDRECT_OFFSET UNITYSDK_OFFSET(0x1F706400)
#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_ADDQUAD_OFFSET UNITYSDK_OFFSET(0x1F706B20)
#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_BUILDATLAS_OFFSET UNITYSDK_OFFSET(0x1F705530)
#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_CONFIGUREMATERIAL_DEFAULTPIPELINE_OFFSET UNITYSDK_OFFSET(0x1F7069F0)
#define DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F706D80)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas_TypeDefinitionIndex = 94663;

	class MB3_AtlasPackerRenderTextureUsingMesh_MeshAtlas : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS__CTOR_OFFSET))(this);
		}

		static ::System::Void BuildAtlas(::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures, ::System::Int32 propIdx, ::System::Int32 atlasSizeX, ::System::Int32 atlasSizeY, ::UnityEngine::Mesh* m, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* generatedMats, ::DigitalOpus::MB::Core::ShaderTextureProperty* property, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_BUILDATLAS_OFFSET))(packedAtlasRects, distinctMaterialTextures, propIdx, atlasSizeX, atlasSizeY, m, generatedMats, property, data, combiner, textureEditorMethods, LOG_LEVEL);
		}

		static ::System::Void ConfigureMaterial_DefaultPipeline(::UnityEngine::Material* mt, ::UnityEngine::Texture2D* t, ::System::Boolean isSavingAsANormalMapAssetThatWillBeImported, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Texture2D*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_CONFIGUREMATERIAL_DEFAULTPIPELINE_OFFSET))(mt, t, isSavingAsANormalMapAssetThatWillBeImported, LOG_LEVEL);
		}

		static ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo* AddQuad(::UnityEngine::Rect wldRect, ::UnityEngine::Rect uvRect, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, ::System::Collections::Generic::List_1<::System::Int32>* tris)
		{
			return ((::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh_MeshRectInfo*(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_ADDQUAD_OFFSET))(wldRect, uvRect, verts, uvs, tris);
		}

		static ::System::Void AddNineSlicedRect(::UnityEngine::Rect atlasRectRaw, ::System::Single paddingX, ::System::Single paddingY, ::UnityEngine::Rect srcUVRectt, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, ::System::Collections::Generic::List_1<::System::Int32>* tris, ::System::Single srcTexWidth, ::System::Single srcTexHeight, ::System::String* texName)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::UnityEngine::Rect, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_ATLASPACKERRENDERTEXTUREUSINGMESH_MESHATLAS_ADDNINESLICEDRECT_OFFSET))(atlasRectRaw, paddingX, paddingY, srcUVRectt, verts, uvs, tris, srcTexWidth, srcTexHeight, texName);
		}
	};
}
