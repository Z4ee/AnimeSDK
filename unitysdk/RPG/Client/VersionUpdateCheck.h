#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E7AD49F6649E91E;
class Class_1_405E04F3542B952C;
class Class_1_D6D8D891CDDE5DED;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_VERSIONUPDATECHECK_CLEARPERSISTENTDATAPATHASSET_OFFSET UNITYSDK_OFFSET(0xA7659F0)
#define RPG_CLIENT_VERSIONUPDATECHECK_CLEARREGISTRY_OFFSET UNITYSDK_OFFSET(0xA7662C0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ENABLESKDLOGIN_OFFSET UNITYSDK_OFFSET(0xA766300)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETASSETBUNDLERUNTIMEVERSION_OFFSET UNITYSDK_OFFSET(0xA764FB0)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETDESIGNDATABUNDLERUNTIMEVERSION_OFFSET UNITYSDK_OFFSET(0xA764FF0)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETLUABUNDLERUNTIMEVERSION_OFFSET UNITYSDK_OFFSET(0xA765030)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETSTREAMASBVERSION_OFFSET UNITYSDK_OFFSET(0xA764F20)
#define RPG_CLIENT_VERSIONUPDATECHECK_HAVEDOWNLOADEDFULLASSETS_OFFSET UNITYSDK_OFFSET(0xA767B30)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISANDROIDASSETMIDPACKSTATE_OFFSET UNITYSDK_OFFSET(0xA767E20)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISASBNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA765920)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISDESIGNDATANEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA765490)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISDOWNLOADEDFULLASSETS_OFFSET UNITYSDK_OFFSET(0xA767A20)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDEFULLASSET_OFFSET UNITYSDK_OFFSET(0xA7673F0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDEFULLDESIGNDATA_OFFSET UNITYSDK_OFFSET(0xA7674B0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDERUNTIMEBASEASSET_OFFSET UNITYSDK_OFFSET(0xA766E10)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISIOSSUBPACK_OFFSET UNITYSDK_OFFSET(0xA765070)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISLUAASSETAUDIOVIDEONEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA765550)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISLUANEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA765860)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISNEEDDOWNLOADFULLASSET_OFFSET UNITYSDK_OFFSET(0xA767330)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISNEEDTIPSASSETDOWNLOADIFNOWIFILOCALAREANETWORK_OFFSET UNITYSDK_OFFSET(0xA7676A0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISONLYDESIGNDATANEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA7652E0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISONLYINCLUDESTARTDESIGNDATA_OFFSET UNITYSDK_OFFSET(0xA767570)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISPSSUBPACKPROMISED_OFFSET UNITYSDK_OFFSET(0xA7650B0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISTHISAPPIDENTITY_OFFSET UNITYSDK_OFFSET(0xA7676E0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISWIFILOCALAREANETWORK_OFFSET UNITYSDK_OFFSET(0xA767630)
#define RPG_CLIENT_VERSIONUPDATECHECK_ONLOCALPAKUPDATEEND_OFFSET UNITYSDK_OFFSET(0xA7668E0)
#define RPG_CLIENT_VERSIONUPDATECHECK_RELOADSERVERBUNDLEINFO_OFFSET UNITYSDK_OFFSET(0xA766340)
#define RPG_CLIENT_VERSIONUPDATECHECK_RELOADSTARTLUAENV_OFFSET UNITYSDK_OFFSET(0xA7663C0)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTAFTERLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xA7666F0)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTAFTERVERSIONUPDATE_OFFSET UNITYSDK_OFFSET(0xA7665A0)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTASYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xA766610)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALASSETVERIFY_OFFSET UNITYSDK_OFFSET(0xA766F70)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALPAKUPDATE_OFFSET UNITYSDK_OFFSET(0xA766AB0)
#define RPG_CLIENT_VERSIONUPDATECHECK_WRITEDOWNLOADEDFULLASSETS_OFFSET UNITYSDK_OFFSET(0xA767C30)
#define RPG_CLIENT_VERSIONUPDATECHECK_WRITETHISAPPIDENTITYTOLOCAL_OFFSET UNITYSDK_OFFSET(0xA7677F0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck_TypeDefinitionIndex = 49665;

	class VersionUpdateCheck : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_msCallback()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck_TypeDefinitionIndex)->GetStaticField(0x37510);
		}
		static ::Class_1_3E7AD49F6649E91E** StaticGet__LocalAssetVerify()
		{
			return (::Class_1_3E7AD49F6649E91E**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck_TypeDefinitionIndex)->GetStaticField(0x37518);
		}
		static ::Class_1_405E04F3542B952C** StaticGet__LocalPakUpdate()
		{
			return (::Class_1_405E04F3542B952C**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck_TypeDefinitionIndex)->GetStaticField(0x37520);
		}

		static ::System::UInt32 GetStreamAsbVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_GETSTREAMASBVERSION_OFFSET))();
		}

		static ::System::UInt32 GetAssetBundleRuntimeVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_GETASSETBUNDLERUNTIMEVERSION_OFFSET))();
		}

		static ::System::UInt32 GetDesignDataBundleRuntimeVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_GETDESIGNDATABUNDLERUNTIMEVERSION_OFFSET))();
		}

		static ::System::UInt32 GetLuaBundleRuntimeVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_GETLUABUNDLERUNTIMEVERSION_OFFSET))();
		}

		static ::System::Boolean IsIOSSubpack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISIOSSUBPACK_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise_1<::System::Boolean>* IsPSSubpackPromised()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISPSSUBPACKPROMISED_OFFSET))();
		}

		static ::System::Boolean IsOnlyDesignDataNeedUpdate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISONLYDESIGNDATANEEDUPDATE_OFFSET))();
		}

		static ::System::Boolean IsLuaAssetAudioVideoNeedUpdate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISLUAASSETAUDIOVIDEONEEDUPDATE_OFFSET))();
		}

		static ::System::Boolean IsDesignDataNeedUpdate(::System::UInt32 checkPersistentVersion)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISDESIGNDATANEEDUPDATE_OFFSET))(checkPersistentVersion);
		}

		static ::System::Boolean IsLuaNeedUpdate(::System::UInt32 checkPersistentVersion)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISLUANEEDUPDATE_OFFSET))(checkPersistentVersion);
		}

		static ::System::Boolean IsAsbNeedUpdate(::System::UInt32 checkPersistentVersion)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISASBNEEDUPDATE_OFFSET))(checkPersistentVersion);
		}

		static ::System::Void ClearPersistentDataPathAsset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_CLEARPERSISTENTDATAPATHASSET_OFFSET))();
		}

		static ::System::Void ClearRegistry()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_CLEARREGISTRY_OFFSET))();
		}

		static ::System::Void EnableSKDLogin(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ENABLESKDLOGIN_OFFSET))(enable);
		}

		static ::System::Void ReloadServerBundleInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_RELOADSERVERBUNDLEINFO_OFFSET))();
		}

		static ::System::Void ReloadStartLuaEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_RELOADSTARTLUAENV_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* StartAfterVersionUpdate()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_STARTAFTERVERSIONUPDATE_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* StartAsyncLoadAllConfig()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_STARTASYNCLOADALLCONFIG_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* StartAfterLoadAllConfig()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_STARTAFTERLOADALLCONFIG_OFFSET))();
		}

		static ::System::Void OnLocalPakUpdateEnd()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ONLOCALPAKUPDATEEND_OFFSET))();
		}

		static ::System::Void StartLocalPakUpdate(::System::Action* callback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALPAKUPDATE_OFFSET))(callback);
		}

		static ::System::Void StartLocalAssetVerify(::System::Boolean isForceUpdateAsset, ::System::Action_1<::Class_1_D6D8D891CDDE5DED*>* callback)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action_1<::Class_1_D6D8D891CDDE5DED*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALASSETVERIFY_OFFSET))(isForceUpdateAsset, callback);
		}

		static ::System::Boolean IsIncludeRuntimeBaseAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDERUNTIMEBASEASSET_OFFSET))();
		}

		static ::System::Boolean IsNeedDownloadFullAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISNEEDDOWNLOADFULLASSET_OFFSET))();
		}

		static ::System::Boolean IsIncludeFullAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDEFULLASSET_OFFSET))();
		}

		static ::System::Boolean IsIncludeFullDesignData()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDEFULLDESIGNDATA_OFFSET))();
		}

		static ::System::Boolean IsOnlyIncludeStartDesignData()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISONLYINCLUDESTARTDESIGNDATA_OFFSET))();
		}

		static ::System::Boolean IsWifiLocalAreaNetwork()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISWIFILOCALAREANETWORK_OFFSET))();
		}

		static ::System::Boolean IsNeedTipsAssetDownloadIfNoWifiLocalAreaNetwork()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISNEEDTIPSASSETDOWNLOADIFNOWIFILOCALAREANETWORK_OFFSET))();
		}

		static ::System::Boolean IsThisAppIdentity()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISTHISAPPIDENTITY_OFFSET))();
		}

		static ::System::Void WriteThisAppIdentityToLocal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_WRITETHISAPPIDENTITYTOLOCAL_OFFSET))();
		}

		static ::System::Boolean IsDownloadedFullAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISDOWNLOADEDFULLASSETS_OFFSET))();
		}

		static ::System::Boolean HaveDownloadedFullAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_HAVEDOWNLOADEDFULLASSETS_OFFSET))();
		}

		static ::System::Void WriteDownloadedFullAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_WRITEDOWNLOADEDFULLASSETS_OFFSET))();
		}

		static ::System::Boolean IsAndroidAssetMidPackState()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISANDROIDASSETMIDPACKSTATE_OFFSET))();
		}
	};
}
