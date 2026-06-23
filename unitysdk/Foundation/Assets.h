#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadCacheKey.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetsUnloadLevel.h"
#include "unitysdk/Foundation/AssetsUnloadPhase.h"
#include "unitysdk/Foundation/AssetsUnloadType.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/BundleInfo.h"
#include "unitysdk/Foundation/BundleLoadInfo.h"
#include "unitysdk/Foundation/BundleLocation.h"
#include "unitysdk/Foundation/BundleLocationInfo.h"
#include "unitysdk/Foundation/LoginSetting.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/VerifyBy.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

class Class_1_2556F0ED31BA44F3;
namespace Foundation { class AssetRequest; }
namespace Foundation { class AssetRequestBase; }
namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class BundleRequest; }
namespace Foundation { class InstancePoolRequest; }
namespace Foundation { class SceneAssetRequest; }
namespace Foundation::DataStructures { template <typename T> class HashSet_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETS_ADDREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC7EEB0)
#define FOUNDATION_ASSETS_ADDUNUNUSEDASSET_OFFSET UNITYSDK_OFFSET(0x1CC8BBA0)
#define FOUNDATION_ASSETS_ADDUNUNUSEDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC8B970)
#define FOUNDATION_ASSETS_ADDUNUNUSEDSCENE_OFFSET UNITYSDK_OFFSET(0x1CC8BA70)
#define FOUNDATION_ASSETS_APPLICATIONONLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1CC8B1B0)
#define FOUNDATION_ASSETS_ASSETBUNDLEINDEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CC8CA00)
#define FOUNDATION_ASSETS_BEFOREASSETBUNDLEINDEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CC83DC0)
#define FOUNDATION_ASSETS_BINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC80140)
#define FOUNDATION_ASSETS_CHECKINSTANCEPOOLREQUESTUSED_OFFSET UNITYSDK_OFFSET(0x1CC7C950)
#define FOUNDATION_ASSETS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CC85630)
#define FOUNDATION_ASSETS_CONTAINSASSETEX_OFFSET UNITYSDK_OFFSET(0x1CC7D220)
#define FOUNDATION_ASSETS_CONTAINSASSET_OFFSET UNITYSDK_OFFSET(0x1CC7CEE0)
#define FOUNDATION_ASSETS_DUMPASSETBLOCKS_OFFSET UNITYSDK_OFFSET(0x1CC78CF0)
#define FOUNDATION_ASSETS_DUMPASSETLOG_ONRESTART_OFFSET UNITYSDK_OFFSET(0x1CC764B0)
#define FOUNDATION_ASSETS_DUMPASSETSLOADING_OFFSET UNITYSDK_OFFSET(0x1CC89420)
#define FOUNDATION_ASSETS_DUMPASSETS_OFFSET UNITYSDK_OFFSET(0x1CC76AC0)
#define FOUNDATION_ASSETS_FINDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC79660)
#define FOUNDATION_ASSETS_FORCECLEARALL_OFFSET UNITYSDK_OFFSET(0x1CC86370)
#define FOUNDATION_ASSETS_FORCEOFFSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC8B6B0)
#define FOUNDATION_ASSETS_FORCEUNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1CC886E0)
#define FOUNDATION_ASSETS_GENERATEBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC7A030)
#define FOUNDATION_ASSETS_GETALLLOADEDBLOCKPATHS_OFFSET UNITYSDK_OFFSET(0x1CC89150)
#define FOUNDATION_ASSETS_GETALLRESOURCEFILETYPES_OFFSET UNITYSDK_OFFSET(0x1CC844D0)
#define FOUNDATION_ASSETS_GETASSETPARENTDIR_OFFSET UNITYSDK_OFFSET(0x1CC87590)
#define FOUNDATION_ASSETS_GETASSETREFCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC746B0)
#define FOUNDATION_ASSETS_GETBADBUNDLEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1CC859F0)
#define FOUNDATION_ASSETS_GETBLOCKABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1CC8C120)
#define FOUNDATION_ASSETS_GETBLOCKRELATIVEFOLDER_OFFSET UNITYSDK_OFFSET(0x1CC8C080)
#define FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_1_OFFSET UNITYSDK_OFFSET(0x1CC8B370)
#define FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_OFFSET UNITYSDK_OFFSET(0x1CC8B270)
#define FOUNDATION_ASSETS_GETBUNDLELOCATION_OFFSET UNITYSDK_OFFSET(0x1CC7D190)
#define FOUNDATION_ASSETS_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1CC8B1F0)
#define FOUNDATION_ASSETS_GETDIFFPATCHCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1CC85AC0)
#define FOUNDATION_ASSETS_GETLOADEDBUNDLEHASHES_OFFSET UNITYSDK_OFFSET(0x1CC8C230)
#define FOUNDATION_ASSETS_GETLOCALRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1CC85810)
#define FOUNDATION_ASSETS_GETPERSISTENTPATH_OFFSET UNITYSDK_OFFSET(0x1CC85770)
#define FOUNDATION_ASSETS_GETPLATFORMFORASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x1CC879E0)
#define FOUNDATION_ASSETS_GETSTREAMINGPATH_OFFSET UNITYSDK_OFFSET(0x1CC857C0)
#define FOUNDATION_ASSETS_GETTEMPORARYCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1CC85720)
#define FOUNDATION_ASSETS_GETUNLOADTYPEBLOCKPATHS_OFFSET UNITYSDK_OFFSET(0x1CC88BD0)
#define FOUNDATION_ASSETS_GETUNLOADTYPEBUNDLEHASHES_OFFSET UNITYSDK_OFFSET(0x1CC8C520)
#define FOUNDATION_ASSETS_GETVER_OFFSET UNITYSDK_OFFSET(0x1CC87980)
#define FOUNDATION_ASSETS_GET_APPASSETSDATA_OFFSET UNITYSDK_OFFSET(0x1CC84E60)
#define FOUNDATION_ASSETS_GET_ASSETSUNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC84DA0)
#define FOUNDATION_ASSETS_GET_ASSETSUNLOADPHASE_OFFSET UNITYSDK_OFFSET(0x1CC80DA0)
#define FOUNDATION_ASSETS_GET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0x1CC85270)
#define FOUNDATION_ASSETS_GET_FILEEXISTCHECKTWICE_OFFSET UNITYSDK_OFFSET(0x1CC85570)
#define FOUNDATION_ASSETS_GET_GAMEENGINERESTARTVERSION_OFFSET UNITYSDK_OFFSET(0x1CC80E60)
#define FOUNDATION_ASSETS_GET_ISINBOOTPROCESS_OFFSET UNITYSDK_OFFSET(0x1CC80F20)
#define FOUNDATION_ASSETS_GET_ISSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC8B7F0)
#define FOUNDATION_ASSETS_GET_LOGGABLE_OFFSET UNITYSDK_OFFSET(0x1CC854B0)
#define FOUNDATION_ASSETS_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1CC88B10)
#define FOUNDATION_ASSETS_GET_UNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1CC8B730)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1CC888D0)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC88A50)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_OFFSET UNITYSDK_OFFSET(0x1CC88990)
#define FOUNDATION_ASSETS_GET_VIDEOBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC85330)
#define FOUNDATION_ASSETS_GET_VIDEOCRIWARE_OFFSET UNITYSDK_OFFSET(0x1CC853F0)
#define FOUNDATION_ASSETS_GET_VIDEOEXTENSION_OFFSET UNITYSDK_OFFSET(0x1CC84F20)
#define FOUNDATION_ASSETS_GET__RUNNINGSCENE_OFFSET UNITYSDK_OFFSET(0x1CC7A290)
#define FOUNDATION_ASSETS_INITASSETSSCRIPT_OFFSET UNITYSDK_OFFSET(0x1CC85FF0)
#define FOUNDATION_ASSETS_INIT_OFFSET UNITYSDK_OFFSET(0x1CC85B90)
#define FOUNDATION_ASSETS_INSTANTIATEASSET_1_OFFSET UNITYSDK_OFFSET(0x1CC7EB20)
#define FOUNDATION_ASSETS_INSTANTIATEASSET_OFFSET UNITYSDK_OFFSET(0x1CC7DE10)
#define FOUNDATION_ASSETS_ISASSETBUNDLEFILE_OFFSET UNITYSDK_OFFSET(0x1CC876D0)
#define FOUNDATION_ASSETS_ISAUDIOASSET_OFFSET UNITYSDK_OFFSET(0x1CC87630)
#define FOUNDATION_ASSETS_ISBLOCKASSETS_OFFSET UNITYSDK_OFFSET(0x1CC87770)
#define FOUNDATION_ASSETS_ISFIRSTINSTALLATION_OFFSET UNITYSDK_OFFSET(0x1CC7F1C0)
#define FOUNDATION_ASSETS_ISLOADINGORQUEUED_OFFSET UNITYSDK_OFFSET(0x1CC8B8D0)
#define FOUNDATION_ASSETS_ISOVERLAYINSTALLATION_OFFSET UNITYSDK_OFFSET(0x1CC7F210)
#define FOUNDATION_ASSETS_ISSCENEPATHVALID_OFFSET UNITYSDK_OFFSET(0x1CC79530)
#define FOUNDATION_ASSETS_ISSVCASSET_OFFSET UNITYSDK_OFFSET(0x1CC878F0)
#define FOUNDATION_ASSETS_ISVIDEOASSET_OFFSET UNITYSDK_OFFSET(0x1CC87810)
#define FOUNDATION_ASSETS_ISVIDEOBUNDLEMODE_OFFSET UNITYSDK_OFFSET(0x1CC87450)
#define FOUNDATION_ASSETS_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1CC7F950)
#define FOUNDATION_ASSETS_LOADASSETHANDLE_OFFSET UNITYSDK_OFFSET(0x1CC7F0D0)
#define FOUNDATION_ASSETS_LOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1CC80070)
#define FOUNDATION_ASSETS_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1CC7E280)
#define FOUNDATION_ASSETS_LOADBUNDLEASYNC_OFFSET UNITYSDK_OFFSET(0x1CC7D980)
#define FOUNDATION_ASSETS_LOADBUNDLE_1_OFFSET UNITYSDK_OFFSET(0x1CC7D580)
#define FOUNDATION_ASSETS_LOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC7D4E0)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLESYNC_OFFSET UNITYSDK_OFFSET(0x1CC7B6A0)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CC7BC10)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHESYNC_OFFSET UNITYSDK_OFFSET(0x1CC7B750)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1CC7BCC0)
#define FOUNDATION_ASSETS_LOADSCENEASYNCHANDLE_OFFSET UNITYSDK_OFFSET(0x1CC79760)
#define FOUNDATION_ASSETS_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1CC79B10)
#define FOUNDATION_ASSETS_LOADUPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x1CC8C930)
#define FOUNDATION_ASSETS_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1CC85140)
#define FOUNDATION_ASSETS_LOG_OFFSET UNITYSDK_OFFSET(0x1CC84FD0)
#define FOUNDATION_ASSETS_ONASSETLOADEDERROR_OFFSET UNITYSDK_OFFSET(0x1CC80C40)
#define FOUNDATION_ASSETS_ONASSETLOADED_OFFSET UNITYSDK_OFFSET(0x1CC80980)
#define FOUNDATION_ASSETS_ONASSETUNLOADED_OFFSET UNITYSDK_OFFSET(0x1CC80AE0)
#define FOUNDATION_ASSETS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC87BD0)
#define FOUNDATION_ASSETS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC87B00)
#define FOUNDATION_ASSETS_ONREMOVEUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1CC8BFF0)
#define FOUNDATION_ASSETS_ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1CC87CB0)
#define FOUNDATION_ASSETS_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CC88410)
#define FOUNDATION_ASSETS_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x1CC7F280)
#define FOUNDATION_ASSETS_QUERYHANDLEBYPATH_OFFSET UNITYSDK_OFFSET(0x1CC8AD50)
#define FOUNDATION_ASSETS_REMAPVARIANTNAME_OFFSET UNITYSDK_OFFSET(0x1CC8BC80)
#define FOUNDATION_ASSETS_REMOVEASSETBUNDLEBYASSETPATH_OFFSET UNITYSDK_OFFSET(0x1CC8CAF0)
#define FOUNDATION_ASSETS_REMOVEUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1CC7C740)
#define FOUNDATION_ASSETS_RESETUNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1CC8B850)
#define FOUNDATION_ASSETS_SETBUILDVERSIONDATA_OFFSET UNITYSDK_OFFSET(0x1CC85FB0)
#define FOUNDATION_ASSETS_SETDEFAULTLOGINSETTING_OFFSET UNITYSDK_OFFSET(0x1CC871E0)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNTRATE_OFFSET UNITYSDK_OFFSET(0x1CC84BB0)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC847F0)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGENABLE_OFFSET UNITYSDK_OFFSET(0x1CC845E0)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGRATE_OFFSET UNITYSDK_OFFSET(0x1CC849D0)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIG_OFFSET UNITYSDK_OFFSET(0x1CC84550)
#define FOUNDATION_ASSETS_SETLOGINSETTINGBYJSON_OFFSET UNITYSDK_OFFSET(0x1CC872E0)
#define FOUNDATION_ASSETS_SETLOGINSETTING_OFFSET UNITYSDK_OFFSET(0x1CC85DC0)
#define FOUNDATION_ASSETS_SET_APPASSETSDATA_OFFSET UNITYSDK_OFFSET(0x1CC84EC0)
#define FOUNDATION_ASSETS_SET_ASSETSUNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC84E00)
#define FOUNDATION_ASSETS_SET_ASSETSUNLOADPHASE_OFFSET UNITYSDK_OFFSET(0x1CC80E00)
#define FOUNDATION_ASSETS_SET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0x1CC852D0)
#define FOUNDATION_ASSETS_SET_FILEEXISTCHECKTWICE_OFFSET UNITYSDK_OFFSET(0x1CC855D0)
#define FOUNDATION_ASSETS_SET_GAMEENGINERESTARTVERSION_OFFSET UNITYSDK_OFFSET(0x1CC80EC0)
#define FOUNDATION_ASSETS_SET_ISINBOOTPROCESS_OFFSET UNITYSDK_OFFSET(0x1CC80F80)
#define FOUNDATION_ASSETS_SET_ISSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC83520)
#define FOUNDATION_ASSETS_SET_LOGGABLE_OFFSET UNITYSDK_OFFSET(0x1CC85510)
#define FOUNDATION_ASSETS_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1CC88B70)
#define FOUNDATION_ASSETS_SET_UNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1CC8B790)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1CC88930)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC88AB0)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_OFFSET UNITYSDK_OFFSET(0x1CC889F0)
#define FOUNDATION_ASSETS_SET_VIDEOBUNDLE_OFFSET UNITYSDK_OFFSET(0x1CC85390)
#define FOUNDATION_ASSETS_SET_VIDEOCRIWARE_OFFSET UNITYSDK_OFFSET(0x1CC85450)
#define FOUNDATION_ASSETS_SHOULDTRIMEXCESS_OFFSET UNITYSDK_OFFSET(0x1CC7CC60)
#define FOUNDATION_ASSETS_TRYFINDBUNDLELOADINFO_OFFSET UNITYSDK_OFFSET(0x1CC8B470)
#define FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_1_OFFSET UNITYSDK_OFFSET(0x1CC7DBE0)
#define FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0x1CC7DA20)
#define FOUNDATION_ASSETS_UNBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC7AA00)
#define FOUNDATION_ASSETS_UNLOADALLHANDLEEXCEPTBOOT_OFFSET UNITYSDK_OFFSET(0x1CC80FE0)
#define FOUNDATION_ASSETS_UNLOADALLHANDLE_OFFSET UNITYSDK_OFFSET(0x1CC840B0)
#define FOUNDATION_ASSETS_UNLOADALLSCENESINADDITIVESCENE_OFFSET UNITYSDK_OFFSET(0x1CC7B010)
#define FOUNDATION_ASSETS_UNLOADALLSCENES_OFFSET UNITYSDK_OFFSET(0x1CC7B2D0)
#define FOUNDATION_ASSETS_UNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1CC7FA20)
#define FOUNDATION_ASSETS_UNLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1CC7C4C0)
#define FOUNDATION_ASSETS_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1CC7C150)
#define FOUNDATION_ASSETS_UNLOADINSTANCEPOOLREQUESTUSED_OFFSET UNITYSDK_OFFSET(0x1CC880C0)
#define FOUNDATION_ASSETS_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1CC7A500)
#define FOUNDATION_ASSETS_UPDATEASSETS_OFFSET UNITYSDK_OFFSET(0x1CC81480)
#define FOUNDATION_ASSETS_UPDATEBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC806E0)
#define FOUNDATION_ASSETS_UPDATEBUNDLES_OFFSET UNITYSDK_OFFSET(0x1CC83600)
#define FOUNDATION_ASSETS_UPDATEIMPL_OFFSET UNITYSDK_OFFSET(0x1CC88390)
#define FOUNDATION_ASSETS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CC882F0)
#define FOUNDATION_ASSETS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC8CBE0)
#define FOUNDATION_ASSETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8CB90)

namespace Foundation
{
	inline static constexpr unsigned int Assets_TypeDefinitionIndex = 7813;

	class Assets : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Foundation::Assets_ConfigHashSetTrim** StaticGet_HandleTrimConfig()
		{
			return (::Foundation::Assets_ConfigHashSetTrim**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68C0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ErrorUnloadBlockPaths()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>** StaticGet_AssetRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68D0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ActiveVariants()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68D8);
		}
		static ::System::Collections::Generic::LinkedList_1<::Foundation::BundleRequest*>** StaticGet_UnusedBundles()
		{
			return (::System::Collections::Generic::LinkedList_1<::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68E0);
		}
		static ::Il2CppArray<::Foundation::ResourceFileType>** StaticGet_AllResourceFileTypes()
		{
			return (::Il2CppArray<::Foundation::ResourceFileType>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68E8);
		}
		static ::System::Func_4<::Foundation::AssetPath, ::System::Type*, ::Foundation::AssetRequest*, ::UnityEngine::Object*>** StaticGet_assetLoader()
		{
			return (::System::Func_4<::Foundation::AssetPath, ::System::Type*, ::Foundation::AssetRequest*, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68F0);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_LoadedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68F8);
		}
		static ::Foundation::DataStructures::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_AssetRequestHandles()
		{
			return (::Foundation::DataStructures::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6900);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet__watch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6908);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onInstanceRequestUnload()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6910);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__runningSceneHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6918);
		}
		static ::System::Type** StaticGet_Instance_AssetType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6938);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet__additiveSceneHandles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6940);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_TmpReqSet()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6948);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::InstancePoolRequest*>** StaticGet_InstancePoolRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::InstancePoolRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6950);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet_s_Stopwatch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6958);
		}
		static ::System::Action** StaticGet_assetsPreLoader()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6960);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_LoadingAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6968);
		}
		static ::System::String** StaticGet__localProtocol()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6970);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_UnloadingNewAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6978);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType>** StaticGet_UnloadTypeHandleDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoadedCollect()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6988);
		}
		static ::System::Collections::Generic::List_1<::Foundation::SceneAssetRequest*>** StaticGet_LoadingScenes()
		{
			return (::System::Collections::Generic::List_1<::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6990);
		}
		static ::Foundation::Assets** StaticGet__instance()
		{
			return (::Foundation::Assets**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6998);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::SceneAssetRequest*>** StaticGet_UnusedScenes()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69A0);
		}
		static ::System::String** StaticGet__platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69A8);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetUnloaded()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69B0);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetLoadCacheKey>** StaticGet_TmpCacheKeySet()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetLoadCacheKey>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::SceneAssetRequest*>** StaticGet_SceneRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69C0);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_UnusedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69C8);
		}
		static ::System::Collections::Generic::List_1<::Foundation::BundleRequest*>** StaticGet_LoadingBundles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::UInt32>** StaticGet_HandleRestartVersionDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69D8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_NeverUnloadBlockPaths()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69E0);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_BootLoadedHandles()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::System::Type*>, ::Foundation::AssetRequestHandle>** StaticGet__preloadRequestHandles()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::System::Type*>, ::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69F0);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoaded()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69F8);
		}
		static ::System::Func_2<::Foundation::AssetPath, ::System::ValueTuple_2<::System::Boolean, ::System::Boolean>>** StaticGet_containsAssetProxy()
		{
			return (::System::Func_2<::Foundation::AssetPath, ::System::ValueTuple_2<::System::Boolean, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6A00);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoadedError()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6A08);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::BundleID, ::Foundation::BundleRequest*>** StaticGet_BundleRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::BundleID, ::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6A10);
		}
		static ::Foundation::LoginSetting* StaticGet_loginSetting()
		{
			return (::Foundation::LoginSetting*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6A18);
		}
		static ::Class_1_2556F0ED31BA44F3** StaticGet__AppAssetsData_k__BackingField()
		{
			return (::Class_1_2556F0ED31BA44F3**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6A28);
		}
		static ::System::Boolean* StaticGet_DebugGM_ShowRestartAssetLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3620);
		}
		static ::System::Boolean* StaticGet_assetUpdateAfterLateUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3621);
		}
		static ::System::Boolean* StaticGet_ProcessUnusedRequestAsync()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3622);
		}
		static ::System::Boolean* StaticGet_useBundleRequestOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3623);
		}
		static ::System::Boolean* StaticGet_s_IsStepUnloadBundle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3624);
		}
		static ::System::Boolean* StaticGet__development_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3625);
		}
		static ::System::Boolean* StaticGet__loggable_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3626);
		}
		static ::System::Int32* StaticGet_DebugGM_RestartAssetLogMaxCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3628);
		}
		static ::System::Boolean* StaticGet__FileExistCheckTwice_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x362C);
		}
		static ::System::Boolean* StaticGet__videoCriWare_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x362D);
		}
		static ::System::Boolean* StaticGet_closeUnloadImmediate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x362E);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsImmediate_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x362F);
		}
		static ::System::Int32* StaticGet_currentVerifierRetryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3630);
		}
		static ::System::Int32* StaticGet_fileVerifierMaxCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3634);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsNow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3638);
		}
		static ::System::Boolean* StaticGet_forceSyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3639);
		}
		static ::System::Boolean* StaticGet_forceDisablePool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x363A);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsNow_InstanceRequest_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x363B);
		}
		static ::System::Single* StaticGet_DeepCheckInstancePoolRequests_Time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x363C);
		}
		static ::System::UInt32* StaticGet__GameEngineRestartVersion_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3640);
		}
		static ::Foundation::AssetsUnloadPhase* StaticGet__AssetsUnloadPhase_k__BackingField()
		{
			return (::Foundation::AssetsUnloadPhase*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3644);
		}
		static ::System::Boolean* StaticGet__isInBootProcess_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3648);
		}
		static ::System::Boolean* StaticGet_s_ForceOffStepUnloadBundle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3649);
		}
		static ::System::Boolean* StaticGet__videoBundle_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x364A);
		}
		static ::Foundation::AssetsUnloadLevel* StaticGet__AssetsUnloadLevel_k__BackingField()
		{
			return (::Foundation::AssetsUnloadLevel*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x364B);
		}
		static ::System::Single* StaticGet_s_UnloadBundleTimeSlice()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x364C);
		}
		static ::System::Single* StaticGet_CheckInstancePoolRequestsUsed_Time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3650);
		}
		static ::Foundation::VerifyBy* StaticGet_verifyBy()
		{
			return (::Foundation::VerifyBy*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3654);
		}
		// static const ::System::String* BLOCK_FILE_EXTENSION; // 0x0
		// static const ::System::String* BUNDLE_FILE_EXTENSION; // 0x0
		// static const ::System::String* CRIWARE_FILE_EXTENSION; // 0x0
		// static const ::System::String* MP4_FILE_EXTENSION; // 0x0
		// static const ::System::Int64 MAX_COST = 0x3; // 0x0
		// static const ::System::Single CheckInstancePoolRequestsUsed_DeltaTime; // 0x0
		// static const ::System::Single DeepCheckInstancePoolRequests_DeltaTime; // 0x0
		// static const ::System::Single UnloadBundleTimeSliceMax; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS__CCTOR_OFFSET))();
		}

		static ::System::Void DumpAssetLog_OnRestart()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETLOG_ONRESTART_OFFSET))();
		}

		static ::System::Boolean IsScenePathValid(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISSCENEPATHVALID_OFFSET))(path);
		}

		static ::Foundation::AssetRequestHandle LoadSceneAsyncHandle(::System::String* path, ::System::Boolean& additive)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADSCENEASYNCHANDLE_OFFSET))(path, additive);
		}

		static ::Foundation::SceneAssetRequest* LoadSceneAsync(::System::String* path, ::System::Boolean& additive)
		{
			return ((::Foundation::SceneAssetRequest*(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADSCENEASYNC_OFFSET))(path, additive);
		}

		static ::Foundation::SceneAssetRequest* get__runningScene()
		{
			return ((::Foundation::SceneAssetRequest*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET__RUNNINGSCENE_OFFSET))();
		}

		static ::System::Void UnloadScene(::Foundation::AssetRequestHandle handle, ::System::Boolean additive, ::System::Boolean force)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADSCENE_OFFSET))(handle, additive, force);
		}

		static ::System::Void UnloadAllScenesInAdditiveScene(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLSCENESINADDITIVESCENE_OFFSET))(excludeList);
		}

		static ::System::Void UnloadAllScenes(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLSCENES_OFFSET))(excludeList);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheHandleSync(::Foundation::AssetPath& path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLESYNC_OFFSET))(path);
		}

		static ::Foundation::AssetRequestBase* LoadObjectInstanceCacheSync(::Foundation::AssetPath& assetPath)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHESYNC_OFFSET))(assetPath);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheHandle(::Foundation::AssetPath& path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLE_OFFSET))(path);
		}

		static ::Foundation::AssetRequestBase* LoadObjectInstanceCache(::Foundation::AssetPath& assetPath)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHE_OFFSET))(assetPath);
		}

		static ::System::Void UnloadAsset(::Foundation::AssetRequestHandle handle, ::System::Boolean& immediately)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSET_OFFSET))(handle, immediately);
		}

		static ::System::Void UnloadAsset_1(::Foundation::AssetRequestBase*& asset, ::System::Boolean& immediately)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSET_1_OFFSET))(asset, immediately);
		}

		static ::System::Void RemoveUnusedAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMOVEUNUSEDASSETS_OFFSET))();
		}

		static ::System::Boolean ContainsAsset(::Foundation::AssetPath assetPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONTAINSASSET_OFFSET))(assetPath);
		}

		static ::System::ValueTuple_2<::System::Boolean, ::System::Boolean> ContainsAssetEx(::Foundation::AssetPath assetPath)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONTAINSASSETEX_OFFSET))(assetPath);
		}

		static ::Foundation::BundleRequest* LoadBundle(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLE_OFFSET))(bundleID, refAssetUrl);
		}

		static ::Foundation::BundleRequest* LoadBundleAsync(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLEASYNC_OFFSET))(bundleID, refAssetUrl);
		}

		static ::Foundation::BundleRequest* LoadBundle_1(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl, ::System::Boolean& asyncMode)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLE_1_OFFSET))(bundleID, refAssetUrl, asyncMode);
		}

		static ::System::Boolean TryGetInstancePool(::Foundation::AssetPath assetPath, ::System::Type* assetType, ::Foundation::InstancePoolRequest*& insRequest)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::System::Type*, ::Foundation::InstancePoolRequest*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_OFFSET))(assetPath, assetType, insRequest);
		}

		static ::System::Boolean TryGetInstancePool_1(::Foundation::AssetRequestBase* request, ::Foundation::InstancePoolRequest*& insRequest)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestBase*, ::Foundation::InstancePoolRequest*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_1_OFFSET))(request, insRequest);
		}

		static ::Foundation::InstancePoolRequest* InstantiateAsset(::Foundation::AssetPath assetPath, ::System::Type* assetType)
		{
			return ((::Foundation::InstancePoolRequest*(*)(::Foundation::AssetPath, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INSTANTIATEASSET_OFFSET))(assetPath, assetType);
		}

		static ::Foundation::InstancePoolRequest* InstantiateAsset_1(::Foundation::AssetRequestBase* request)
		{
			return ((::Foundation::InstancePoolRequest*(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INSTANTIATEASSET_1_OFFSET))(request);
		}

		static ::System::Void AddRequest(::Foundation::AssetRequestBase*& request, ::System::Boolean load)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDREQUEST_OFFSET))(request, load);
		}

		static ::Foundation::AssetRequestHandle LoadAssetHandle(::Foundation::AssetPath& assetPath, ::System::Type* type, ::System::Boolean async, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*, ::System::Boolean, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSETHANDLE_OFFSET))(assetPath, type, async, unloadType);
		}

		static ::Foundation::AssetRequestBase* LoadAsset(::Foundation::AssetPath& assetPath, ::System::Type* type, ::System::Boolean async)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSET_OFFSET))(assetPath, type, async);
		}

		static ::System::Boolean IsFirstInstallation(::System::String* recordStreamingVersion)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISFIRSTINSTALLATION_OFFSET))(recordStreamingVersion);
		}

		static ::System::Boolean IsOverlayInstallation(::System::String* streamingVersion, ::System::String* recordStreamingVersion)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISOVERLAYINSTALLATION_OFFSET))(streamingVersion, recordStreamingVersion);
		}

		static ::System::Void PreloadAssets(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* assetFullPaths)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_PRELOADASSETS_OFFSET))(assetFullPaths);
		}

		static ::System::Void unloadAssets(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* assetFullPaths)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSETS_OFFSET))(assetFullPaths);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync(::Foundation::AssetPath& assetPath, ::System::Type*& type, ::Foundation::AssetsUnloadType& unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*&, ::Foundation::AssetsUnloadType&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSETASYNC_OFFSET))(assetPath, type, unloadType);
		}

		static ::Foundation::AssetRequestHandle LoadAsset_1(::Foundation::AssetPath& assetPath, ::System::Type*& type, ::Foundation::AssetsUnloadType& unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*&, ::Foundation::AssetsUnloadType&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSET_1_OFFSET))(assetPath, type, unloadType);
		}

		static ::Foundation::AssetRequestHandle GenerateBindRequest(::Foundation::AssetRequestBase* assetRequest, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetRequestBase*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GENERATEBINDREQUEST_OFFSET))(assetRequest, unloadType);
		}

		static ::System::Void BindRequest(::Foundation::AssetRequestHandle newHandle, ::Foundation::AssetRequestBase* assetRequest, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetRequestBase*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_BINDREQUEST_OFFSET))(newHandle, assetRequest, unloadType);
		}

		static ::System::Boolean UnBindRequest(::Foundation::AssetRequestHandle newHandle)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNBINDREQUEST_OFFSET))(newHandle);
		}

		static ::System::Void UpdateBindRequest(::Foundation::AssetRequestHandle newHandle, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEBINDREQUEST_OFFSET))(newHandle, unloadType);
		}

		static ::System::Void OnAssetLoaded(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETLOADED_OFFSET))(path);
		}

		static ::System::Void OnAssetUnloaded(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETUNLOADED_OFFSET))(path);
		}

		static ::System::Void OnAssetLoadedError(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETLOADEDERROR_OFFSET))(path);
		}

		static ::System::Int32 GetAssetRefCount(::Foundation::AssetPath& path)
		{
			return ((::System::Int32(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETASSETREFCOUNT_OFFSET))(path);
		}

		static ::Foundation::AssetsUnloadPhase get_AssetsUnloadPhase()
		{
			return ((::Foundation::AssetsUnloadPhase(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ASSETSUNLOADPHASE_OFFSET))();
		}

		static ::System::Void set_AssetsUnloadPhase(::Foundation::AssetsUnloadPhase value)
		{
			return ((::System::Void(*)(::Foundation::AssetsUnloadPhase))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ASSETSUNLOADPHASE_OFFSET))(value);
		}

		static ::System::UInt32 get_GameEngineRestartVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_GAMEENGINERESTARTVERSION_OFFSET))();
		}

		static ::System::Void set_GameEngineRestartVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_GAMEENGINERESTARTVERSION_OFFSET))(value);
		}

		static ::System::Boolean get_isInBootProcess()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ISINBOOTPROCESS_OFFSET))();
		}

		static ::System::Void set_isInBootProcess(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ISINBOOTPROCESS_OFFSET))(value);
		}

		static ::System::Void UnloadAllHandleExceptBoot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLHANDLEEXCEPTBOOT_OFFSET))();
		}

		static ::System::Void UnloadAllHandle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLHANDLE_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::Foundation::ResourceFileType>* GetAllResourceFileTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::ResourceFileType>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETALLRESOURCEFILETYPES_OFFSET))();
		}

		static ::System::Void SetHandleTrimConfig(::Foundation::Assets_ConfigHashSetTrim* config)
		{
			return ((::System::Void(*)(::Foundation::Assets_ConfigHashSetTrim*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIG_OFFSET))(config);
		}

		static ::System::Void SetHandleTrimConfigEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGENABLE_OFFSET))(enable);
		}

		static ::System::Void SetHandleTrimConfigCount(::System::Int32 vacancyCount)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNT_OFFSET))(vacancyCount);
		}

		static ::System::Void SetHandleTrimConfigRate(::System::Int32 vacancyRate)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGRATE_OFFSET))(vacancyRate);
		}

		static ::System::Void SetHandleTrimConfigCountRate(::System::Int32 vacancyCount, ::System::Int32 vacancyRate)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNTRATE_OFFSET))(vacancyCount, vacancyRate);
		}

		static ::System::Boolean ShouldTrimExcess(::System::Int32 currentCount, ::System::Int32 capacity)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SHOULDTRIMEXCESS_OFFSET))(currentCount, capacity);
		}

		static ::Foundation::AssetsUnloadLevel get_AssetsUnloadLevel()
		{
			return ((::Foundation::AssetsUnloadLevel(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ASSETSUNLOADLEVEL_OFFSET))();
		}

		static ::System::Void set_AssetsUnloadLevel(::Foundation::AssetsUnloadLevel value)
		{
			return ((::System::Void(*)(::Foundation::AssetsUnloadLevel))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ASSETSUNLOADLEVEL_OFFSET))(value);
		}

		static ::Class_1_2556F0ED31BA44F3* get_AppAssetsData()
		{
			return ((::Class_1_2556F0ED31BA44F3*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_APPASSETSDATA_OFFSET))();
		}

		static ::System::Void set_AppAssetsData(::Class_1_2556F0ED31BA44F3* value)
		{
			return ((::System::Void(*)(::Class_1_2556F0ED31BA44F3*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_APPASSETSDATA_OFFSET))(value);
		}

		static ::System::String* get_VideoExtension()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOEXTENSION_OFFSET))();
		}

		static ::System::Void Log(::System::String* s)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOG_OFFSET))(s);
		}

		static ::System::Void LogFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOGFORMAT_OFFSET))(format, args);
		}

		static ::System::Boolean get_development()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_DEVELOPMENT_OFFSET))();
		}

		static ::System::Void set_development(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_DEVELOPMENT_OFFSET))(value);
		}

		static ::System::Boolean get_videoBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOBUNDLE_OFFSET))();
		}

		static ::System::Void set_videoBundle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_VIDEOBUNDLE_OFFSET))(value);
		}

		static ::System::Boolean get_videoCriWare()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOCRIWARE_OFFSET))();
		}

		static ::System::Void set_videoCriWare(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_VIDEOCRIWARE_OFFSET))(value);
		}

		static ::System::Boolean get_loggable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_LOGGABLE_OFFSET))();
		}

		static ::System::Void set_loggable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_LOGGABLE_OFFSET))(value);
		}

		static ::System::Boolean get_FileExistCheckTwice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_FILEEXISTCHECKTWICE_OFFSET))();
		}

		static ::System::Void set_FileExistCheckTwice(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_FILEEXISTCHECKTWICE_OFFSET))(value);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CLEAR_OFFSET))();
		}

		static ::System::String* GetTemporaryCachePath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETTEMPORARYCACHEPATH_OFFSET))(relativePath);
		}

		static ::System::String* GetPersistentPath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETPERSISTENTPATH_OFFSET))(relativePath);
		}

		static ::System::String* GetStreamingPath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETSTREAMINGPATH_OFFSET))(relativePath);
		}

		static ::System::Boolean GetLocalRelativePath(::System::String* persistOrStreamingFilePath, ::System::String*& localRelativePath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETLOCALRELATIVEPATH_OFFSET))(persistOrStreamingFilePath, localRelativePath);
		}

		static ::System::String* GetBadBundleFilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBADBUNDLEFILEPATH_OFFSET))();
		}

		static ::System::String* GetDiffPatchCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETDIFFPATCHCACHEPATH_OFFSET))();
		}

		static ::System::Void Init(::System::Action* cb)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INIT_OFFSET))(cb);
		}

		static ::System::Void ForceClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCECLEARALL_OFFSET))();
		}

		static ::System::Void InitAssetsScript()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INITASSETSSCRIPT_OFFSET))();
		}

		static ::System::Void SetDefaultLoginSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETDEFAULTLOGINSETTING_OFFSET))();
		}

		static ::System::Void SetLoginSettingByJson(::System::String* jsonText)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETLOGINSETTINGBYJSON_OFFSET))(jsonText);
		}

		static ::System::Void SetLoginSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETLOGINSETTING_OFFSET))();
		}

		static ::System::Void SetBuildVersionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETBUILDVERSIONDATA_OFFSET))();
		}

		static ::System::Boolean IsVideoBundleMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISVIDEOBUNDLEMODE_OFFSET))();
		}

		static ::System::String* GetAssetParentDir(::System::String* filename)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETASSETPARENTDIR_OFFSET))(filename);
		}

		static ::System::Boolean IsAssetBundleFile(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISASSETBUNDLEFILE_OFFSET))(filename);
		}

		static ::System::Boolean IsBlockAssets(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISBLOCKASSETS_OFFSET))(filename);
		}

		static ::System::Boolean IsAudioAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISAUDIOASSET_OFFSET))(filename);
		}

		static ::System::Boolean IsVideoAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISVIDEOASSET_OFFSET))(filename);
		}

		static ::System::Boolean IsSVCAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISSVCASSET_OFFSET))(filename);
		}

		static ::System::String* GetVer()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETVER_OFFSET))();
		}

		static ::System::String* GetPlatformForAssetBundles(::UnityEngine::RuntimePlatform target)
		{
			return ((::System::String*(*)(::UnityEngine::RuntimePlatform))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETPLATFORMFORASSETBUNDLES_OFFSET))(target);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONSCENEUNLOADED_OFFSET))(this, scene);
		}

		static ::System::Int32 CheckInstancePoolRequestUsed(::System::Boolean deepCheck, ::System::Boolean forceTick)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CHECKINSTANCEPOOLREQUESTUSED_OFFSET))(deepCheck, forceTick);
		}

		static ::System::Void UnloadInstancePoolRequestUsed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADINSTANCEPOOLREQUESTUSED_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATE_OFFSET))(this);
		}

		static ::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_POSTLATEUPDATE_OFFSET))();
		}

		::System::Void UpdateImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEIMPL_OFFSET))(this);
		}

		static ::System::Void UpdateAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEASSETS_OFFSET))();
		}

		static ::System::Void ForceUnloadScene(::Foundation::SceneAssetRequest* request)
		{
			return ((::System::Void(*)(::Foundation::SceneAssetRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCEUNLOADSCENE_OFFSET))(request);
		}

		static ::System::Boolean get_updateUnusedAssetsImmediate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsImmediate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET))(value);
		}

		static ::System::Boolean get_updateUnusedAssetsNow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsNow(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_OFFSET))(value);
		}

		static ::System::Boolean get_updateUnusedAssetsNow_InstanceRequest()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsNow_InstanceRequest(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET))(value);
		}

		static ::System::String* get_platform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_PLATFORM_OFFSET))();
		}

		static ::System::Void set_platform(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_PLATFORM_OFFSET))(value);
		}

		static ::System::String* DumpAssetBlocks()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETBLOCKS_OFFSET))();
		}

		static ::System::String* DumpAssetsLoading()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETSLOADING_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* QueryHandleByPath(::System::String* path)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_QUERYHANDLEBYPATH_OFFSET))(path);
		}

		static ::System::String* DumpAssets()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETS_OFFSET))();
		}

		static ::System::Void ApplicationOnLowMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_APPLICATIONONLOWMEMORY_OFFSET))();
		}

		static ::System::Boolean FindBundle(::Foundation::AssetPath path, ::Foundation::BundleID& bundleID)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::BundleID&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FINDBUNDLE_OFFSET))(path, bundleID);
		}

		static ::Il2CppArray<::Foundation::BundleID>* GetChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETCHILDREN_OFFSET))(bundle);
		}

		static ::Foundation::BundleLocation GetBundleLocation(::Foundation::BundleID id, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocation(*)(::Foundation::BundleID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATION_OFFSET))(id, checkExist);
		}

		static ::Foundation::BundleLocationInfo GetBundleLocationInfo(::Foundation::BundleID bundleID, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocationInfo(*)(::Foundation::BundleID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_OFFSET))(bundleID, checkExist);
		}

		static ::Foundation::BundleLocationInfo GetBundleLocationInfo_1(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& info, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocationInfo(*)(::Foundation::BundleID, ::Foundation::BundleInfo&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_1_OFFSET))(bundleID, info, checkExist);
		}

		static ::System::Boolean TryFindBundleLoadInfo(::Foundation::BundleID id, ::Foundation::BundleLoadInfo& bundleLoadInfo)
		{
			return ((::System::Boolean(*)(::Foundation::BundleID, ::Foundation::BundleLoadInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYFINDBUNDLELOADINFO_OFFSET))(id, bundleLoadInfo);
		}

		static ::System::Void ForceOffStepUnloadBundle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCEOFFSTEPUNLOADBUNDLE_OFFSET))();
		}

		static ::System::Single get_UnloadBundleTimeSlice()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UNLOADBUNDLETIMESLICE_OFFSET))();
		}

		static ::System::Void set_UnloadBundleTimeSlice(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UNLOADBUNDLETIMESLICE_OFFSET))(value);
		}

		static ::System::Boolean get_IsStepUnloadBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ISSTEPUNLOADBUNDLE_OFFSET))();
		}

		static ::System::Void set_IsStepUnloadBundle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ISSTEPUNLOADBUNDLE_OFFSET))(value);
		}

		static ::System::Void ResetUnloadBundleTimeSlice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_RESETUNLOADBUNDLETIMESLICE_OFFSET))();
		}

		static ::System::Boolean IsLoadingOrQueued()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISLOADINGORQUEUED_OFFSET))();
		}

		static ::System::Void UpdateBundles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEBUNDLES_OFFSET))();
		}

		static ::System::Void AddUnUnusedBundle(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDBUNDLE_OFFSET))(br);
		}

		static ::System::Void AddUnUnusedScene(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDSCENE_OFFSET))(br);
		}

		static ::System::Void AddUnUnusedAsset(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDASSET_OFFSET))(br);
		}

		static ::System::String* RemapVariantName(::System::String* bundle)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMAPVARIANTNAME_OFFSET))(bundle);
		}

		::System::Void OnRemoveUnusedAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONREMOVEUNUSEDASSETS_OFFSET))(this);
		}

		static ::System::String* GetBlockRelativeFolder(::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBLOCKRELATIVEFOLDER_OFFSET))(resourceFileType);
		}

		static ::System::String* GetBlockAbsolutePath(::System::String* updateBlockRootPath, ::Foundation::ResourceFileType resourceFileType, ::System::UInt64 blockHashName)
		{
			return ((::System::String*(*)(::System::String*, ::Foundation::ResourceFileType, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBLOCKABSOLUTEPATH_OFFSET))(updateBlockRootPath, resourceFileType, blockHashName);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>* GetAllLoadedBlockPaths()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETALLLOADEDBLOCKPATHS_OFFSET))();
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>* GetUnloadTypeBlockPaths(::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETUNLOADTYPEBLOCKPATHS_OFFSET))(unloadType);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt64>* GetLoadedBundleHashes()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETLOADEDBUNDLEHASHES_OFFSET))();
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt64>* GetUnloadTypeBundleHashes(::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETUNLOADTYPEBUNDLEHASHES_OFFSET))(unloadType);
		}

		static ::System::Void LoadUpdateVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADUPDATEVERSION_OFFSET))();
		}

		static ::System::Void AssetBundleIndex_Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ASSETBUNDLEINDEX_CLEAR_OFFSET))();
		}

		static ::System::Void BeforeAssetBundleIndex_Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_BEFOREASSETBUNDLEINDEX_CLEAR_OFFSET))();
		}

		static ::System::Void RemoveAssetBundleByAssetPath(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMOVEASSETBUNDLEBYASSETPATH_OFFSET))(path);
		}
	};
}
