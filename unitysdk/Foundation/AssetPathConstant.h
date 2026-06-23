#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_ASSETPATHCONSTANT_GETUPDATEBLOCKPATH_1_OFFSET UNITYSDK_OFFSET(0x1E19EAD0)
#define FOUNDATION_ASSETPATHCONSTANT_GETUPDATEBLOCKPATH_OFFSET UNITYSDK_OFFSET(0x1E19E970)
#define FOUNDATION_ASSETPATHCONSTANT_GETUPDATEBLOCKRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1E19EEF0)
#define FOUNDATION_ASSETPATHCONSTANT_GET_BASEBLOCKROOT_OFFSET UNITYSDK_OFFSET(0x1E19E2B0)
#define FOUNDATION_ASSETPATHCONSTANT_GET_BASEBUNDLEROOT_OFFSET UNITYSDK_OFFSET(0x1E19E1D0)
#define FOUNDATION_ASSETPATHCONSTANT_GET_BASEFILEROOT_OFFSET UNITYSDK_OFFSET(0x1E19DF10)
#define FOUNDATION_ASSETPATHCONSTANT_GET_TEMPFILEROOT_OFFSET UNITYSDK_OFFSET(0x1E19E070)
#define FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEAUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1E19E6D0)
#define FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEBLOCKPATH_OFFSET UNITYSDK_OFFSET(0x1E19E570)
#define FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEBUNDLEPATH_OFFSET UNITYSDK_OFFSET(0x1E19E410)
#define FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEFILEROOT_OFFSET UNITYSDK_OFFSET(0x1E19DDB0)
#define FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEMISCPATH_OFFSET UNITYSDK_OFFSET(0x1E19E890)
#define FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1E19E7B0)

namespace Foundation
{
	inline static constexpr unsigned int AssetPathConstant_TypeDefinitionIndex = 8183;

	class AssetPathConstant : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__cacheConfigBinFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7420);
		}
		static ::System::String** StaticGet__UpdateBundlePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7428);
		}
		static ::System::String** StaticGet__UpdateBlockPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7430);
		}
		static ::System::String** StaticGet__updateFileRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7438);
		}
		static ::System::String** StaticGet__cacheVersionFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7440);
		}
		static ::System::String** StaticGet__BaseBlockRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7448);
		}
		static ::System::String** StaticGet__baseFileRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7450);
		}
		static ::System::String** StaticGet__tempFileRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstant_TypeDefinitionIndex)->GetStaticField(0x7458);
		}
		// static const ::System::String* AppStoreCDNUrl; // 0x0
		// static const ::System::String* RealCDNUrl; // 0x0
		// static const ::System::String* ConfigBinName; // 0x0
		// static const ::System::String* ServerListBinName; // 0x0
		// static const ::System::String* AudioAssets; // 0x0
		// static const ::System::String* VideoAssets; // 0x0
		// static const ::System::String* MiscAssets; // 0x0
		// static const ::System::String* TracingFolderName; // 0x0
		// static const ::System::String* TracingFileSuffix; // 0x0
		// static const ::System::String* Bundles; // 0x0
		// static const ::System::String* BinaryBundles; // 0x0
		// static const ::System::String* Blocks; // 0x0
		// static const ::System::String* Predownloads; // 0x0
		// static const ::System::String* Prepatch; // 0x0
		// static const ::System::String* BadBundleFileName; // 0x0
		// static const ::System::String* DiffCacheFileName; // 0x0
		// static const ::System::String* VersionsRuntime; // 0x0
		// static const ::System::String* TAG; // 0x0
		// static const ::System::String* FileConfig; // 0x0
		// static const ::System::String* BASE_REVISION; // 0x0
		// static const ::System::String* LOGIN_SETTING_PATH; // 0x0
		// static const ::System::String* ServerUrl; // 0x0
		// static const ::System::String* KVersionsOfStreaming; // 0x0
		// static const ::System::String* KCleanCheck; // 0x0
		// static const ::System::String* KCDN_CONF_EXT; // 0x0
		// static const ::System::String* KPREPATCH_CONF_EXT; // 0x0
		// static const ::System::String* KDownloadFull; // 0x0
		// static const ::System::String* KBasePackage; // 0x0
		// static const ::System::String* KPredownload; // 0x0
		// static const ::System::String* KVerifyAll; // 0x0
		// static const ::System::String* KAudioRevision; // 0x0
		// static const ::System::String* KDelResource; // 0x0
		// static const ::System::String* KMissingPackages; // 0x0
		// static const ::System::String* KConsoleAudioLang; // 0x0

		static ::System::String* get_UpdateFileRoot()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEFILEROOT_OFFSET))();
		}

		static ::System::String* get_BaseFileRoot()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_BASEFILEROOT_OFFSET))();
		}

		static ::System::String* get_TempFileRoot()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_TEMPFILEROOT_OFFSET))();
		}

		static ::System::String* get_BaseBundleRoot()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_BASEBUNDLEROOT_OFFSET))();
		}

		static ::System::String* get_BaseBlockRoot()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_BASEBLOCKROOT_OFFSET))();
		}

		static ::System::String* get_UpdateBundlePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEBUNDLEPATH_OFFSET))();
		}

		static ::System::String* get_UpdateBlockPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEBLOCKPATH_OFFSET))();
		}

		static ::System::String* get_UpdateAudioPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEAUDIOPATH_OFFSET))();
		}

		static ::System::String* get_UpdateVideoPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEVIDEOPATH_OFFSET))();
		}

		static ::System::String* get_UpdateMiscPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GET_UPDATEMISCPATH_OFFSET))();
		}

		static ::System::String* GetUpdateBlockPath(::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GETUPDATEBLOCKPATH_OFFSET))(resourceFileType);
		}

		static ::System::String* GetUpdateBlockPath_1(::System::String* rootDir, ::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::String*(*)(::System::String*, ::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GETUPDATEBLOCKPATH_1_OFFSET))(rootDir, resourceFileType);
		}

		static ::System::String* GetUpdateBlockRelativePath(::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANT_GETUPDATEBLOCKRELATIVEPATH_OFFSET))(resourceFileType);
		}
	};
}
