#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetDatabase_HEU_ImportAssetOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ADDALWAYSINCLUDEDSHADER_OFFSET UNITYSDK_OFFSET(0x8407210)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ADDOBJECTTOASSET_OFFSET UNITYSDK_OFFSET(0x84064A0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMATERIALSPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x8406D40)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESASSETFILENAME_OFFSET UNITYSDK_OFFSET(0x8406F60)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x8406C60)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDPREFABPATH_OFFSET UNITYSDK_OFFSET(0x8406EE0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTERRAINPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x8406DB0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTEXTURESPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x8406CD0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CONTAINSASSET_OFFSET UNITYSDK_OFFSET(0x8405DC0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATANYPATH_OFFSET UNITYSDK_OFFSET(0x8406080)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATGIVENPATH_OFFSET UNITYSDK_OFFSET(0x8406130)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETFROMASSETCACHEPATH_OFFSET UNITYSDK_OFFSET(0x8405FD0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETWITHRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x8405F20)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYASSET_OFFSET UNITYSDK_OFFSET(0x8405E70)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYUNIQUEANDLOADASSETATANYPATH_OFFSET UNITYSDK_OFFSET(0x84061E0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEADDOBJECTINASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x84063F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x8405A50)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSET_OFFSET UNITYSDK_OFFSET(0x8406340)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEOBJECTINASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x8406290)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEPATHWITHFOLDERS_OFFSET UNITYSDK_OFFSET(0x8406BB0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEUNIQUEBAKEPATH_OFFSET UNITYSDK_OFFSET(0x8406B00)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETATPATH_OFFSET UNITYSDK_OFFSET(0x8405C60)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x8405B00)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETIFINBAKEDFOLDER_OFFSET UNITYSDK_OFFSET(0x8405D10)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSET_OFFSET UNITYSDK_OFFSET(0x8405BB0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATHWITHASSETNAME_OFFSET UNITYSDK_OFFSET(0x8406A50)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATH_OFFSET UNITYSDK_OFFSET(0x84069A0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETCACHEPATH_OFFSET UNITYSDK_OFFSET(0x8404B20)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETFULLPATH_OFFSET UNITYSDK_OFFSET(0x8405320)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETORSCENEPATH_OFFSET UNITYSDK_OFFSET(0x84055E0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATHSFROMASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x8406FB0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATHWITHSUBASSETSUPPORT_OFFSET UNITYSDK_OFFSET(0x84050C0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x8405010)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATHSTART_OFFSET UNITYSDK_OFFSET(0x8405260)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x8404C40)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETROOTPATH_OFFSET UNITYSDK_OFFSET(0x8405480)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETSUBFOLDERS_OFFSET UNITYSDK_OFFSET(0x8406E20)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETWORKINGPATH_OFFSET UNITYSDK_OFFSET(0x84068F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATHSTART_OFFSET UNITYSDK_OFFSET(0x84052C0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x8404D20)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETSUBASSETPATHFROMPATH_OFFSET UNITYSDK_OFFSET(0x8405170)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATHFORUNITYASSET_OFFSET UNITYSDK_OFFSET(0x8407090)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATH_OFFSET UNITYSDK_OFFSET(0x8405530)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNITYPROJECTPATH_OFFSET UNITYSDK_OFFSET(0x8404BE0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETVALIDASSETPATH_OFFSET UNITYSDK_OFFSET(0x8404E30)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_IMPORTASSET_OFFSET UNITYSDK_OFFSET(0x8406840)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEBAKEDFOLDER_OFFSET UNITYSDK_OFFSET(0x84058F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEWORKINGFOLDER_OFFSET UNITYSDK_OFFSET(0x84059A0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETSAVEDINSCENE_OFFSET UNITYSDK_OFFSET(0x8406FC0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEBAKEDFOLDER_OFFSET UNITYSDK_OFFSET(0x8405790)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEWORKINGFOLDER_OFFSET UNITYSDK_OFFSET(0x8405840)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHE_OFFSET UNITYSDK_OFFSET(0x8405690)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOASSETS_OFFSET UNITYSDK_OFFSET(0x8405380)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOPACKAGES_OFFSET UNITYSDK_OFFSET(0x8405400)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISSUBASSET_OFFSET UNITYSDK_OFFSET(0x8406FA0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETREPRESENTATIONSATPATH_OFFSET UNITYSDK_OFFSET(0x84066E0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETSATPATH_OFFSET UNITYSDK_OFFSET(0x8406790)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADASSETATPATH_OFFSET UNITYSDK_OFFSET(0x8406580)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADSUBASSETATPATH_OFFSET UNITYSDK_OFFSET(0x8406630)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_PRINTDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x8407080)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_REFRESHASSETDATABASE_OFFSET UNITYSDK_OFFSET(0x8406570)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SAVEANDREFRESHDATABASE_OFFSET UNITYSDK_OFFSET(0x8406550)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SAVEASSETDATABASE_OFFSET UNITYSDK_OFFSET(0x8406560)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SELECTASSETATPATH_OFFSET UNITYSDK_OFFSET(0x8407070)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetDatabase_TypeDefinitionIndex = 37656;

	class HEU_AssetDatabase : public ::System::Object
	{
	public:
		static ::System::String* GetAssetCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETCACHEPATH_OFFSET))();
		}

		static ::System::String* GetUnityProjectPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNITYPROJECTPATH_OFFSET))();
		}

		static ::System::String* GetAssetRelativePath(::System::String* inFullPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATH_OFFSET))(inFullPath);
		}

		static ::System::String* GetPackagesRelativePath(::System::String* inFullPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATH_OFFSET))(inFullPath);
		}

		static ::System::String* GetValidAssetPath(::System::String* inPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETVALIDASSETPATH_OFFSET))(inPath);
		}

		static ::System::String* GetAssetPath(::UnityEngine::Object* asset)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATH_OFFSET))(asset);
		}

		static ::System::String* GetAssetPathWithSubAssetSupport(::UnityEngine::Object* asset)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATHWITHSUBASSETSUPPORT_OFFSET))(asset);
		}

		static ::System::Void GetSubAssetPathFromPath(::System::String* fullPath, ::System::String*& mainPath, ::System::String*& subPath)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETSUBASSETPATHFROMPATH_OFFSET))(fullPath, mainPath, subPath);
		}

		static ::System::String* GetAssetRelativePathStart()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATHSTART_OFFSET))();
		}

		static ::System::String* GetPackagesRelativePathStart()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATHSTART_OFFSET))();
		}

		static ::System::String* GetAssetFullPath(::System::String* inPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETFULLPATH_OFFSET))(inPath);
		}

		static ::System::Boolean IsPathRelativeToAssets(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOASSETS_OFFSET))(inPath);
		}

		static ::System::Boolean IsPathRelativeToPackages(::System::String* inPath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOPACKAGES_OFFSET))(inPath);
		}

		static ::System::String* GetAssetRootPath(::UnityEngine::Object* asset)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETROOTPATH_OFFSET))(asset);
		}

		static ::System::String* GetUniqueAssetPath(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATH_OFFSET))(path);
		}

		static ::System::String* GetAssetOrScenePath(::UnityEngine::Object* inputObject)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETORSCENEPATH_OFFSET))(inputObject);
		}

		static ::System::Boolean IsPathInAssetCache(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHE_OFFSET))(path);
		}

		static ::System::Boolean IsPathInAssetCacheBakedFolder(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEBAKEDFOLDER_OFFSET))(path);
		}

		static ::System::Boolean IsPathInAssetCacheWorkingFolder(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEWORKINGFOLDER_OFFSET))(path);
		}

		static ::System::Boolean IsAssetInAssetCacheBakedFolder(::UnityEngine::Object* asset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEBAKEDFOLDER_OFFSET))(asset);
		}

		static ::System::Boolean IsAssetInAssetCacheWorkingFolder(::UnityEngine::Object* asset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEWORKINGFOLDER_OFFSET))(asset);
		}

		static ::System::String* CreateAssetCacheFolder(::System::String* suggestedAssetPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSETCACHEFOLDER_OFFSET))(suggestedAssetPath);
		}

		static ::System::Void DeleteAssetCacheFolder(::System::String* assetCacheFolderPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETCACHEFOLDER_OFFSET))(assetCacheFolderPath);
		}

		static ::System::Void DeleteAsset(::UnityEngine::Object* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSET_OFFSET))(asset);
		}

		static ::System::Void DeleteAssetAtPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETATPATH_OFFSET))(path);
		}

		static ::System::Void DeleteAssetIfInBakedFolder(::UnityEngine::Object* asset)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETIFINBAKEDFOLDER_OFFSET))(asset);
		}

		static ::System::Boolean ContainsAsset(::UnityEngine::Object* assetObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CONTAINSASSET_OFFSET))(assetObject);
		}

		static ::System::Boolean CopyAsset(::System::String* path, ::System::String* newPath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYASSET_OFFSET))(path, newPath);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetWithRelativePath(::UnityEngine::Object* srcAsset, ::System::String* copyAssetFolder, ::System::String* relativePath, ::System::Type* type, ::System::Boolean bOverwriteExisting)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETWITHRELATIVEPATH_OFFSET))(srcAsset, copyAssetFolder, relativePath, type, bOverwriteExisting);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetFromAssetCachePath(::UnityEngine::Object* srcAsset, ::System::String* copyPath, ::System::Type* type, ::System::Boolean bOverwriteExisting)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETFROMASSETCACHEPATH_OFFSET))(srcAsset, copyPath, type, bOverwriteExisting);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::System::String* copyPath, ::System::Type* type, ::System::Boolean bOverwriteExisting)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATANYPATH_OFFSET))(srcAsset, copyPath, type, bOverwriteExisting);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetAtGivenPath(::UnityEngine::Object* srcAsset, ::System::String* targetPath, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATGIVENPATH_OFFSET))(srcAsset, targetPath, type);
		}

		static ::UnityEngine::Object* CopyUniqueAndLoadAssetAtAnyPath(::UnityEngine::Object* srcAsset, ::System::String* copyPath, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYUNIQUEANDLOADASSETATANYPATH_OFFSET))(srcAsset, copyPath, type);
		}

		static ::System::Void CreateObjectInAssetCacheFolder(::UnityEngine::Object* objectToCreate, ::System::String* assetCacheRoot, ::System::String* relativeFolderPath, ::System::String* assetFileName, ::System::Type* type, ::System::Boolean bOverwriteExisting)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::System::String*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEOBJECTINASSETCACHEFOLDER_OFFSET))(objectToCreate, assetCacheRoot, relativeFolderPath, assetFileName, type, bOverwriteExisting);
		}

		static ::System::Void CreateAsset(::UnityEngine::Object* asset, ::System::String* path)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSET_OFFSET))(asset, path);
		}

		static ::System::Void CreateAddObjectInAssetCacheFolder(::System::String* assetName, ::System::String* assetObjectFileName, ::UnityEngine::Object* objectToAdd, ::System::String* relativeFolderPath, ::System::String*& exportRootPath, ::UnityEngine::Object*& assetDBObject)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::Object*, ::System::String*, ::System::String*&, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEADDOBJECTINASSETCACHEFOLDER_OFFSET))(assetName, assetObjectFileName, objectToAdd, relativeFolderPath, exportRootPath, assetDBObject);
		}

		static ::System::Void AddObjectToAsset(::UnityEngine::Object* objectToAdd, ::UnityEngine::Object* assetObject)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ADDOBJECTTOASSET_OFFSET))(objectToAdd, assetObject);
		}

		static ::System::Void SaveAndRefreshDatabase()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SAVEANDREFRESHDATABASE_OFFSET))();
		}

		static ::System::Void SaveAssetDatabase()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SAVEASSETDATABASE_OFFSET))();
		}

		static ::System::Void RefreshAssetDatabase()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_REFRESHASSETDATABASE_OFFSET))();
		}

		static ::UnityEngine::Object* LoadAssetAtPath(::System::String* assetPath, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADASSETATPATH_OFFSET))(assetPath, type);
		}

		static ::UnityEngine::Object* LoadSubAssetAtPath(::System::String* mainPath, ::System::String* subAssetPath)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADSUBASSETATPATH_OFFSET))(mainPath, subAssetPath);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAllAssetsAtPath(::System::String* assetPath)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETSATPATH_OFFSET))(assetPath);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAllAssetRepresentationsAtPath(::System::String* assetPath)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETREPRESENTATIONSATPATH_OFFSET))(assetPath);
		}

		static ::System::Void ImportAsset(::System::String* assetPath, ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions heuOptions)
		{
			return ((::System::Void(*)(::System::String*, ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_IMPORTASSET_OFFSET))(assetPath, heuOptions);
		}

		static ::System::String* GetAssetWorkingPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETWORKINGPATH_OFFSET))();
		}

		static ::System::String* GetAssetBakedPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATH_OFFSET))();
		}

		static ::System::String* GetAssetBakedPathWithAssetName(::System::String* assetName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATHWITHASSETNAME_OFFSET))(assetName);
		}

		static ::System::String* CreateUniqueBakePath(::System::String* assetName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEUNIQUEBAKEPATH_OFFSET))(assetName);
		}

		static ::System::Void CreatePathWithFolders(::System::String* inPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEPATHWITHFOLDERS_OFFSET))(inPath);
		}

		static ::System::String* AppendMeshesPathToAssetFolder(::System::String* inAssetCacheFolder)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESPATHTOASSETFOLDER_OFFSET))(inAssetCacheFolder);
		}

		static ::System::String* AppendTexturesPathToAssetFolder(::System::String* inAssetCacheFolder)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTEXTURESPATHTOASSETFOLDER_OFFSET))(inAssetCacheFolder);
		}

		static ::System::String* AppendMaterialsPathToAssetFolder(::System::String* inAssetCacheFolder)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMATERIALSPATHTOASSETFOLDER_OFFSET))(inAssetCacheFolder);
		}

		static ::System::String* AppendTerrainPathToAssetFolder(::System::String* inAssetCacheFolder)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTERRAINPATHTOASSETFOLDER_OFFSET))(inAssetCacheFolder);
		}

		static ::Il2CppArray<::System::String*>* GetAssetSubFolders()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETSUBFOLDERS_OFFSET))();
		}

		static ::System::String* AppendPrefabPath(::System::String* inAssetCacheFolder, ::System::String* assetName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDPREFABPATH_OFFSET))(inAssetCacheFolder, assetName);
		}

		static ::System::String* AppendMeshesAssetFileName(::System::String* assetName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESASSETFILENAME_OFFSET))(assetName);
		}

		static ::System::Boolean IsSubAsset(::UnityEngine::Object* obj)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISSUBASSET_OFFSET))(obj);
		}

		static ::Il2CppArray<::System::String*>* GetAssetPathsFromAssetBundle(::System::String* assetBundleFileName)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATHSFROMASSETBUNDLE_OFFSET))(assetBundleFileName);
		}

		static ::System::Boolean IsAssetSavedInScene(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETSAVEDINSCENE_OFFSET))(go);
		}

		static ::System::Void SelectAssetAtPath(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SELECTASSETATPATH_OFFSET))(path);
		}

		static ::System::Void PrintDependencies(::UnityEngine::GameObject* targetGO)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_PRINTDEPENDENCIES_OFFSET))(targetGO);
		}

		static ::System::String* GetUniqueAssetPathForUnityAsset(::UnityEngine::Object* obj)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATHFORUNITYASSET_OFFSET))(obj);
		}

		static ::System::Void AddAlwaysIncludedShader(::System::String* shaderName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ADDALWAYSINCLUDEDSHADER_OFFSET))(shaderName);
		}
	};
}
