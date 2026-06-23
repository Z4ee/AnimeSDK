#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerPackerRoot.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MeshBakerMaterialTexture; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_CALCULATEATLASRECTANGLES_OFFSET UNITYSDK_OFFSET(0x1D3AC5F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_CREATEATLASES_OFFSET UNITYSDK_OFFSET(0x1D3AC6D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_GETADJUSTEDFORSCALEANDOFFSET2_OFFSET UNITYSDK_OFFSET(0x1D3ACEF0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D3AC5E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY__COPYTEXTURESINTOATLAS_OFFSET UNITYSDK_OFFSET(0x1D3AC770)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AD770)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerUnity_TypeDefinitionIndex = 90739;

	class MB3_TextureCombinerPackerUnity : public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY__CTOR_OFFSET))(this);
		}

		::System::Boolean Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_VALIDATE_OFFSET))(this, data);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::System::Boolean doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_CALCULATEATLASRECTANGLES_OFFSET))(this, data, doMultiAtlas, LOG_LEVEL);
		}

		::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects, ::Il2CppArray<::UnityEngine::Texture2D*>* atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_CREATEATLASES_OFFSET))(this, progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL);
		}

		static ::UnityEngine::Texture2D* _copyTexturesIntoAtlas(::DigitalOpus::MB::Core::ShaderTextureProperty* prop, ::Il2CppArray<::UnityEngine::Texture2D*>* texToPack, ::System::Int32 padding, ::Il2CppArray<::UnityEngine::Rect>* rs, ::System::Int32 w, ::System::Int32 h, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner)
		{
			return ((::UnityEngine::Texture2D*(*)(::DigitalOpus::MB::Core::ShaderTextureProperty*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::System::Int32, ::Il2CppArray<::UnityEngine::Rect>*, ::System::Int32, ::System::Int32, ::DigitalOpus::MB::Core::MB3_TextureCombiner*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY__COPYTEXTURESINTOATLAS_OFFSET))(prop, texToPack, padding, rs, w, h, combiner);
		}

		static ::UnityEngine::Texture2D* GetAdjustedForScaleAndOffset2(::DigitalOpus::MB::Core::ShaderTextureProperty* propertyName, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source, ::UnityEngine::Vector2 obUVoffset, ::UnityEngine::Vector2 obUVscale, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::UnityEngine::Texture2D*(*)(::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERUNITY_GETADJUSTEDFORSCALEANDOFFSET2_OFFSET))(propertyName, source, obUVoffset, obUVscale, data, combiner, LOG_LEVEL);
		}
	};
}
