#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

class MB_AtlasesAndRects;
class MB_MultiMaterialTexArray;
class MB_TextureArrayFormatSet;
class MB_TextureArrayResultMaterial;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner; }
namespace DigitalOpus::MB::Core { class MB3_TextureCombiner_CreateAtlasesCoroutineResult; }
namespace DigitalOpus::MB::Core { class MB_TextureArrays_TexturePropertyData; }
namespace DigitalOpus::MB::Core { class ProgressUpdateDelegate; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }

#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_CONVERTTEXTURESTOREADABLEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B66DC40)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_CREATETEXTUREARRAYSFORRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B66D0B0)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_DETERMINEWHICHPROPERTIESHAVETEXTURES_OFFSET UNITYSDK_OFFSET(0x1B66CD20)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_FINDBESTSIZEANDMIPCOUNTANDFORMATFORTEXTUREARRAYS_OFFSET UNITYSDK_OFFSET(0x1B66ED70)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_ISLINEARPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B66CF80)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS__CREATEATLASESCOROUTINESINGLERESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B66F340)
#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66F440)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TextureArrays_TypeDefinitionIndex = 85177;

	class MB_TextureArrays : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Boolean>* DetermineWhichPropertiesHaveTextures(::Il2CppArray<::MB_AtlasesAndRects*>* resultAtlasesAndRectSlices)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::Il2CppArray<::MB_AtlasesAndRects*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_DETERMINEWHICHPROPERTIESHAVETEXTURES_OFFSET))(resultAtlasesAndRectSlices);
		}

		static ::System::Boolean IsLinearProperty(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* shaderPropertyNames, ::System::String* shaderProperty)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_ISLINEARPROPERTY_OFFSET))(shaderPropertyNames, shaderProperty);
		}

		static ::Il2CppArray<::UnityEngine::Texture2DArray*>* CreateTextureArraysForResultMaterial(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData* texPropertyData, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* masterListOfTexProperties, ::Il2CppArray<::MB_AtlasesAndRects*>* resultAtlasesAndRectSlices, ::Il2CppArray<::System::Boolean>* hasTexForProperty, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL)
		{
			return ((::Il2CppArray<::UnityEngine::Texture2DArray*>*(*)(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::Il2CppArray<::MB_AtlasesAndRects*>*, ::Il2CppArray<::System::Boolean>*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_CREATETEXTUREARRAYSFORRESULTMATERIAL_OFFSET))(texPropertyData, masterListOfTexProperties, resultAtlasesAndRectSlices, hasTexForProperty, combiner, LOG_LEVEL);
		}

		static ::System::Boolean ConvertTexturesToReadableFormat(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData* texturePropertyData, ::Il2CppArray<::MB_AtlasesAndRects*>* resultAtlasesAndRectSlices, ::Il2CppArray<::System::Boolean>* hasTexForProperty, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* textureShaderProperties, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* createdTemporaryTextureAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods)
		{
			return ((::System::Boolean(*)(::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*, ::Il2CppArray<::MB_AtlasesAndRects*>*, ::Il2CppArray<::System::Boolean>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_LogLevel, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_CONVERTTEXTURESTOREADABLEFORMAT_OFFSET))(texturePropertyData, resultAtlasesAndRectSlices, hasTexForProperty, textureShaderProperties, combiner, logLevel, createdTemporaryTextureAssets, textureEditorMethods);
		}

		static ::System::Void FindBestSizeAndMipCountAndFormatForTextureArrays(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames, ::System::Int32 maxAtlasSize, ::MB_TextureArrayFormatSet* targetFormatSet, ::Il2CppArray<::MB_AtlasesAndRects*>* resultAtlasesAndRectSlices, ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData* texturePropertyData)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Int32, ::MB_TextureArrayFormatSet*, ::Il2CppArray<::MB_AtlasesAndRects*>*, ::DigitalOpus::MB::Core::MB_TextureArrays_TexturePropertyData*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_FINDBESTSIZEANDMIPCOUNTANDFORMATFORTEXTUREARRAYS_OFFSET))(texPropertyNames, maxAtlasSize, targetFormatSet, resultAtlasesAndRectSlices, texturePropertyData);
		}

		static ::System::Collections::IEnumerator* _CreateAtlasesCoroutineSingleResultMaterial(::System::Int32 resMatIdx, ::MB_TextureArrayResultMaterial* bakedMatsAndSlicesResMat, ::MB_MultiMaterialTexArray* resMatConfig, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objsToMesh, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::Il2CppArray<::MB_TextureArrayFormatSet*>* textureArrayOutputFormats, ::Il2CppArray<::MB_MultiMaterialTexArray*>* resultMaterialsTexArray, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* customShaderProperties, ::System::Collections::Generic::List_1<::System::String*>* texPropNamesToIgnore, ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* coroutineResult, ::System::Boolean saveAtlasesAsAssets, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods, ::System::Single maxTimePerFrame)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::MB_TextureArrayResultMaterial*, ::MB_MultiMaterialTexArray*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::Il2CppArray<::MB_TextureArrayFormatSet*>*, ::Il2CppArray<::MB_MultiMaterialTexArray*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*, ::System::Boolean, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS__CREATEATLASESCOROUTINESINGLERESULTMATERIAL_OFFSET))(resMatIdx, bakedMatsAndSlicesResMat, resMatConfig, objsToMesh, combiner, textureArrayOutputFormats, resultMaterialsTexArray, customShaderProperties, texPropNamesToIgnore, progressInfo, coroutineResult, saveAtlasesAsAssets, editorMethods, maxTimePerFrame);
		}
	};
}
