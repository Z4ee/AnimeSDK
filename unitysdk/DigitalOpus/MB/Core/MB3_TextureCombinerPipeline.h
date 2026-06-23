#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerPipeline_CreateAtlasForProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB2_TexturePacker; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB_ITextureCombinerPacker; }
namespace DigitalOpus::MB::Core { class MeshBakerMaterialTexture; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CALCULATEALLTEXTURESARENULLANDSAMECOLOR_OFFSET UNITYSDK_OFFSET(0x1D946D20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CALCULATEIDEALSIZESFORTEXTURESINATLASANDPADDING_OFFSET UNITYSDK_OFFSET(0x1D9474B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CONVERTNORMALFORMATFROMUNITY_TOSTANDARD_OFFSET UNITYSDK_OFFSET(0x1D949D40)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CREATEPACKER_OFFSET UNITYSDK_OFFSET(0x1D9482D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CREATETEXTUREPACKER_OFFSET UNITYSDK_OFFSET(0x1D9496E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_FILLATLASPACKINGRESULTAUXILLARYDATA_OFFSET UNITYSDK_OFFSET(0x1D947670)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_FILLRESULTATLASESANDRECTS_OFFSET UNITYSDK_OFFSET(0x1D947D50)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GENERATEREPORT_OFFSET UNITYSDK_OFFSET(0x1D948510)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETADJUSTEDFORSCALEANDOFFSET2DIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1D9497E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETMATERIALSCALEANDOFFSET_OFFSET UNITYSDK_OFFSET(0x1D949E20)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETSUBMESHAREA_OFFSET UNITYSDK_OFFSET(0x1D949FB0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETTEXTURECONSIDERINGSTANDARDSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1D946AC0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1D94A240)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_RUNTEXTUREPACKERONLY_OFFSET UNITYSDK_OFFSET(0x1D947500)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D94A260)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__COLLECTPROPERTYNAMES_1_OFFSET UNITYSDK_OFFSET(0x1D946560)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__COLLECTPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1D9464D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D94A250)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__DOANYSRCMATSHAVEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D946490)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__SHOULDWECREATEATLASFORTHISPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D944500)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D946C90)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_OFFSET UNITYSDK_OFFSET(0x1D948450)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline_TypeDefinitionIndex = 90741;

	class MB3_TextureCombinerPipeline : public ::System::Object
	{
	public:
		static ::Il2CppArray<::DigitalOpus::MB::Core::ShaderTextureProperty*>** StaticGet_shaderTexPropertyNames()
		{
			return (::Il2CppArray<::DigitalOpus::MB::Core::ShaderTextureProperty*>**)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureCombinerPipeline_TypeDefinitionIndex)->GetStaticField(0x4E430);
		}
		static ::System::Boolean* StaticGet_USE_EXPERIMENTAL_HOIZONTALVERTICAL()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureCombinerPipeline_TypeDefinitionIndex)->GetStaticField(0x12C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__CCTOR_OFFSET))();
		}

		static ::System::Boolean _ShouldWeCreateAtlasForThisProperty(::System::Int32 propertyIndex, ::System::Boolean considerNonTextureProperties, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>* allTexturesAreNullAndSameColor)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Boolean, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__SHOULDWECREATEATLASFORTHISPROPERTY_OFFSET))(propertyIndex, considerNonTextureProperties, allTexturesAreNullAndSameColor);
		}

		static ::System::Boolean _DoAnySrcMatsHaveProperty(::System::Int32 propertyIndex, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>* allTexturesAreNullAndSameColor)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__DOANYSRCMATSHAVEPROPERTY_OFFSET))(propertyIndex, allTexturesAreNullAndSameColor);
		}

		static ::System::Boolean _CollectPropertyNames(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__COLLECTPROPERTYNAMES_OFFSET))(data, LOG_LEVEL);
		}

		static ::System::Boolean _CollectPropertyNames_1(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames, ::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore, ::UnityEngine::Material* resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE__COLLECTPROPERTYNAMES_1_OFFSET))(texPropertyNames, _customShaderPropNames, texPropsToIgnore, resultMaterial, LOG_LEVEL);
		}

		static ::UnityEngine::Texture* GetTextureConsideringStandardShaderKeywords(::System::String* shaderName, ::UnityEngine::Material* mat, ::System::String* propertyName)
		{
			return ((::UnityEngine::Texture*(*)(::System::String*, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETTEXTURECONSIDERINGSTANDARDSHADERKEYWORDS_OFFSET))(shaderName, mat, propertyName);
		}

		::System::Collections::IEnumerator* __Step1_CollectDistinctMatTexturesAndUsedObjects(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* usedObjsToMesh, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_OFFSET))(this, progressInfo, result, data, combiner, textureEditorMethods, usedObjsToMesh, LOG_LEVEL);
		}

		static ::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>* CalculateAllTexturesAreNullAndSameColor(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>*(*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CALCULATEALLTEXTURESARENULLANDSAMECOLOR_OFFSET))(data, LOG_LEVEL);
		}

		::System::Collections::IEnumerator* CalculateIdealSizesForTexturesInAtlasAndPadding(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CALCULATEIDEALSIZESFORTEXTURESINATLASANDPADDING_OFFSET))(this, progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL);
		}

		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* RunTexturePackerOnly(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::System::Boolean doSplitIntoMultiAtlasIfTooBig, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* texturePacker, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::System::Boolean, ::MB_AtlasesAndRects*, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_RUNTEXTUREPACKERONLY_OFFSET))(this, data, doSplitIntoMultiAtlasIfTooBig, resultAtlasesAndRects, texturePacker, LOG_LEVEL);
		}

		::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* CreatePacker(::System::Boolean onlyOneTextureInAtlasReuseTextures, ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum packingAlgorithm)
		{
			return ((::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*(*)(::PVOID, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CREATEPACKER_OFFSET))(this, onlyOneTextureInAtlasReuseTextures, packingAlgorithm);
		}

		::System::Collections::IEnumerator* __Step3_BuildAndSaveAtlasesAndStoreResults(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker* packer, ::DigitalOpus::MB::Core::AtlasPackingResult* atlasPackingResult, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::System::Text::StringBuilder* report, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::MB_AtlasesAndRects*, ::System::Text::StringBuilder*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___STEP3_BUILDANDSAVEATLASESANDSTORERESULTS_OFFSET))(this, result, progressInfo, data, combiner, packer, atlasPackingResult, textureEditorMethods, resultAtlasesAndRects, report, LOG_LEVEL);
		}

		::System::Void FillAtlasPackingResultAuxillaryData(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>* atlasPackingResults)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::Il2CppArray<::DigitalOpus::MB::Core::AtlasPackingResult*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_FILLATLASPACKINGRESULTAUXILLARYDATA_OFFSET))(this, data, atlasPackingResults);
		}

		::System::Void FillResultAtlasesAndRects(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::AtlasPackingResult* atlasPackingResult, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::Il2CppArray<::UnityEngine::Texture2D*>* atlases)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::MB_AtlasesAndRects*, ::Il2CppArray<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_FILLRESULTATLASESANDRECTS_OFFSET))(this, data, atlasPackingResult, resultAtlasesAndRects, atlases);
		}

		::System::Text::StringBuilder* GenerateReport(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GENERATEREPORT_OFFSET))(this, data);
		}

		static ::DigitalOpus::MB::Core::MB2_TexturePacker* CreateTexturePacker(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum _packingAlgorithm)
		{
			return ((::DigitalOpus::MB::Core::MB2_TexturePacker*(*)(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CREATETEXTUREPACKER_OFFSET))(_packingAlgorithm);
		}

		static ::UnityEngine::Vector2 GetAdjustedForScaleAndOffset2Dimensions(::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source, ::UnityEngine::Vector2 obUVoffset, ::UnityEngine::Vector2 obUVscale, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::UnityEngine::Vector2(*)(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETADJUSTEDFORSCALEANDOFFSET2DIMENSIONS_OFFSET))(source, obUVoffset, obUVscale, data, LOG_LEVEL);
		}

		static ::UnityEngine::Color32 ConvertNormalFormatFromUnity_ToStandard(::UnityEngine::Color32 c)
		{
			return ((::UnityEngine::Color32(*)(::UnityEngine::Color32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CONVERTNORMALFORMATFROMUNITY_TOSTANDARD_OFFSET))(c);
		}

		static ::System::Void GetMaterialScaleAndOffset(::UnityEngine::Material* mat, ::System::String* propertyName, ::UnityEngine::Vector2& offset, ::UnityEngine::Vector2& scale)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETMATERIALSCALEANDOFFSET_OFFSET))(mat, propertyName, offset, scale);
		}

		static ::System::Single GetSubmeshArea(::UnityEngine::Mesh* m, ::System::Int32 submeshIdx)
		{
			return ((::System::Single(*)(::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_GETSUBMESHAREA_OFFSET))(m, submeshIdx);
		}

		static ::System::Boolean IsPowerOfTwo(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_ISPOWEROFTWO_OFFSET))(x);
		}
	};
}
