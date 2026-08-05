#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.h"
#include "unitysdk/MB2_TextureBakeResults_ResultType.h"
#include "unitysdk/MB3_MeshBakerRoot.h"

class MB2_TextureBakeResults;
class MB3_TextureBaker_OnCombinedTexturesCoroutineFail;
class MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess;
class MB_AtlasesAndRects;
class MB_MultiMaterial;
class MB_MultiMaterialTexArray;
class MB_TextureArrayFormatSet;
class MB_TextureArrayResultMaterial;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CreateAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MB3_TEXTUREBAKER_CONFIGURENEWMATERIALTOMATCHOLD_OFFSET UNITYSDK_OFFSET(0x1F799F30)
#define MB3_TEXTUREBAKER_CREATEANDCONFIGURETEXTURECOMBINER_OFFSET UNITYSDK_OFFSET(0x1F799E30)
#define MB3_TEXTUREBAKER_CREATEATLASESCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1F7993D0)
#define MB3_TEXTUREBAKER_CREATEATLASES_1_OFFSET UNITYSDK_OFFSET(0x1F798D00)
#define MB3_TEXTUREBAKER_CREATEATLASES_OFFSET UNITYSDK_OFFSET(0x1F798CF0)
#define MB3_TEXTUREBAKER_GETOBJECTSTOCOMBINE_OFFSET UNITYSDK_OFFSET(0x1F798AA0)
#define MB3_TEXTUREBAKER_GET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x1F7987D0)
#define MB3_TEXTUREBAKER_GET_CONSIDERNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F798A50)
#define MB3_TEXTUREBAKER_GET_COROUTINERESULT_OFFSET UNITYSDK_OFFSET(0x1F798A90)
#define MB3_TEXTUREBAKER_GET_CUSTOMSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F798950)
#define MB3_TEXTUREBAKER_GET_CUSTOMSHADERPROPNAMES_OFFSET UNITYSDK_OFFSET(0x1F798990)
#define MB3_TEXTUREBAKER_GET_DOMULTIMATERIALSPLITATLASESIFOBUVS_OFFSET UNITYSDK_OFFSET(0x1F798A10)
#define MB3_TEXTUREBAKER_GET_DOMULTIMATERIALSPLITATLASESIFTOOBIG_OFFSET UNITYSDK_OFFSET(0x1F7989F0)
#define MB3_TEXTUREBAKER_GET_DOMULTIMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F7989D0)
#define MB3_TEXTUREBAKER_GET_DOSUGGESTTREATMENT_OFFSET UNITYSDK_OFFSET(0x1F798A70)
#define MB3_TEXTUREBAKER_GET_FIXOUTOFBOUNDSUVS_OFFSET UNITYSDK_OFFSET(0x1F7988B0)
#define MB3_TEXTUREBAKER_GET_LAYERFORTEXTUREPACKERFASTMESH_OFFSET UNITYSDK_OFFSET(0x1F798910)
#define MB3_TEXTUREBAKER_GET_MAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798870)
#define MB3_TEXTUREBAKER_GET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0x1F7987F0)
#define MB3_TEXTUREBAKER_GET_MAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798830)
#define MB3_TEXTUREBAKER_GET_MAXTILINGBAKESIZE_OFFSET UNITYSDK_OFFSET(0x1F7988D0)
#define MB3_TEXTUREBAKER_GET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1F798930)
#define MB3_TEXTUREBAKER_GET_PACKINGALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F7988F0)
#define MB3_TEXTUREBAKER_GET_RESIZEPOWEROFTWOTEXTURES_OFFSET UNITYSDK_OFFSET(0x1F798890)
#define MB3_TEXTUREBAKER_GET_RESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F798A30)
#define MB3_TEXTUREBAKER_GET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1F7989B0)
#define MB3_TEXTUREBAKER_GET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1F7987B0)
#define MB3_TEXTUREBAKER_GET_TEXTUREPROPNAMESTOIGNORE_OFFSET UNITYSDK_OFFSET(0x1F798970)
#define MB3_TEXTUREBAKER_GET_USEMAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798850)
#define MB3_TEXTUREBAKER_GET_USEMAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798810)
#define MB3_TEXTUREBAKER_PRINTSET_OFFSET UNITYSDK_OFFSET(0x1F79A450)
#define MB3_TEXTUREBAKER_PURGENULLSFROMOBJECTSTOCOMBINE_OFFSET UNITYSDK_OFFSET(0x1F798B30)
#define MB3_TEXTUREBAKER_SET_ATLASPADDING_OFFSET UNITYSDK_OFFSET(0x1F7987E0)
#define MB3_TEXTUREBAKER_SET_CONSIDERNONTEXTUREPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F798A60)
#define MB3_TEXTUREBAKER_SET_CUSTOMSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F798960)
#define MB3_TEXTUREBAKER_SET_CUSTOMSHADERPROPNAMES_OFFSET UNITYSDK_OFFSET(0x1F7989A0)
#define MB3_TEXTUREBAKER_SET_DOMULTIMATERIALSPLITATLASESIFOBUVS_OFFSET UNITYSDK_OFFSET(0x1F798A20)
#define MB3_TEXTUREBAKER_SET_DOMULTIMATERIALSPLITATLASESIFTOOBIG_OFFSET UNITYSDK_OFFSET(0x1F798A00)
#define MB3_TEXTUREBAKER_SET_DOMULTIMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F7989E0)
#define MB3_TEXTUREBAKER_SET_DOSUGGESTTREATMENT_OFFSET UNITYSDK_OFFSET(0x1F798A80)
#define MB3_TEXTUREBAKER_SET_FIXOUTOFBOUNDSUVS_OFFSET UNITYSDK_OFFSET(0x1F7988C0)
#define MB3_TEXTUREBAKER_SET_LAYERFORTEXTUREPACKERFASTMESH_OFFSET UNITYSDK_OFFSET(0x1F798920)
#define MB3_TEXTUREBAKER_SET_MAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798880)
#define MB3_TEXTUREBAKER_SET_MAXATLASSIZE_OFFSET UNITYSDK_OFFSET(0x1F798800)
#define MB3_TEXTUREBAKER_SET_MAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798840)
#define MB3_TEXTUREBAKER_SET_MAXTILINGBAKESIZE_OFFSET UNITYSDK_OFFSET(0x1F7988E0)
#define MB3_TEXTUREBAKER_SET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1F798940)
#define MB3_TEXTUREBAKER_SET_PACKINGALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F798900)
#define MB3_TEXTUREBAKER_SET_RESIZEPOWEROFTWOTEXTURES_OFFSET UNITYSDK_OFFSET(0x1F7988A0)
#define MB3_TEXTUREBAKER_SET_RESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F798A40)
#define MB3_TEXTUREBAKER_SET_RESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1F7989C0)
#define MB3_TEXTUREBAKER_SET_TEXTUREBAKERESULTS_OFFSET UNITYSDK_OFFSET(0x1F7987C0)
#define MB3_TEXTUREBAKER_SET_TEXTUREPROPNAMESTOIGNORE_OFFSET UNITYSDK_OFFSET(0x1F798980)
#define MB3_TEXTUREBAKER_SET_USEMAXATLASHEIGHTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798860)
#define MB3_TEXTUREBAKER_SET_USEMAXATLASWIDTHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F798820)
#define MB3_TEXTUREBAKER_UNPACKMAT2RECTMAP_1_OFFSET UNITYSDK_OFFSET(0x1F799950)
#define MB3_TEXTUREBAKER_UNPACKMAT2RECTMAP_OFFSET UNITYSDK_OFFSET(0x1F799620)
#define MB3_TEXTUREBAKER__CREATEATLASESCOROUTINEATLASES_OFFSET UNITYSDK_OFFSET(0x1F799460)
#define MB3_TEXTUREBAKER__CREATEATLASESCOROUTINETEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1F7994F0)
#define MB3_TEXTUREBAKER__CREATEATLASESCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1F799590)
#define MB3_TEXTUREBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F79B5E0)
#define MB3_TEXTUREBAKER__VALIDATERESULTMATERIALS_OFFSET UNITYSDK_OFFSET(0x1F79A5E0)

inline static constexpr unsigned int MB3_TextureBaker_TypeDefinitionIndex = 94482;

class MB3_TextureBaker : public ::MB3_MeshBakerRoot
{
public:
	::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x28
	::MB2_TextureBakeResults* _textureBakeResults; // 0x30
	::System::Int32 _atlasPadding; // 0x38
	::System::Int32 _maxAtlasSize; // 0x3C
	::System::Boolean _useMaxAtlasWidthOverride; // 0x40
	::System::Int32 _maxAtlasWidthOverride; // 0x44
	::System::Boolean _useMaxAtlasHeightOverride; // 0x48
	::System::Int32 _maxAtlasHeightOverride; // 0x4C
	::System::Boolean _resizePowerOfTwoTextures; // 0x50
	::System::Boolean _fixOutOfBoundsUVs; // 0x51
	::System::Int32 _maxTilingBakeSize; // 0x54
	::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum _packingAlgorithm; // 0x58
	::System::Int32 _layerTexturePackerFastMesh; // 0x5C
	::System::Boolean _meshBakerTexturePackerForcePowerOfTwo; // 0x60
	::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderProperties; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* _texturePropNamesToIgnore; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* _customShaderPropNames_Depricated; // 0x78
	::MB2_TextureBakeResults_ResultType _resultType; // 0x80
	::System::Boolean _doMultiMaterial; // 0x84
	::System::Boolean _doMultiMaterialSplitAtlasesIfTooBig; // 0x85
	::System::Boolean _doMultiMaterialSplitAtlasesIfOBUVs; // 0x86
	::UnityEngine::Material* _resultMaterial; // 0x88
	::System::Boolean _considerNonTextureProperties; // 0x90
	::System::Boolean _doSuggestTreatment; // 0x91
	::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* _coroutineResult; // 0x98
	::Il2CppArray<::MB_MultiMaterial*>* resultMaterials; // 0xA0
	::Il2CppArray<::MB_MultiMaterialTexArray*>* resultMaterialsTexArray; // 0xA8
	::Il2CppArray<::MB_TextureArrayFormatSet*>* textureArrayOutputFormats; // 0xB0
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh; // 0xB8
	::MB3_TextureBaker_OnCombinedTexturesCoroutineSuccess* onBuiltAtlasesSuccess; // 0xC0
	::MB3_TextureBaker_OnCombinedTexturesCoroutineFail* onBuiltAtlasesFail; // 0xC8
	::Il2CppArray<::MB_AtlasesAndRects*>* OnCombinedTexturesCoroutineAtlasesAndRects; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER__CTOR_OFFSET))(this);
	}

	::MB2_TextureBakeResults* get_textureBakeResults()
	{
		return ((::MB2_TextureBakeResults*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_TEXTUREBAKERESULTS_OFFSET))(this);
	}

	::System::Void set_textureBakeResults(::MB2_TextureBakeResults* value)
	{
		return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_TEXTUREBAKERESULTS_OFFSET))(this, value);
	}

	::System::Int32 get_atlasPadding()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_ATLASPADDING_OFFSET))(this);
	}

	::System::Void set_atlasPadding(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_ATLASPADDING_OFFSET))(this, value);
	}

	::System::Int32 get_maxAtlasSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_MAXATLASSIZE_OFFSET))(this);
	}

	::System::Void set_maxAtlasSize(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_MAXATLASSIZE_OFFSET))(this, value);
	}

	::System::Boolean get_useMaxAtlasWidthOverride()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_USEMAXATLASWIDTHOVERRIDE_OFFSET))(this);
	}

	::System::Void set_useMaxAtlasWidthOverride(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_USEMAXATLASWIDTHOVERRIDE_OFFSET))(this, value);
	}

	::System::Int32 get_maxAtlasWidthOverride()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_MAXATLASWIDTHOVERRIDE_OFFSET))(this);
	}

	::System::Void set_maxAtlasWidthOverride(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_MAXATLASWIDTHOVERRIDE_OFFSET))(this, value);
	}

	::System::Boolean get_useMaxAtlasHeightOverride()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_USEMAXATLASHEIGHTOVERRIDE_OFFSET))(this);
	}

	::System::Void set_useMaxAtlasHeightOverride(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_USEMAXATLASHEIGHTOVERRIDE_OFFSET))(this, value);
	}

	::System::Int32 get_maxAtlasHeightOverride()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_MAXATLASHEIGHTOVERRIDE_OFFSET))(this);
	}

	::System::Void set_maxAtlasHeightOverride(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_MAXATLASHEIGHTOVERRIDE_OFFSET))(this, value);
	}

	::System::Boolean get_resizePowerOfTwoTextures()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_RESIZEPOWEROFTWOTEXTURES_OFFSET))(this);
	}

	::System::Void set_resizePowerOfTwoTextures(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_RESIZEPOWEROFTWOTEXTURES_OFFSET))(this, value);
	}

	::System::Boolean get_fixOutOfBoundsUVs()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_FIXOUTOFBOUNDSUVS_OFFSET))(this);
	}

	::System::Void set_fixOutOfBoundsUVs(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_FIXOUTOFBOUNDSUVS_OFFSET))(this, value);
	}

	::System::Int32 get_maxTilingBakeSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_MAXTILINGBAKESIZE_OFFSET))(this);
	}

	::System::Void set_maxTilingBakeSize(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_MAXTILINGBAKESIZE_OFFSET))(this, value);
	}

	::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum get_packingAlgorithm()
	{
		return ((::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_PACKINGALGORITHM_OFFSET))(this);
	}

	::System::Void set_packingAlgorithm(::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum value)
	{
		return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_PACKINGALGORITHM_OFFSET))(this, value);
	}

	::System::Int32 get_layerForTexturePackerFastMesh()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_LAYERFORTEXTUREPACKERFASTMESH_OFFSET))(this);
	}

	::System::Void set_layerForTexturePackerFastMesh(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_LAYERFORTEXTUREPACKERFASTMESH_OFFSET))(this, value);
	}

	::System::Boolean get_meshBakerTexturePackerForcePowerOfTwo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET))(this);
	}

	::System::Void set_meshBakerTexturePackerForcePowerOfTwo(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_MESHBAKERTEXTUREPACKERFORCEPOWEROFTWO_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* get_customShaderProperties()
	{
		return ((::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_CUSTOMSHADERPROPERTIES_OFFSET))(this);
	}

	::System::Void set_customShaderProperties(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_CUSTOMSHADERPROPERTIES_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_texturePropNamesToIgnore()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_TEXTUREPROPNAMESTOIGNORE_OFFSET))(this);
	}

	::System::Void set_texturePropNamesToIgnore(::System::Collections::Generic::List_1<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_TEXTUREPROPNAMESTOIGNORE_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_customShaderPropNames()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_CUSTOMSHADERPROPNAMES_OFFSET))(this);
	}

	::System::Void set_customShaderPropNames(::System::Collections::Generic::List_1<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_CUSTOMSHADERPROPNAMES_OFFSET))(this, value);
	}

	::MB2_TextureBakeResults_ResultType get_resultType()
	{
		return ((::MB2_TextureBakeResults_ResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_RESULTTYPE_OFFSET))(this);
	}

	::System::Void set_resultType(::MB2_TextureBakeResults_ResultType value)
	{
		return ((::System::Void(*)(::PVOID, ::MB2_TextureBakeResults_ResultType))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_RESULTTYPE_OFFSET))(this, value);
	}

	::System::Boolean get_doMultiMaterial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_DOMULTIMATERIAL_OFFSET))(this);
	}

	::System::Void set_doMultiMaterial(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_DOMULTIMATERIAL_OFFSET))(this, value);
	}

	::System::Boolean get_doMultiMaterialSplitAtlasesIfTooBig()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_DOMULTIMATERIALSPLITATLASESIFTOOBIG_OFFSET))(this);
	}

	::System::Void set_doMultiMaterialSplitAtlasesIfTooBig(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_DOMULTIMATERIALSPLITATLASESIFTOOBIG_OFFSET))(this, value);
	}

	::System::Boolean get_doMultiMaterialSplitAtlasesIfOBUVs()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_DOMULTIMATERIALSPLITATLASESIFOBUVS_OFFSET))(this);
	}

	::System::Void set_doMultiMaterialSplitAtlasesIfOBUVs(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_DOMULTIMATERIALSPLITATLASESIFOBUVS_OFFSET))(this, value);
	}

	::UnityEngine::Material* get_resultMaterial()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_RESULTMATERIAL_OFFSET))(this);
	}

	::System::Void set_resultMaterial(::UnityEngine::Material* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_RESULTMATERIAL_OFFSET))(this, value);
	}

	::System::Boolean get_considerNonTextureProperties()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_CONSIDERNONTEXTUREPROPERTIES_OFFSET))(this);
	}

	::System::Void set_considerNonTextureProperties(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_CONSIDERNONTEXTUREPROPERTIES_OFFSET))(this, value);
	}

	::System::Boolean get_doSuggestTreatment()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_DOSUGGESTTREATMENT_OFFSET))(this);
	}

	::System::Void set_doSuggestTreatment(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_SET_DOSUGGESTTREATMENT_OFFSET))(this, value);
	}

	::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* get_CoroutineResult()
	{
		return ((::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GET_COROUTINERESULT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetObjectsToCombine()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_GETOBJECTSTOCOMBINE_OFFSET))(this);
	}

	::System::Void PurgeNullsFromObjectsToCombine()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_PURGENULLSFROMOBJECTSTOCOMBINE_OFFSET))(this);
	}

	::Il2CppArray<::MB_AtlasesAndRects*>* CreateAtlases()
	{
		return ((::Il2CppArray<::MB_AtlasesAndRects*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_CREATEATLASES_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CreateAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult, ::System::Boolean saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods, ::System::Single maxTimePerFrame)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Single))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_CREATEATLASESCOROUTINE_OFFSET))(this, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
	}

	::System::Collections::IEnumerator* _CreateAtlasesCoroutineAtlases(::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult, ::System::Boolean saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods, ::System::Single maxTimePerFrame)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Single))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER__CREATEATLASESCOROUTINEATLASES_OFFSET))(this, combiner, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
	}

	::System::Collections::IEnumerator* _CreateAtlasesCoroutineTextureArray(::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult, ::System::Boolean saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods, ::System::Single maxTimePerFrame)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Single))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER__CREATEATLASESCOROUTINETEXTUREARRAY_OFFSET))(this, combiner, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
	}

	::System::Collections::IEnumerator* _CreateAtlasesCoroutine(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult, ::System::Boolean saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods, ::System::Single maxTimePerFrame)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Single))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER__CREATEATLASESCOROUTINE_OFFSET))(this, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
	}

	::Il2CppArray<::MB_AtlasesAndRects*>* CreateAtlases_1(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::System::Boolean saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods)
	{
		return ((::Il2CppArray<::MB_AtlasesAndRects*>*(*)(::PVOID, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_CREATEATLASES_1_OFFSET))(this, progressInfo, saveAtlasesAsAssets, editorMethods);
	}

	::System::Void unpackMat2RectMap(::Il2CppArray<::MB_AtlasesAndRects*>* rawResults)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MB_AtlasesAndRects*>*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_UNPACKMAT2RECTMAP_OFFSET))(this, rawResults);
	}

	::System::Void unpackMat2RectMap_1(::Il2CppArray<::MB_TextureArrayResultMaterial*>* rawResults)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MB_TextureArrayResultMaterial*>*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_UNPACKMAT2RECTMAP_1_OFFSET))(this, rawResults);
	}

	::DigitalOpus::MB::Core::MB3_TextureCombiner* CreateAndConfigureTextureCombiner()
	{
		return ((::DigitalOpus::MB::Core::MB3_TextureCombiner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_CREATEANDCONFIGURETEXTURECOMBINER_OFFSET))(this);
	}

	static ::System::Void ConfigureNewMaterialToMatchOld(::UnityEngine::Material* newMat, ::UnityEngine::Material* original)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_CONFIGURENEWMATERIALTOMATCHOLD_OFFSET))(newMat, original);
	}

	::System::String* PrintSet(::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* s)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER_PRINTSET_OFFSET))(this, s);
	}

	::System::Boolean _ValidateResultMaterials()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_TEXTUREBAKER__VALIDATERESULTMATERIALS_OFFSET))(this);
	}
};
