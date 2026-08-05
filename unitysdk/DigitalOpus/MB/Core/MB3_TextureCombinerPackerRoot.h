#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CALCULATEATLASRECTANGLESSTATIC_OFFSET UNITYSDK_OFFSET(0x1FB79AF0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CALCULATEATLASRECTANGLES_OFFSET UNITYSDK_OFFSET(0x1FB79D70)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CONVERTTEXTURESTOREADABLEFORMATS_OFFSET UNITYSDK_OFFSET(0x1FB79D10)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CREATETEMPORARYTEXTURESFORATLAS_OFFSET UNITYSDK_OFFSET(0x1FB796A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_MAKEPROCEDURALTEXTURESREADABLE_OFFSET UNITYSDK_OFFSET(0x1FB79D00)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_SAVEATLASANDCONFIGURERESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FB798B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB79D80)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPackerRoot_TypeDefinitionIndex = 94622;

	class MB3_TextureCombinerPackerRoot : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT__CTOR_OFFSET))(this);
		}

		static ::System::Void CreateTemporaryTexturesForAtlas(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::System::Int32 propIdx, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::System::Int32, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CREATETEMPORARYTEXTURESFORATLAS_OFFSET))(distinctMaterialTextures, combiner, propIdx, data);
		}

		static ::System::Void SaveAtlasAndConfigureResultMaterial(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::UnityEngine::Texture2D* atlas, ::DigitalOpus::MB::Core::ShaderTextureProperty* property, ::System::Int32 propIdx)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_SAVEATLASANDCONFIGURERESULTMATERIAL_OFFSET))(data, textureEditorMethods, atlas, property, propIdx);
		}

		static ::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* CalculateAtlasRectanglesStatic(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::System::Boolean doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CALCULATEATLASRECTANGLESSTATIC_OFFSET))(data, doMultiAtlas, LOG_LEVEL);
		}

		static ::System::Void MakeProceduralTexturesReadable(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_MAKEPROCEDURALTEXTURESREADABLE_OFFSET))(progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL);
		}

		::System::Collections::IEnumerator* ConvertTexturesToReadableFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CONVERTTEXTURESTOREADABLEFORMATS_OFFSET))(this, progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::System::Boolean doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPACKERROOT_CALCULATEATLASRECTANGLES_OFFSET))(this, data, doMultiAtlas, LOG_LEVEL);
		}
	};
}
