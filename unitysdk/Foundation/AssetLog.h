#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetLog_LogItem; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define FOUNDATION_ASSETLOG_APPENDLOG_OFFSET UNITYSDK_OFFSET(0x1CC74980)
#define FOUNDATION_ASSETLOG_COMPARESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1CC733C0)
#define FOUNDATION_ASSETLOG_DESTROYPOOLASSET_OFFSET UNITYSDK_OFFSET(0x1CC75560)
#define FOUNDATION_ASSETLOG_ENDCOLLECTRUNTIMEASSETLOAD_OFFSET UNITYSDK_OFFSET(0x1CC727E0)
#define FOUNDATION_ASSETLOG_FORCEUNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1CC74FA0)
#define FOUNDATION_ASSETLOG_GETCALLSTACK_OFFSET UNITYSDK_OFFSET(0x1CC748D0)
#define FOUNDATION_ASSETLOG_GETLOGDIR_OFFSET UNITYSDK_OFFSET(0x1CC73540)
#define FOUNDATION_ASSETLOG_INSTANTIATEPOOLASSET_OFFSET UNITYSDK_OFFSET(0x1CC75390)
#define FOUNDATION_ASSETLOG_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1CC75130)
#define FOUNDATION_ASSETLOG_LOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC758C0)
#define FOUNDATION_ASSETLOG_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x1CC74BB0)
#define FOUNDATION_ASSETLOG_LOADVIDEO_OFFSET UNITYSDK_OFFSET(0x1CC75C20)
#define FOUNDATION_ASSETLOG_LODADDEDFILE_OFFSET UNITYSDK_OFFSET(0x1CC73630)
#define FOUNDATION_ASSETLOG_LOG_OFFSET UNITYSDK_OFFSET(0x1CC739E0)
#define FOUNDATION_ASSETLOG_ONREQUESTASSETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC72860)
#define FOUNDATION_ASSETLOG_SAVEFILE_OFFSET UNITYSDK_OFFSET(0x1CC73B00)
#define FOUNDATION_ASSETLOG_SAVEINFOTOFILE_OFFSET UNITYSDK_OFFSET(0x1CC743D0)
#define FOUNDATION_ASSETLOG_SAVELOGTOFILE_1_OFFSET UNITYSDK_OFFSET(0x1CC73F80)
#define FOUNDATION_ASSETLOG_SAVELOGTOFILE_OFFSET UNITYSDK_OFFSET(0x1CC73C80)
#define FOUNDATION_ASSETLOG_STARTCOLLECTRUNTIMEASSETLOAD_OFFSET UNITYSDK_OFFSET(0x1CC72730)
#define FOUNDATION_ASSETLOG_TAKESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1CC728E0)
#define FOUNDATION_ASSETLOG_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1CC75730)
#define FOUNDATION_ASSETLOG_UNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC75A90)
#define FOUNDATION_ASSETLOG_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1CC74E10)
#define FOUNDATION_ASSETLOG_UPLOADASSETLOADSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1CC728A0)
#define FOUNDATION_ASSETLOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC75F70)

namespace Foundation
{
	inline static constexpr unsigned int AssetLog_TypeDefinitionIndex = 7956;

	class AssetLog : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_BundleLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7370);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_InstantiateLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7378);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_TmpBundleLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7380);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_SceneLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7388);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_TmpVideoLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7390);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_AssetLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7398);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_TmpAssetLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x73A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_VideoLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x73A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_TmpSceneLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x73B0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_autoTestPathRecord()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x73B8);
		}
		static ::System::Action_1<::System::String*>** StaticGet_onRequestAsset()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x73C0);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetLog_LogItem*>** StaticGet_FullLogs()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x73C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>** StaticGet_TmpInstantiateLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x73D0);
		}
		static ::System::Int32* StaticGet_COLLECT_ASSET_TYPE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x3A80);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x3A84);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG__CCTOR_OFFSET))();
		}

		static ::System::Void StartCollectRuntimeAssetLoad(::System::Int32 dataType)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_STARTCOLLECTRUNTIMEASSETLOAD_OFFSET))(dataType);
		}

		static ::System::Void EndCollectRuntimeAssetLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_ENDCOLLECTRUNTIMEASSETLOAD_OFFSET))();
		}

		static ::System::Void OnRequestAssetCallback(::System::String* assetPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_ONREQUESTASSETCALLBACK_OFFSET))(assetPath);
		}

		static ::System::Void UploadAssetLoadStacktrace(::System::String* assetPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UPLOADASSETLOADSTACKTRACE_OFFSET))(assetPath);
		}

		static ::System::Void TakeSnapshot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_TAKESNAPSHOT_OFFSET))();
		}

		static ::System::Void CompareSnapshot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_COMPARESNAPSHOT_OFFSET))();
		}

		static ::System::Void LodAddedFile(::System::String* logDir, ::System::String* key, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>* dict, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>* tmp)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LODADDEDFILE_OFFSET))(logDir, key, dict, tmp);
		}

		static ::System::String* GetLogDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_GETLOGDIR_OFFSET))();
		}

		static ::System::Void SaveFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVEFILE_OFFSET))();
		}

		static ::System::Void SaveInfoToFile(::System::String* text, ::System::String* fileName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVEINFOTOFILE_OFFSET))(text, fileName);
		}

		static ::System::Void SaveLogToFile(::System::String* logDir, ::System::String* key, ::System::Collections::Generic::List_1<::Foundation::AssetLog_LogItem*>* collection)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetLog_LogItem*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVELOGTOFILE_OFFSET))(logDir, key, collection);
		}

		static ::System::Void SaveLogToFile_1(::System::String* logDir, ::System::String* key, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>* collection)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetLog_LogItem*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVELOGTOFILE_1_OFFSET))(logDir, key, collection);
		}

		static ::System::Void Log(::System::IO::StreamWriter* file, ::Foundation::AssetLog_LogItem* logItem)
		{
			return ((::System::Void(*)(::System::IO::StreamWriter*, ::Foundation::AssetLog_LogItem*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOG_OFFSET))(file, logItem);
		}

		static ::System::String* GetCallStack()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_GETCALLSTACK_OFFSET))();
		}

		static ::Foundation::AssetLog_LogItem* AppendLog(::System::String* typeInfo, ::System::String* path)
		{
			return ((::Foundation::AssetLog_LogItem*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_APPENDLOG_OFFSET))(typeInfo, path);
		}

		static ::System::Void LoadScene(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADSCENE_OFFSET))(path);
		}

		static ::System::Void UnloadScene(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UNLOADSCENE_OFFSET))(path);
		}

		static ::System::Void ForceUnloadScene(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_FORCEUNLOADSCENE_OFFSET))(path);
		}

		static ::System::Void LoadAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADASSET_OFFSET))(path);
		}

		static ::System::Void InstantiatePoolAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_INSTANTIATEPOOLASSET_OFFSET))(path);
		}

		static ::System::Void DestroyPoolAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_DESTROYPOOLASSET_OFFSET))(path);
		}

		static ::System::Void UnloadAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UNLOADASSET_OFFSET))(path);
		}

		static ::System::Void LoadBundle(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADBUNDLE_OFFSET))(path);
		}

		static ::System::Void UnloadBundle(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UNLOADBUNDLE_OFFSET))(path);
		}

		static ::System::Void LoadVideo(::System::String* path, ::System::String* quality)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADVIDEO_OFFSET))(path, quality);
		}
	};
}
