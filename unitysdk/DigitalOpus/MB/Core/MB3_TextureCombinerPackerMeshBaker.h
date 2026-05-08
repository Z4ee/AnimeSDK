#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/DigitalOpus/MB/Core/DRect.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerPackerRoot.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class MeshBakerMaterialTexture; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER_COPYSCALEDANDTILEDTOATLAS_OFFSET UNITYSDK_OFFSET(0x1AF82950)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER_CREATEATLASES_OFFSET UNITYSDK_OFFSET(0x1AF828B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1AF828A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF82A60)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerMeshBaker_TypeDefinitionIndex = 85145;

	class MB3_TextureCombinerPackerMeshBaker : public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER__CTOR_OFFSET))(this);
		}

		::System::Boolean Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER_VALIDATE_OFFSET))(this, data);
		}

		::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects, ::Il2CppArray<::UnityEngine::Texture2D*>* atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER_CREATEATLASES_OFFSET))(this, progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL);
		}

		static ::System::Collections::IEnumerator* CopyScaledAndTiledToAtlas(::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source, ::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName, ::DigitalOpus::MB::Core::DRect srcSamplingRect, ::System::Int32 targX, ::System::Int32 targY, ::System::Int32 targW, ::System::Int32 targH, ::DigitalOpus::MB::Core::AtlasPadding padding, ::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>* atlasPixels, ::System::Boolean isNormalMap, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::DRect, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::AtlasPadding, ::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>*, ::System::Boolean, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERMESHBAKER_COPYSCALEDANDTILEDTOATLAS_OFFSET))(source, sourceMaterial, shaderPropertyName, srcSamplingRect, targX, targY, targW, targH, padding, atlasPixels, isNormalMap, data, combiner, progressInfo, LOG_LEVEL);
		}
	};
}
