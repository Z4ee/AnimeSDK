#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/Struct_2_710A4BB1F3B3A759.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_67;
class Class_0_16E4307DCC419505_68;
class Class_1_3DB347DE95E9DF69;
class Class_1_F0F5FC8CD22F7E83;
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::AssetSystem { template <typename T> class AssetOperationCache_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DESIGNDATAMGR_CANLOADLOCALDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x17B81320)
#define RPG_CLIENT_DESIGNDATAMGR_CANLOADSERVERDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x17B81250)
#define RPG_CLIENT_DESIGNDATAMGR_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x17B81F10)
#define RPG_CLIENT_DESIGNDATAMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x17B819E0)
#define RPG_CLIENT_DESIGNDATAMGR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B81660)
#define RPG_CLIENT_DESIGNDATAMGR_EXISTS_OFFSET UNITYSDK_OFFSET(0x17B81F80)
#define RPG_CLIENT_DESIGNDATAMGR_INITPROVIDER_OFFSET UNITYSDK_OFFSET(0x17B81560)
#define RPG_CLIENT_DESIGNDATAMGR_INIT_OFFSET UNITYSDK_OFFSET(0x17B81510)
#define RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x17B826E0)
#define RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET UNITYSDK_OFFSET(0x17B81B00)
#define RPG_CLIENT_DESIGNDATAMGR_SETFILEVISITORPOSMODE_OFFSET UNITYSDK_OFFSET(0x17B81990)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x17B82820)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADBYTESFROMFILE_OFFSET UNITYSDK_OFFSET(0x17B836A0)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADTEXTFROMFILE_OFFSET UNITYSDK_OFFSET(0x17B82B90)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x17B83D90)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET UNITYSDK_OFFSET(0x17B830A0)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x17B83710)
#define RPG_CLIENT_DESIGNDATAMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B83DE0)
#define RPG_CLIENT_DESIGNDATAMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x17B81380)
#define RPG_CLIENT_DESIGNDATAMGR__GETALIGNSIZE_OFFSET UNITYSDK_OFFSET(0x17B82B20)
#define RPG_CLIENT_DESIGNDATAMGR__INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x17B81C80)
#define RPG_CLIENT_DESIGNDATAMGR__INITDATADESIGNBUNDLEPROVIDER_OFFSET UNITYSDK_OFFSET(0x17B81B70)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET UNITYSDK_OFFSET(0x17B82070)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x17B821A0)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x17B825B0)
#define RPG_CLIENT_DESIGNDATAMGR__SYNCLOADBYTESFROMFILEIMPL_OFFSET UNITYSDK_OFFSET(0x17B831A0)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x17B81770)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x17B837E0)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET UNITYSDK_OFFSET(0x17B83B70)

namespace RPG::Client
{
	inline static constexpr unsigned int DesignDataMgr_TypeDefinitionIndex = 37718;

	class DesignDataMgr : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__SyncLoadAssetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(DesignDataMgr_TypeDefinitionIndex)->GetStaticField(0x12F0);
		}
		::System::String* _LocalRelativeFilePathNoExt; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_68*>* AssetOrBundleShortNameHash2LoadItemDic; // 0x18
		::Struct_2_710A4BB1F3B3A759 _LoadParam; // 0x20
		::System::String* _MiniInfoLocalRelativeFilePath; // 0x40
		::Class_1_F0F5FC8CD22F7E83* _MiniVersion; // 0x48
		::Class_0_16E4307DCC419505_67* DesignDataProvider; // 0x50
		::System::Object* _LoadItemLock; // 0x58
		::Class_1_3DB347DE95E9DF69* _ByteArrayCache; // 0x60
		::RPG::Client::AssetSystem::AssetOperationCache_1<::Class_0_16E4307DCC419505_68*>* AssetCache; // 0x68
		::System::Boolean _IsEnableFileStreamCache; // 0x70
		::System::Boolean _IsEnableLog; // 0x71
		::RPG::Client::FileVisitorPosMode _FileVisitorPosMode; // 0x74
		::System::Int64 _ByteArrayAlignByte; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__CCTOR_OFFSET))();
		}

		static ::System::Boolean CanLoadServerDesignDataBundle(::System::String* miniInfoLocalRelativeFilePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CANLOADSERVERDESIGNDATABUNDLE_OFFSET))(miniInfoLocalRelativeFilePath);
		}

		static ::System::Boolean CanLoadLocalDesignDataBundle(::System::String* miniInfoLocalRelativeFilePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CANLOADLOCALDESIGNDATABUNDLE_OFFSET))(miniInfoLocalRelativeFilePath);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFileVisitorPosMode(::RPG::Client::FileVisitorPosMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FileVisitorPosMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SETFILEVISITORPOSMODE_OFFSET))(this, value);
		}

		::System::Void InitProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_INITPROVIDER_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CLEAR_OFFSET))(this);
		}

		::System::Void PutCache(::Class_0_16E4307DCC419505_68* loadItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_68*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET))(this, loadItem);
		}

		::System::Void _InitDataDesignBundleProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__INITDATADESIGNBUNDLEPROVIDER_OFFSET))(this);
		}

		::System::Void _InitAssetLoaderProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__INITASSETLOADERPROVIDER_OFFSET))(this);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CLEARCACHE_OFFSET))(this);
		}

		::System::Boolean Exists(::System::String* assetShortName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_EXISTS_OFFSET))(this, assetShortName);
		}

		::Class_0_16E4307DCC419505_68* _LoadWithAssetCreatedAndLoad(::Class_0_16E4307DCC419505_68* assetLoader, ::Struct_2_710A4BB1F3B3A759 loadParam)
		{
			return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::Class_0_16E4307DCC419505_68*, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET))(this, assetLoader, loadParam);
		}

		::System::Void _LoadWithAssetCreatedAndNotLoad(::System::UInt32 assetOrBundleShortNameHash, ::Class_0_16E4307DCC419505_68* loadItem, ::Struct_2_710A4BB1F3B3A759 loadParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_68*, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET))(this, assetOrBundleShortNameHash, loadItem, loadParam);
		}

		::Class_0_16E4307DCC419505_68* _LoadWithAssetNotCreatedAndNotLoad(::System::UInt32 assetOrBundleShortNameHash, ::Struct_2_710A4BB1F3B3A759 loadParam, ::Class_0_16E4307DCC419505_67* provider)
		{
			return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::UInt32, ::Struct_2_710A4BB1F3B3A759, ::Class_0_16E4307DCC419505_67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET))(this, assetOrBundleShortNameHash, loadParam, provider);
		}

		::Class_0_16E4307DCC419505_68* LoadAssetByAssetOrBundleShortNameHash(::System::UInt32 assetOrBundleShortNameHash, ::Struct_2_710A4BB1F3B3A759 loadParam)
		{
			return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::UInt32, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, assetOrBundleShortNameHash, loadParam);
		}

		::Class_0_16E4307DCC419505_68* SyncLoadAsset(::System::String* assetShortName)
		{
			return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET))(this, assetShortName);
		}

		::System::Int64 _GetAlignSize(::System::Int64 len)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__GETALIGNSIZE_OFFSET))(this, len);
		}

		::System::String* SyncLoadTextFromFile(::System::String* assetShortName, ::System::Int64 offset, ::System::Int64 len)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADTEXTFROMFILE_OFFSET))(this, assetShortName, offset, len);
		}

		::Il2CppArray<::System::Byte>* _SyncLoadBytesFromFileImpl(::System::String* assetShortName, ::System::Int64 offset, ::System::Int64 len, ::System::Boolean isAlignSize)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__SYNCLOADBYTESFROMFILEIMPL_OFFSET))(this, assetShortName, offset, len, isAlignSize);
		}

		::Il2CppArray<::System::Byte>* SyncLoadBytesFromFile(::System::String* assetShortName, ::System::Int64 offset, ::System::Int64 len)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADBYTESFROMFILE_OFFSET))(this, assetShortName, offset, len);
		}

		::System::Void UnloadAssetByAssetShortName(::System::String* assetShortName, ::RPG::Client::OnAssetOperationDelegate* loadEventHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_OFFSET))(this, assetShortName, loadEventHandle);
		}

		::System::Void UnloadAssetByAssetShortName_1(::System::UInt32 assetShortNameHash, ::RPG::Client::OnAssetOperationDelegate* loadEventHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET))(this, assetShortNameHash, loadEventHandle);
		}

		::System::Void _UnloadAssetByAssetOrBundleShortNameHash(::System::UInt32 assetOrBundleShortNameHash, ::RPG::Client::OnAssetOperationDelegate* loadEventHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, assetOrBundleShortNameHash, loadEventHandle);
		}

		::System::Void UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadNoRefAsset(::System::UInt32 assetOrBundleShortNameHash)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET))(this, assetOrBundleShortNameHash);
		}
	};
}
