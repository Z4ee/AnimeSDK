#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E7AD49F6649E91E;
class Class_1_405E04F3542B952C;
class Class_1_718B8238EA10D3FF;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_VERSIONUPDATECHECK_CLEARPERSISTENTDATAPATHASSET_OFFSET UNITYSDK_OFFSET(0xE440740)
#define RPG_CLIENT_VERSIONUPDATECHECK_CLEARREGISTRY_OFFSET UNITYSDK_OFFSET(0xE4410F0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ENABLESKDLOGIN_OFFSET UNITYSDK_OFFSET(0xE441130)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETASSETBUNDLERUNTIMEVERSION_OFFSET UNITYSDK_OFFSET(0xE43FD00)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETDESIGNDATABUNDLERUNTIMEVERSION_OFFSET UNITYSDK_OFFSET(0xE43FD40)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETLUABUNDLERUNTIMEVERSION_OFFSET UNITYSDK_OFFSET(0xE43FD80)
#define RPG_CLIENT_VERSIONUPDATECHECK_GETSTREAMASBVERSION_OFFSET UNITYSDK_OFFSET(0xE43FC70)
#define RPG_CLIENT_VERSIONUPDATECHECK_HAVEDOWNLOADEDFULLASSETS_OFFSET UNITYSDK_OFFSET(0xE442AD0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISANDROIDASSETMIDPACKSTATE_OFFSET UNITYSDK_OFFSET(0xE442D30)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISASBNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE440670)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISDESIGNDATANEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE4401E0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISDOWNLOADEDFULLASSETS_OFFSET UNITYSDK_OFFSET(0xE4429C0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDEFULLASSET_OFFSET UNITYSDK_OFFSET(0xE4422B0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDEFULLDESIGNDATA_OFFSET UNITYSDK_OFFSET(0xE4423C0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISINCLUDERUNTIMEBASEASSET_OFFSET UNITYSDK_OFFSET(0xE441C80)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISIOSSUBPACK_OFFSET UNITYSDK_OFFSET(0xE43FDC0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISLUAASSETAUDIOVIDEONEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE4402A0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISLUANEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE4405B0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISNEEDDOWNLOADFULLASSET_OFFSET UNITYSDK_OFFSET(0xE4421C0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISNEEDTIPSASSETDOWNLOADIFNOWIFILOCALAREANETWORK_OFFSET UNITYSDK_OFFSET(0xE442650)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISONLYDESIGNDATANEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xE440030)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISONLYINCLUDESTARTDESIGNDATA_OFFSET UNITYSDK_OFFSET(0xE4424D0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISPSSUBPACKPROMISED_OFFSET UNITYSDK_OFFSET(0xE43FE00)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISTHISAPPIDENTITY_OFFSET UNITYSDK_OFFSET(0xE442690)
#define RPG_CLIENT_VERSIONUPDATECHECK_ISWIFILOCALAREANETWORK_OFFSET UNITYSDK_OFFSET(0xE4425E0)
#define RPG_CLIENT_VERSIONUPDATECHECK_ONLOCALPAKUPDATEEND_OFFSET UNITYSDK_OFFSET(0xE4416E0)
#define RPG_CLIENT_VERSIONUPDATECHECK_RELOADSERVERBUNDLEINFO_OFFSET UNITYSDK_OFFSET(0xE441170)
#define RPG_CLIENT_VERSIONUPDATECHECK_RELOADSTARTLUAENV_OFFSET UNITYSDK_OFFSET(0xE4411F0)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTAFTERLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xE441520)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTAFTERVERSIONUPDATE_OFFSET UNITYSDK_OFFSET(0xE4413D0)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTASYNCLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xE441440)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALASSETVERIFY_OFFSET UNITYSDK_OFFSET(0xE441E50)
#define RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALPAKUPDATE_OFFSET UNITYSDK_OFFSET(0xE4418F0)
#define RPG_CLIENT_VERSIONUPDATECHECK_WRITEDOWNLOADEDFULLASSETS_OFFSET UNITYSDK_OFFSET(0xE442B40)
#define RPG_CLIENT_VERSIONUPDATECHECK_WRITETHISAPPIDENTITYTOLOCAL_OFFSET UNITYSDK_OFFSET(0xE4427A0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck_TypeDefinitionIndex = 61257;

	class VersionUpdateCheck : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_msCallback()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck_TypeDefinitionIndex)->GetStaticField(0x49B00);
		}
		static ::Class_1_405E04F3542B952C** StaticGet__LocalPakUpdate()
		{
			return (::Class_1_405E04F3542B952C**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck_TypeDefinitionIndex)->GetStaticField(0x49B08);
		}
		static ::Class_1_3E7AD49F6649E91E** StaticGet__LocalAssetVerify()
		{
			return (::Class_1_3E7AD49F6649E91E**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck_TypeDefinitionIndex)->GetStaticField(0x49B10);
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

		static ::System::Boolean IsDesignDataNeedUpdate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISDESIGNDATANEEDUPDATE_OFFSET))(a1);
		}

		static ::System::Boolean IsLuaNeedUpdate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISLUANEEDUPDATE_OFFSET))(a1);
		}

		static ::System::Boolean IsAsbNeedUpdate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ISASBNEEDUPDATE_OFFSET))(a1);
		}

		static ::System::Void ClearPersistentDataPathAsset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_CLEARPERSISTENTDATAPATHASSET_OFFSET))();
		}

		static ::System::Void ClearRegistry()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_CLEARREGISTRY_OFFSET))();
		}

		static ::System::Void EnableSKDLogin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_ENABLESKDLOGIN_OFFSET))(a1);
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

		static ::System::Void StartLocalPakUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALPAKUPDATE_OFFSET))(a1);
		}

		static ::System::Void StartLocalAssetVerify(::System::Boolean a1, ::System::Action_1<::Class_1_718B8238EA10D3FF*>* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action_1<::Class_1_718B8238EA10D3FF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK_STARTLOCALASSETVERIFY_OFFSET))(a1, a2);
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
