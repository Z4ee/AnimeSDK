#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_MaterialInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_MaterialData_Source.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_COPYMATERIAL_OFFSET UNITYSDK_OFFSET(0x846C170)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEHOUDINIMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x846CA40)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEMATERIALINCACHE_OFFSET UNITYSDK_OFFSET(0x846C6B0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATENEWHOUDINISTANDARDMATERIAL_OFFSET UNITYSDK_OFFSET(0x846AE40)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEUNITYSUBSTANCEMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x846C3D0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DELETEASSETMATERIAL_OFFSET UNITYSDK_OFFSET(0x8454E60)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DESTROYNONASSETMATERIAL_OFFSET UNITYSDK_OFFSET(0x846AF30)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DOESMATERIALEXISTINASSETCACHE_OFFSET UNITYSDK_OFFSET(0x846AF00)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x846C130)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREFILE_OFFSET UNITYSDK_OFFSET(0x846B520)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREPNGJPEG_OFFSET UNITYSDK_OFFSET(0x846B360)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTURERAW_OFFSET UNITYSDK_OFFSET(0x846AF70)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDPLUGINSHADER_OFFSET UNITYSDK_OFFSET(0x8469E70)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDSHADER_OFFSET UNITYSDK_OFFSET(0x846ABE0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GENERATEDEFAULTMATERIALNAME_OFFSET UNITYSDK_OFFSET(0x846C8A0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETDEFAULTSTANDARDMATERIAL_OFFSET UNITYSDK_OFFSET(0x846C1A0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAFROMCACHE_OFFSET UNITYSDK_OFFSET(0x846C940)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAMAPFROMCACHE_OFFSET UNITYSDK_OFFSET(0x846CB00)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETNEWMATERIALWITHSHADER_OFFSET UNITYSDK_OFFSET(0x846AC90)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETORCREATEDEFAULTMATERIALINCACHE_OFFSET UNITYSDK_OFFSET(0x846C750)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETUNITYSUBSTANCEMATERIALKEY_OFFSET UNITYSDK_OFFSET(0x846BF10)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x846BBE0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHNAME_OFFSET UNITYSDK_OFFSET(0x846B8E0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x846C210)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADUNITYMATERIAL_OFFSET UNITYSDK_OFFSET(0x846B720)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALHASGPUINSTANCINGENABLED_OFFSET UNITYSDK_OFFSET(0x846C150)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALNAMETOKEY_OFFSET UNITYSDK_OFFSET(0x846C0A0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_RENDERANDEXTRACTIMAGETOTEXTURE_OFFSET UNITYSDK_OFFSET(0x846A3D0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x846C3C0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WRITEMATERIALTOASSETCACHE_OFFSET UNITYSDK_OFFSET(0x846AE60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MaterialFactory_TypeDefinitionIndex = 37764;

	class HEU_MaterialFactory : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet__defaultStandardMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(HEU_MaterialFactory_TypeDefinitionIndex)->GetStaticField(0x4EF0);
		}

		static ::UnityEngine::Shader* FindShader(::System::String* shaderName)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDSHADER_OFFSET))(shaderName);
		}

		static ::UnityEngine::Shader* FindPluginShader(::System::String* shaderName)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDPLUGINSHADER_OFFSET))(shaderName);
		}

		static ::UnityEngine::Material* GetNewMaterialWithShader(::System::String* assetCacheFolderPath, ::System::String* shaderName, ::System::String* materialName, ::System::Boolean bWriteToFile)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETNEWMATERIALWITHSHADER_OFFSET))(assetCacheFolderPath, shaderName, materialName, bWriteToFile);
		}

		static ::UnityEngine::Material* CreateNewHoudiniStandardMaterial(::System::String* assetCacheFolderPath, ::System::String* materialName, ::System::Boolean bWriteToFile)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATENEWHOUDINISTANDARDMATERIAL_OFFSET))(assetCacheFolderPath, materialName, bWriteToFile);
		}

		static ::System::Void WriteMaterialToAssetCache(::UnityEngine::Material* material, ::System::String* assetCacheFolderPath, ::System::String* materialName, ::System::Boolean bOverwriteExisting)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WRITEMATERIALTOASSETCACHE_OFFSET))(material, assetCacheFolderPath, materialName, bOverwriteExisting);
		}

		static ::System::Boolean DoesMaterialExistInAssetCache(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DOESMATERIALEXISTINASSETCACHE_OFFSET))(material);
		}

		static ::System::Void DestroyNonAssetMaterial(::UnityEngine::Material* material, ::System::Boolean bRegisterUndo)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DESTROYNONASSETMATERIAL_OFFSET))(material, bRegisterUndo);
		}

		static ::System::Void DeleteAssetMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DELETEASSETMATERIAL_OFFSET))(material);
		}

		static ::UnityEngine::Texture2D* RenderAndExtractImageToTexture(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::System::Int32 textureParmID, ::System::String* textureName, ::System::String* assetCacheFolderPath)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_RENDERANDEXTRACTIMAGETOTEXTURE_OFFSET))(session, materialInfo, textureParmID, textureName, assetCacheFolderPath);
		}

		static ::UnityEngine::Texture2D* ExtractHoudiniImageToTexturePNGJPEG(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::System::String* imagePlanes)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREPNGJPEG_OFFSET))(session, materialInfo, imagePlanes);
		}

		static ::UnityEngine::Texture2D* ExtractHoudiniImageToTextureRaw(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::System::String* imagePlanes)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTURERAW_OFFSET))(session, materialInfo, imagePlanes);
		}

		static ::UnityEngine::Texture2D* ExtractHoudiniImageToTextureFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::System::String* imagePlanes, ::System::String* assetCacheFolderPath)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREFILE_OFFSET))(session, materialInfo, imagePlanes, assetCacheFolderPath);
		}

		static ::UnityEngine::Material* LoadUnityMaterial(::System::String* materialPath)
		{
			return ((::UnityEngine::Material*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADUNITYMATERIAL_OFFSET))(materialPath);
		}

		static ::UnityEngine::Material* LoadSubstanceMaterialWithName(::System::String* materialPath, ::System::String* substanceName)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHNAME_OFFSET))(materialPath, substanceName);
		}

		static ::UnityEngine::Material* LoadSubstanceMaterialWithIndex(::System::String* materialPath, ::System::Int32 substanceMaterialIndex)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHINDEX_OFFSET))(materialPath, substanceMaterialIndex);
		}

		static ::System::Int32 GetUnitySubstanceMaterialKey(::System::String* unityMaterialPath, ::System::String* substanceName, ::System::Int32 substanceIndex)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETUNITYSUBSTANCEMATERIALKEY_OFFSET))(unityMaterialPath, substanceName, substanceIndex);
		}

		static ::System::Int32 MaterialNameToKey(::System::String* materialName)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALNAMETOKEY_OFFSET))(materialName);
		}

		static ::System::Void EnableGPUInstancing(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_ENABLEGPUINSTANCING_OFFSET))(material);
		}

		static ::System::Boolean MaterialHasGPUInstancingEnabled(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALHASGPUINSTANCINGENABLED_OFFSET))(material);
		}

		static ::UnityEngine::Material* CopyMaterial(::UnityEngine::Material* material)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_COPYMATERIAL_OFFSET))(material);
		}

		static ::UnityEngine::Material* GetDefaultStandardMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETDEFAULTSTANDARDMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Texture2D* LoadTexture(::System::String* path)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADTEXTURE_OFFSET))(path);
		}

		static ::UnityEngine::Texture2D* WhiteTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WHITETEXTURE_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* CreateUnitySubstanceMaterialData(::System::Int32 materialKey, ::System::String* materialPath, ::System::String* substanceName, ::System::Int32 substanceIndex, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::System::String* assetCacheFolderPath)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEUNITYSUBSTANCEMATERIALDATA_OFFSET))(materialKey, materialPath, substanceName, substanceIndex, materialCache, assetCacheFolderPath);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* CreateMaterialInCache(::System::Int32 materialKey, ::System::String* materialName, ::HoudiniEngineUnity::HEU_MaterialData_Source sourceType, ::System::Boolean bWriteToFile, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::System::String* assetCacheFolderPath)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::System::Int32, ::System::String*, ::HoudiniEngineUnity::HEU_MaterialData_Source, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEMATERIALINCACHE_OFFSET))(materialKey, materialName, sourceType, bWriteToFile, materialCache, assetCacheFolderPath);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* GetOrCreateDefaultMaterialInCache(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::System::Boolean bWriteToFile, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::System::String* assetCacheFolderPath)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETORCREATEDEFAULTMATERIALINCACHE_OFFSET))(session, geoID, partID, bWriteToFile, materialCache, assetCacheFolderPath);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* GetMaterialDataFromCache(::System::Int32 materialKey, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAFROMCACHE_OFFSET))(materialKey, materialCache);
		}

		static ::System::String* GenerateDefaultMaterialName(::System::Int32 geoID, ::System::Int32 partID)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GENERATEDEFAULTMATERIALNAME_OFFSET))(geoID, partID);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* CreateHoudiniMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 assetID, ::System::Int32 materialID, ::System::Int32 geoID, ::System::Int32 partID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::System::String* assetCacheFolderPath)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEHOUDINIMATERIALDATA_OFFSET))(session, assetID, materialID, geoID, partID, materialCache, assetCacheFolderPath);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MaterialData*>* GetMaterialDataMapFromCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MaterialData*>*(*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAMAPFROMCACHE_OFFSET))(materialCache);
		}
	};
}
