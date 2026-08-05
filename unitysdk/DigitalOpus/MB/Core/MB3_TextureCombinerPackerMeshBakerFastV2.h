#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_AtlasPackerRenderTextureUsingMesh; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_CALCULATEATLASRECTANGLES_OFFSET UNITYSDK_OFFSET(0x1EEA7E70)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_CONVERTTEXTURESTOREADABLEFORMATS_OFFSET UNITYSDK_OFFSET(0x1EEA7E30)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_CREATEATLASES_OFFSET UNITYSDK_OFFSET(0x1EEA7E80)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_ONETIMESETUP_OFFSET UNITYSDK_OFFSET(0x1EEA7F20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1EEA7DB0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA8090)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerMeshBakerFastV2_TypeDefinitionIndex = 94658;

	class MB3_TextureCombinerPackerMeshBakerFastV2 : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::UnityEngine::GameObject* renderAtlasesGO; // 0x18
		::UnityEngine::GameObject* cameraGameObject; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2__CTOR_OFFSET))(this);
		}

		::System::Boolean Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_VALIDATE_OFFSET))(this, data);
		}

		::System::Collections::IEnumerator* ConvertTexturesToReadableFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_CONVERTTEXTURESTOREADABLEFORMATS_OFFSET))(this, progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::System::Boolean doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_CALCULATEATLASRECTANGLES_OFFSET))(this, data, doMultiAtlas, LOG_LEVEL);
		}

		::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects, ::Il2CppArray<::UnityEngine::Texture2D*>* atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_CREATEATLASES_OFFSET))(this, progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL);
		}

		::System::Void OneTimeSetup(::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh* atlasRenderer, ::UnityEngine::GameObject* atlasMesh, ::UnityEngine::GameObject* cameraGameObject, ::System::Int32 atlasWidth, ::System::Int32 atlasHeight, ::System::Int32 padding, ::System::Int32 layer, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_AtlasPackerRenderTextureUsingMesh*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKERFASTV2_ONETIMESETUP_OFFSET))(this, atlasRenderer, atlasMesh, cameraGameObject, atlasWidth, atlasHeight, padding, layer, logLevel);
		}
	};
}
