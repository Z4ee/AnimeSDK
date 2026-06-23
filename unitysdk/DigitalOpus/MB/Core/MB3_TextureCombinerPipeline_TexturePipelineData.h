#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerPipeline_CreateAtlasForProperty.h"
#include "unitysdk/MB2_TextureBakeResults_ResultType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ColorSpace.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_GET_NUMATLASES_OFFSET UNITYSDK_OFFSET(0x1DA6B9C0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_ONLYONETEXTUREINATLASREUSETEXTURES_OFFSET UNITYSDK_OFFSET(0x1DA6B9D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6BA50)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline_TexturePipelineData_TypeDefinitionIndex = 90743;

	class MB3_TextureCombinerPipeline_TexturePipelineData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames; // 0x10
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>* allTexturesAreNullAndSameColor; // 0x18
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter; // 0x28
		::UnityEngine::Material* resultMaterial; // 0x30
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* texPropNamesToIgnore; // 0x40
		::MB2_TextureBakeResults* _textureBakeResults; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* allObjsToMesh; // 0x50
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* nonTexturePropertyBlender; // 0x58
		::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum _packingAlgorithm; // 0x60
		::System::Boolean _saveAtlasesAsAssets; // 0x64
		::System::Boolean _fixOutOfBoundsUVs; // 0x65
		::System::Boolean doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize; // 0x66
		::System::Boolean _useMaxAtlasHeightOverride; // 0x67
		::System::Boolean _meshBakerTexturePackerForcePowerOfTwo; // 0x68
		::System::Int32 _layerTexturePackerFastV2; // 0x6C
		::System::Int32 _maxAtlasHeight; // 0x70
		::System::Int32 _maxAtlasWidth; // 0x74
		::MB2_TextureBakeResults_ResultType resultType; // 0x78
		::System::Int32 _atlasPadding_pix; // 0x7C
		::System::Boolean _useMaxAtlasWidthOverride; // 0x80
		::System::Boolean _normalizeTexelDensity; // 0x81
		::System::Boolean _considerNonTextureProperties; // 0x82
		::System::Boolean _resizePowerOfTwoTextures; // 0x83
		::UnityEngine::ColorSpace colorSpace; // 0x84
		::System::Int32 _maxTilingBakeSize; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_numAtlases()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_GET_NUMATLASES_OFFSET))(this);
		}

		::System::Boolean OnlyOneTextureInAtlasReuseTextures()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_ONLYONETEXTUREINATLASREUSETEXTURES_OFFSET))(this);
		}
	};
}
