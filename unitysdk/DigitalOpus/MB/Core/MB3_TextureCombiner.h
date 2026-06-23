#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.h"
#include "unitysdk/MB2_TextureBakeResults_ResultType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

class MB2_TextureBakeResults;
class MB_AtlasesAndRects;
namespace DigitalOpus::MB::Core { class AtlasPackingResult; }
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_TemporaryTexture; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_ADDTEMPORARYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DAD4FF0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_COMBINETEXTURESINTOATLASESCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1DAD49A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_COMBINETEXTURESINTOATLASES_OFFSET UNITYSDK_OFFSET(0x1DAD4790)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x1DAD4270)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_CONSIDERNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DAD4450)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_CUSTOMSHADERPROPNAMES_OFFSET UNITYSDK_OFFSET(0x1DAD4430)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_DOMERGEDISTINCTMATERIALTEXTURESTHATWOULDEXCEEDATLASSIZE_OFFSET UNITYSDK_OFFSET(0x1DAD4470)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_FIXOUTOFBOUNDSUVS_OFFSET UNITYSDK_OFFSET(0x1DAD4350)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_LAYERTEXTUREPACKERFASTMESH_OFFSET UNITYSDK_OFFSET(0x1DAD4370)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD42D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0x1DAD4290)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD42B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXTILINGBAKESIZE_OFFSET UNITYSDK_OFFSET(0x1DAD4390)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1DAD4410)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_PACKINGALGORITHM_OFFSET UNITYSDK_OFFSET(0x1DAD43F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_RESIZEPOWEROFTWOTEXTURES_OFFSET UNITYSDK_OFFSET(0x1DAD4330)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1DAD43D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_SAVEATLASESASASSETS_OFFSET UNITYSDK_OFFSET(0x1DAD43B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1DAD4250)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_USEMAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD4310)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_USEMAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD42F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_LOADPIPELINEDATA_OFFSET UNITYSDK_OFFSET(0x1DAD4A90)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_PRINTLIST_OFFSET UNITYSDK_OFFSET(0x1DAD82F0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_RUNCORUTINEWITHOUTPAUSE_OFFSET UNITYSDK_OFFSET(0x1DAD4490)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x1DAD4280)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_CONSIDERNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DAD4460)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_CUSTOMSHADERPROPNAMES_OFFSET UNITYSDK_OFFSET(0x1DAD4440)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_DOMERGEDISTINCTMATERIALTEXTURESTHATWOULDEXCEEDATLASSIZE_OFFSET UNITYSDK_OFFSET(0x1DAD4480)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_FIXOUTOFBOUNDSUVS_OFFSET UNITYSDK_OFFSET(0x1DAD4360)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_LAYERTEXTUREPACKERFASTMESH_OFFSET UNITYSDK_OFFSET(0x1DAD4380)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD42E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0x1DAD42A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD42C0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXTILINGBAKESIZE_OFFSET UNITYSDK_OFFSET(0x1DAD43A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1DAD4420)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_PACKINGALGORITHM_OFFSET UNITYSDK_OFFSET(0x1DAD4400)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_RESIZEPOWEROFTWOTEXTURES_OFFSET UNITYSDK_OFFSET(0x1DAD4340)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1DAD43E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_SAVEATLASESASASSETS_OFFSET UNITYSDK_OFFSET(0x1DAD43C0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1DAD4260)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_USEMAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD4320)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_USEMAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DAD4300)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SHOULDTEXTUREBELINEAR_OFFSET UNITYSDK_OFFSET(0x1DAD8400)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SUGGESTTREATMENT_OFFSET UNITYSDK_OFFSET(0x1DAD5AD0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8510)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASES_OFFSET UNITYSDK_OFFSET(0x1DAD48D0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CREATETEMPORARYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1DAD4DF0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CREATETEXTURECOPY_OFFSET UNITYSDK_OFFSET(0x1DAD5050)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8430)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__DESTROYALLTEMPORARYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1DAD53B0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__DESTROYTEMPORARYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1DAD54E0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__GETNUMTEMPORARYTEXTURES_OFFSET UNITYSDK_OFFSET(0x1DAD4DD0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__RESIZETEXTURE_OFFSET UNITYSDK_OFFSET(0x1DAD5200)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__RESTOREPROCEDURALMATERIALS_OFFSET UNITYSDK_OFFSET(0x1DAD5AC0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_OFFSET UNITYSDK_OFFSET(0x1DAD4CC0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___RUNTEXTUREPACKERONLY_OFFSET UNITYSDK_OFFSET(0x1DAD4D40)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner_TypeDefinitionIndex = 90692;

	class MB3_TextureCombiner : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__RunCorutineWithoutPauseIsRunning()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MB3_TextureCombiner_TypeDefinitionIndex)->GetStaticField(0x12C50);
		}
		// static const ::System::Int32 TEMP_SOLID_COLOR_TEXTURE_SIZE = 0x10; // 0x0
		::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x10
		::MB2_TextureBakeResults* _textureBakeResults; // 0x18
		::System::Int32 _atlasPadding; // 0x20
		::System::Int32 _maxAtlasSize; // 0x24
		::System::Int32 _maxAtlasWidthOverride; // 0x28
		::System::Int32 _maxAtlasHeightOverride; // 0x2C
		::System::Boolean _useMaxAtlasWidthOverride; // 0x30
		::System::Boolean _useMaxAtlasHeightOverride; // 0x31
		::System::Boolean _resizePowerOfTwoTextures; // 0x32
		::System::Boolean _fixOutOfBoundsUVs; // 0x33
		::System::Int32 _layerTexturePackerFastMesh; // 0x34
		::System::Int32 _maxTilingBakeSize; // 0x38
		::System::Boolean _saveAtlasesAsAssets; // 0x3C
		::MB2_TextureBakeResults_ResultType _resultType; // 0x40
		::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum _packingAlgorithm; // 0x44
		::System::Boolean _meshBakerTexturePackerForcePowerOfTwo; // 0x48
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames; // 0x50
		::System::Boolean _normalizeTexelDensity; // 0x58
		::System::Boolean _considerNonTextureProperties; // 0x59
		::System::Boolean _doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize; // 0x5A
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*>* _temporaryTextures; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CCTOR_OFFSET))();
		}

		::MB2_TextureBakeResults* get_textureBakeResults()
		{
			return ((::MB2_TextureBakeResults*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_TEXTUREBAKERESULTS_OFFSET))(this);
		}

		::System::Void set_textureBakeResults(::MB2_TextureBakeResults* value)
		{
			return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_TEXTUREBAKERESULTS_OFFSET))(this, value);
		}

		::System::Int32 get_atlasPadding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_ATLASPADDING_OFFSET))(this);
		}

		::System::Void set_atlasPadding(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_ATLASPADDING_OFFSET))(this, value);
		}

		::System::Int32 get_maxAtlasSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXATLASSIZE_OFFSET))(this);
		}

		::System::Void set_maxAtlasSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXATLASSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_maxAtlasWidthOverride()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXATLASWIDTHOVERRIDE_OFFSET))(this);
		}

		::System::Void set_maxAtlasWidthOverride(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXATLASWIDTHOVERRIDE_OFFSET))(this, value);
		}

		::System::Int32 get_maxAtlasHeightOverride()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXATLASHEIGHTOVERRIDE_OFFSET))(this);
		}

		::System::Void set_maxAtlasHeightOverride(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXATLASHEIGHTOVERRIDE_OFFSET))(this, value);
		}

		::System::Boolean get_useMaxAtlasWidthOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_USEMAXATLASWIDTHOVERRIDE_OFFSET))(this);
		}

		::System::Void set_useMaxAtlasWidthOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_USEMAXATLASWIDTHOVERRIDE_OFFSET))(this, value);
		}

		::System::Boolean get_useMaxAtlasHeightOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_USEMAXATLASHEIGHTOVERRIDE_OFFSET))(this);
		}

		::System::Void set_useMaxAtlasHeightOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_USEMAXATLASHEIGHTOVERRIDE_OFFSET))(this, value);
		}

		::System::Boolean get_resizePowerOfTwoTextures()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_RESIZEPOWEROFTWOTEXTURES_OFFSET))(this);
		}

		::System::Void set_resizePowerOfTwoTextures(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_RESIZEPOWEROFTWOTEXTURES_OFFSET))(this, value);
		}

		::System::Boolean get_fixOutOfBoundsUVs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_FIXOUTOFBOUNDSUVS_OFFSET))(this);
		}

		::System::Void set_fixOutOfBoundsUVs(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_FIXOUTOFBOUNDSUVS_OFFSET))(this, value);
		}

		::System::Int32 get_layerTexturePackerFastMesh()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_LAYERTEXTUREPACKERFASTMESH_OFFSET))(this);
		}

		::System::Void set_layerTexturePackerFastMesh(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_LAYERTEXTUREPACKERFASTMESH_OFFSET))(this, value);
		}

		::System::Int32 get_maxTilingBakeSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MAXTILINGBAKESIZE_OFFSET))(this);
		}

		::System::Void set_maxTilingBakeSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MAXTILINGBAKESIZE_OFFSET))(this, value);
		}

		::System::Boolean get_saveAtlasesAsAssets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_SAVEATLASESASASSETS_OFFSET))(this);
		}

		::System::Void set_saveAtlasesAsAssets(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_SAVEATLASESASASSETS_OFFSET))(this, value);
		}

		::MB2_TextureBakeResults_ResultType get_resultType()
		{
			return ((::MB2_TextureBakeResults_ResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_RESULTTYPE_OFFSET))(this);
		}

		::System::Void set_resultType(::MB2_TextureBakeResults_ResultType value)
		{
			return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults_ResultType))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_RESULTTYPE_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum get_packingAlgorithm()
		{
			return ((::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_PACKINGALGORITHM_OFFSET))(this);
		}

		::System::Void set_packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_PACKINGALGORITHM_OFFSET))(this, value);
		}

		::System::Boolean get_meshBakerTexturePackerForcePowerOfTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET))(this);
		}

		::System::Void set_meshBakerTexturePackerForcePowerOfTwo(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* get_customShaderPropNames()
		{
			return ((::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_CUSTOMSHADERPROPNAMES_OFFSET))(this);
		}

		::System::Void set_customShaderPropNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_CUSTOMSHADERPROPNAMES_OFFSET))(this, value);
		}

		::System::Boolean get_considerNonTextureProperties()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_CONSIDERNONTEXTUREPROPERTIES_OFFSET))(this);
		}

		::System::Void set_considerNonTextureProperties(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_CONSIDERNONTEXTUREPROPERTIES_OFFSET))(this, value);
		}

		::System::Boolean get_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_GET_DOMERGEDISTINCTMATERIALTEXTURESTHATWOULDEXCEEDATLASSIZE_OFFSET))(this);
		}

		::System::Void set_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SET_DOMERGEDISTINCTMATERIALTEXTURESTHATWOULDEXCEEDATLASSIZE_OFFSET))(this, value);
		}

		static ::System::Void RunCorutineWithoutPause(::System::Collections::IEnumerator* cor, ::System::Int32 recursionDepth)
		{
			return ((::System::Void(*)(::System::Collections::IEnumerator*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_RUNCORUTINEWITHOUTPAUSE_OFFSET))(cor, recursionDepth);
		}

		::System::Boolean CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter, ::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* packingResults, ::System::Boolean onlyPackRects, ::System::Boolean splitAtlasWhenPackingIfTooBig)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::MB_AtlasesAndRects*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_COMBINETEXTURESINTOATLASES_OFFSET))(this, progressInfo, resultAtlasesAndRects, resultMaterial, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, textureEditorMethods, packingResults, onlyPackRects, splitAtlasWhenPackingIfTooBig);
		}

		::System::Collections::IEnumerator* CombineTexturesIntoAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter, ::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* coroutineResult, ::System::Single maxTimePerFrame, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* packingResults, ::System::Boolean onlyPackRects, ::System::Boolean splitAtlasWhenPackingIfTooBig)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::MB_AtlasesAndRects*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::System::Single, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_COMBINETEXTURESINTOATLASESCOROUTINE_OFFSET))(this, progressInfo, resultAtlasesAndRects, resultMaterial, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, textureEditorMethods, coroutineResult, maxTimePerFrame, packingResults, onlyPackRects, splitAtlasWhenPackingIfTooBig);
		}

		::System::Collections::IEnumerator* _CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter, ::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* atlasPackingResult, ::System::Boolean onlyPackRects, ::System::Boolean splitAtlasWhenPackingIfTooBig)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::MB_AtlasesAndRects*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__COMBINETEXTURESINTOATLASES_OFFSET))(this, progressInfo, result, resultAtlasesAndRects, resultMaterial, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, textureEditorMethods, atlasPackingResult, onlyPackRects, splitAtlasWhenPackingIfTooBig);
		}

		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* LoadPipelineData(::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter, ::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures)
		{
			return ((::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*(*)(::PVOID, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_LOADPIPELINEDATA_OFFSET))(this, resultMaterial, texPropertyNames, objsToMesh, allowedMaterialsFilter, texPropsToIgnore, distinctMaterialTextures);
		}

		::System::Collections::IEnumerator* __CombineTexturesIntoAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::MB_AtlasesAndRects*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___COMBINETEXTURESINTOATLASES_OFFSET))(this, progressInfo, result, resultAtlasesAndRects, data, textureEditorMethods);
		}

		::System::Collections::IEnumerator* __RunTexturePackerOnly(::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::MB_AtlasesAndRects* resultAtlasesAndRects, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data, ::System::Boolean splitAtlasWhenPackingIfTooBig, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>* packingResult)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::MB_AtlasesAndRects*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPackingResult*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER___RUNTEXTUREPACKERONLY_OFFSET))(this, result, resultAtlasesAndRects, data, splitAtlasWhenPackingIfTooBig, textureEditorMethods, packingResult);
		}

		::System::Int32 _getNumTemporaryTextures()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__GETNUMTEMPORARYTEXTURES_OFFSET))(this);
		}

		::UnityEngine::Texture2D* _createTemporaryTexture(::System::String* propertyName, ::System::Int32 w, ::System::Int32 h, ::UnityEngine::TextureFormat texFormat, ::System::Boolean mipMaps, ::System::Boolean linear)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CREATETEMPORARYTEXTURE_OFFSET))(this, propertyName, w, h, texFormat, mipMaps, linear);
		}

		::System::Void AddTemporaryTexture(::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture* tt)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombiner_TemporaryTexture*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_ADDTEMPORARYTEXTURE_OFFSET))(this, tt);
		}

		::UnityEngine::Texture2D* _createTextureCopy(::DigitalOpus::MB::Core::ShaderTextureProperty* propertyName, ::UnityEngine::Texture2D* t)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__CREATETEXTURECOPY_OFFSET))(this, propertyName, t);
		}

		::UnityEngine::Texture2D* _resizeTexture(::DigitalOpus::MB::Core::ShaderTextureProperty* propertyName, ::UnityEngine::Texture2D* t, ::System::Int32 w, ::System::Int32 h)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__RESIZETEXTURE_OFFSET))(this, propertyName, t, w, h);
		}

		::System::Void _destroyAllTemporaryTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__DESTROYALLTEMPORARYTEXTURES_OFFSET))(this);
		}

		::System::Void _destroyTemporaryTextures(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__DESTROYTEMPORARYTEXTURES_OFFSET))(this, propertyName);
		}

		::System::Void _restoreProceduralMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER__RESTOREPROCEDURALMATERIALS_OFFSET))(this);
		}

		::System::Void SuggestTreatment(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh, ::Il2CppArray<::UnityEngine::Material*>* resultMaterials, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames, ::System::Collections::Generic::List_1<::System::String*>* texPropsToIgnore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SUGGESTTREATMENT_OFFSET))(this, objsToMesh, resultMaterials, _customShaderPropNames, texPropsToIgnore);
		}

		static ::System::Boolean ShouldTextureBeLinear(::DigitalOpus::MB::Core::ShaderTextureProperty* shaderTextureProperty)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_SHOULDTEXTUREBELINEAR_OFFSET))(shaderTextureProperty);
		}

		::System::String* PrintList(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_PRINTLIST_OFFSET))(this, gos);
		}
	};
}
