#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AssetDatabase_HEU_ImportAssetOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ADDOBJECTTOASSET_OFFSET UNITYSDK_OFFSET(0x167BD9B0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMATERIALSPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x167BDD80)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESASSETFILENAME_OFFSET UNITYSDK_OFFSET(0x167BDF70)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x167BDCA0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDPREFABPATH_OFFSET UNITYSDK_OFFSET(0x167BDEF0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTERRAINPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x167BDDF0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTEXTURESPATHTOASSETFOLDER_OFFSET UNITYSDK_OFFSET(0x167BDD10)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CONTAINSASSET_OFFSET UNITYSDK_OFFSET(0x167BD730)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATANYPATH_OFFSET UNITYSDK_OFFSET(0x167BD830)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATGIVENPATH_OFFSET UNITYSDK_OFFSET(0x167BD870)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETFROMASSETCACHEPATH_OFFSET UNITYSDK_OFFSET(0x167BD7F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETWITHRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x167BD7B0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYASSET_OFFSET UNITYSDK_OFFSET(0x167BD770)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYUNIQUEANDLOADASSETATANYPATH_OFFSET UNITYSDK_OFFSET(0x167BD8B0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEADDOBJECTINASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD970)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD5F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSET_OFFSET UNITYSDK_OFFSET(0x167BD930)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEOBJECTINASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD8F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEPATHWITHFOLDERS_OFFSET UNITYSDK_OFFSET(0x167BDC60)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEUNIQUEBAKEPATH_OFFSET UNITYSDK_OFFSET(0x167BDC20)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETATPATH_OFFSET UNITYSDK_OFFSET(0x167BD6B0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD630)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETIFINBAKEDFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD6F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSET_OFFSET UNITYSDK_OFFSET(0x167BD670)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATHWITHASSETNAME_OFFSET UNITYSDK_OFFSET(0x167BDBE0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATH_OFFSET UNITYSDK_OFFSET(0x167BDBA0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETCACHEPATH_OFFSET UNITYSDK_OFFSET(0x167BC9D0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETFULLPATH_OFFSET UNITYSDK_OFFSET(0x167B28E0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETORSCENEPATH_OFFSET UNITYSDK_OFFSET(0x167BD3D0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATHWITHSUBASSETSUPPORT_OFFSET UNITYSDK_OFFSET(0x167BCFC0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x167BCF80)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATHSTART_OFFSET UNITYSDK_OFFSET(0x167BD130)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x167BCA70)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETROOTPATH_OFFSET UNITYSDK_OFFSET(0x167BD350)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETSUBFOLDERS_OFFSET UNITYSDK_OFFSET(0x167BDE60)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETWORKINGPATH_OFFSET UNITYSDK_OFFSET(0x167BDB60)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATHSTART_OFFSET UNITYSDK_OFFSET(0x167BD190)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x167BCB80)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETSUBASSETPATHFROMPATH_OFFSET UNITYSDK_OFFSET(0x167BD000)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATHFORUNITYASSET_OFFSET UNITYSDK_OFFSET(0x167BE020)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATH_OFFSET UNITYSDK_OFFSET(0x167BD390)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNITYPROJECTPATH_OFFSET UNITYSDK_OFFSET(0x167BCA10)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETVALIDASSETPATH_OFFSET UNITYSDK_OFFSET(0x167BCCD0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_IMPORTASSET_OFFSET UNITYSDK_OFFSET(0x167BDB20)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEBAKEDFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD570)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEWORKINGFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD5B0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETSAVEDINSCENE_OFFSET UNITYSDK_OFFSET(0x167BDFC0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEBAKEDFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD4F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEWORKINGFOLDER_OFFSET UNITYSDK_OFFSET(0x167BD530)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHE_OFFSET UNITYSDK_OFFSET(0x167BD410)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOASSETS_OFFSET UNITYSDK_OFFSET(0x167BD1F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOPACKAGES_OFFSET UNITYSDK_OFFSET(0x167BD2A0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISSUBASSET_OFFSET UNITYSDK_OFFSET(0x167BDFB0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISVALIDFOLDERNAME_OFFSET UNITYSDK_OFFSET(0x167BE120)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETREPRESENTATIONSATPATH_OFFSET UNITYSDK_OFFSET(0x167BDAA0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETSATPATH_OFFSET UNITYSDK_OFFSET(0x167BDAE0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADASSETATPATH_OFFSET UNITYSDK_OFFSET(0x167BDA20)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADSUBASSETATPATH_OFFSET UNITYSDK_OFFSET(0x167BDA60)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_PRINTDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x167BE010)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_REFRESHASSETDATABASE_OFFSET UNITYSDK_OFFSET(0x167BDA10)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SAVEANDREFRESHDATABASE_OFFSET UNITYSDK_OFFSET(0x167BD9F0)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SAVEASSETDATABASE_OFFSET UNITYSDK_OFFSET(0x167BDA00)
#define HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SELECTASSETATPATH_OFFSET UNITYSDK_OFFSET(0x167BE000)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetDatabase_TypeDefinitionIndex = 39134;

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

		static ::System::String* GetAssetRelativePath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATH_OFFSET))(a1);
		}

		static ::System::String* GetPackagesRelativePath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATH_OFFSET))(a1);
		}

		static ::System::String* GetValidAssetPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETVALIDASSETPATH_OFFSET))(a1);
		}

		static ::System::String* GetAssetPath(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATH_OFFSET))(a1);
		}

		static ::System::String* GetAssetPathWithSubAssetSupport(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETPATHWITHSUBASSETSUPPORT_OFFSET))(a1);
		}

		static ::System::Void GetSubAssetPathFromPath(::System::String* a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETSUBASSETPATHFROMPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetAssetRelativePathStart()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETRELATIVEPATHSTART_OFFSET))();
		}

		static ::System::String* GetPackagesRelativePathStart()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETPACKAGESRELATIVEPATHSTART_OFFSET))();
		}

		static ::System::String* GetAssetFullPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETFULLPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsPathRelativeToAssets(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOASSETS_OFFSET))(a1);
		}

		static ::System::Boolean IsPathRelativeToPackages(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHRELATIVETOPACKAGES_OFFSET))(a1);
		}

		static ::System::String* GetAssetRootPath(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETROOTPATH_OFFSET))(a1);
		}

		static ::System::String* GetUniqueAssetPath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATH_OFFSET))(a1);
		}

		static ::System::String* GetAssetOrScenePath(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETORSCENEPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsPathInAssetCache(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHE_OFFSET))(a1);
		}

		static ::System::Boolean IsPathInAssetCacheBakedFolder(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEBAKEDFOLDER_OFFSET))(a1);
		}

		static ::System::Boolean IsPathInAssetCacheWorkingFolder(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISPATHINASSETCACHEWORKINGFOLDER_OFFSET))(a1);
		}

		static ::System::Boolean IsAssetInAssetCacheBakedFolder(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEBAKEDFOLDER_OFFSET))(a1);
		}

		static ::System::Boolean IsAssetInAssetCacheWorkingFolder(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETINASSETCACHEWORKINGFOLDER_OFFSET))(a1);
		}

		static ::System::String* CreateAssetCacheFolder(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSETCACHEFOLDER_OFFSET))(a1, a2);
		}

		static ::System::Void DeleteAssetCacheFolder(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETCACHEFOLDER_OFFSET))(a1);
		}

		static ::System::Void DeleteAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSET_OFFSET))(a1);
		}

		static ::System::Void DeleteAssetAtPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETATPATH_OFFSET))(a1);
		}

		static ::System::Void DeleteAssetIfInBakedFolder(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_DELETEASSETIFINBAKEDFOLDER_OFFSET))(a1);
		}

		static ::System::Boolean ContainsAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CONTAINSASSET_OFFSET))(a1);
		}

		static ::System::Boolean CopyAsset(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYASSET_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetWithRelativePath(::UnityEngine::Object* a1, ::System::String* a2, ::System::String* a3, ::System::Type* a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETWITHRELATIVEPATH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetFromAssetCachePath(::UnityEngine::Object* a1, ::System::String* a2, ::System::Type* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETFROMASSETCACHEPATH_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetAtAnyPath(::UnityEngine::Object* a1, ::System::String* a2, ::System::Type* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATANYPATH_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Object* CopyAndLoadAssetAtGivenPath(::UnityEngine::Object* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYANDLOADASSETATGIVENPATH_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* CopyUniqueAndLoadAssetAtAnyPath(::UnityEngine::Object* a1, ::System::String* a2, ::System::Type* a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_COPYUNIQUEANDLOADASSETATANYPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateObjectInAssetCacheFolder(::UnityEngine::Object* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Type* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::System::String*, ::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEOBJECTINASSETCACHEFOLDER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CreateAsset(::UnityEngine::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEASSET_OFFSET))(a1, a2);
		}

		static ::System::Void CreateAddObjectInAssetCacheFolder(::System::String* a1, ::System::String* a2, ::UnityEngine::Object* a3, ::System::String* a4, ::System::String*& a5, ::UnityEngine::Object*& a6)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::Object*, ::System::String*, ::System::String*&, ::UnityEngine::Object*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEADDOBJECTINASSETCACHEFOLDER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void AddObjectToAsset(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ADDOBJECTTOASSET_OFFSET))(a1, a2);
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

		static ::UnityEngine::Object* LoadAssetAtPath(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADASSETATPATH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Object* LoadSubAssetAtPath(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADSUBASSETATPATH_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAllAssetsAtPath(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETSATPATH_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAllAssetRepresentationsAtPath(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_LOADALLASSETREPRESENTATIONSATPATH_OFFSET))(a1);
		}

		static ::System::Void ImportAsset(::System::String* a1, ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions a2)
		{
			return ((::System::Void(*)(::System::String*, ::HoudiniEngineUnity::HEU_AssetDatabase_HEU_ImportAssetOptions))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_IMPORTASSET_OFFSET))(a1, a2);
		}

		static ::System::String* GetAssetWorkingPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETWORKINGPATH_OFFSET))();
		}

		static ::System::String* GetAssetBakedPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATH_OFFSET))();
		}

		static ::System::String* GetAssetBakedPathWithAssetName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETBAKEDPATHWITHASSETNAME_OFFSET))(a1);
		}

		static ::System::String* CreateUniqueBakePath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEUNIQUEBAKEPATH_OFFSET))(a1);
		}

		static ::System::Void CreatePathWithFolders(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_CREATEPATHWITHFOLDERS_OFFSET))(a1);
		}

		static ::System::String* AppendMeshesPathToAssetFolder(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESPATHTOASSETFOLDER_OFFSET))(a1);
		}

		static ::System::String* AppendTexturesPathToAssetFolder(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTEXTURESPATHTOASSETFOLDER_OFFSET))(a1);
		}

		static ::System::String* AppendMaterialsPathToAssetFolder(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMATERIALSPATHTOASSETFOLDER_OFFSET))(a1);
		}

		static ::System::String* AppendTerrainPathToAssetFolder(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDTERRAINPATHTOASSETFOLDER_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetAssetSubFolders()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETASSETSUBFOLDERS_OFFSET))();
		}

		static ::System::String* AppendPrefabPath(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDPREFABPATH_OFFSET))(a1, a2);
		}

		static ::System::String* AppendMeshesAssetFileName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_APPENDMESHESASSETFILENAME_OFFSET))(a1);
		}

		static ::System::Boolean IsSubAsset(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISSUBASSET_OFFSET))(a1);
		}

		static ::System::Boolean IsAssetSavedInScene(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISASSETSAVEDINSCENE_OFFSET))(a1);
		}

		static ::System::Void SelectAssetAtPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_SELECTASSETATPATH_OFFSET))(a1);
		}

		static ::System::Void PrintDependencies(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_PRINTDEPENDENCIES_OFFSET))(a1);
		}

		static ::System::String* GetUniqueAssetPathForUnityAsset(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_GETUNIQUEASSETPATHFORUNITYASSET_OFFSET))(a1);
		}

		static ::System::Boolean IsValidFolderName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETDATABASE_ISVALIDFOLDERNAME_OFFSET))(a1);
		}
	};
}
