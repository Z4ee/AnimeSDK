#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/Struct_2_710A4BB1F3B3A759.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_66;
class Class_0_16E4307DCC419505_67;
class Class_1_F0F5FC8CD22F7E83;
class Class_1_FF343A54D15F6E7D;
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::AssetSystem { template <typename T> class AssetOperationCache_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DESIGNDATAMGR_CANLOADLOCALDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x1892F210)
#define RPG_CLIENT_DESIGNDATAMGR_CANLOADSERVERDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x1892F140)
#define RPG_CLIENT_DESIGNDATAMGR_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1892FEB0)
#define RPG_CLIENT_DESIGNDATAMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1892F970)
#define RPG_CLIENT_DESIGNDATAMGR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1892F550)
#define RPG_CLIENT_DESIGNDATAMGR_EXISTS_OFFSET UNITYSDK_OFFSET(0x1892FFA0)
#define RPG_CLIENT_DESIGNDATAMGR_INITPROVIDER_OFFSET UNITYSDK_OFFSET(0x1892F450)
#define RPG_CLIENT_DESIGNDATAMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1892F400)
#define RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x18930720)
#define RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET UNITYSDK_OFFSET(0x1892FA90)
#define RPG_CLIENT_DESIGNDATAMGR_RELOADDESIGNDATAPROVIDERIFSTALE_OFFSET UNITYSDK_OFFSET(0x1892FF20)
#define RPG_CLIENT_DESIGNDATAMGR_SETFILEVISITORPOSMODE_OFFSET UNITYSDK_OFFSET(0x1892F920)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x18930830)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADBYTESFROMFILE_OFFSET UNITYSDK_OFFSET(0x18931680)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADTEXTFROMFILE_OFFSET UNITYSDK_OFFSET(0x18930B80)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x18931D30)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET UNITYSDK_OFFSET(0x18931080)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x189316F0)
#define RPG_CLIENT_DESIGNDATAMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18931D80)
#define RPG_CLIENT_DESIGNDATAMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1892F270)
#define RPG_CLIENT_DESIGNDATAMGR__GETALIGNSIZE_OFFSET UNITYSDK_OFFSET(0x18930B10)
#define RPG_CLIENT_DESIGNDATAMGR__INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1892FC10)
#define RPG_CLIENT_DESIGNDATAMGR__INITDATADESIGNBUNDLEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1892FB00)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET UNITYSDK_OFFSET(0x18930090)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x189301D0)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x189305E0)
#define RPG_CLIENT_DESIGNDATAMGR__SYNCLOADBYTESFROMFILEIMPL_OFFSET UNITYSDK_OFFSET(0x18931190)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x1892F660)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x189317D0)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET UNITYSDK_OFFSET(0x18931B40)

namespace RPG::Client
{
	inline static constexpr unsigned int DesignDataMgr_TypeDefinitionIndex = 38452;

	class DesignDataMgr : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__SyncLoadAssetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(DesignDataMgr_TypeDefinitionIndex)->GetStaticField(0x1220);
		}
		::Class_1_FF343A54D15F6E7D* _ByteArrayCache; // 0x10
		::Class_0_16E4307DCC419505_66* DesignDataProvider; // 0x18
		::RPG::Client::AssetSystem::AssetOperationCache_1<::Class_0_16E4307DCC419505_67*>* AssetCache; // 0x20
		::Struct_2_710A4BB1F3B3A759 _LoadParam; // 0x28
		::System::String* _MiniInfoLocalRelativeFilePath; // 0x48
		::Class_1_F0F5FC8CD22F7E83* _MiniVersion; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_67*>* AssetOrBundleShortNameHash2LoadItemDic; // 0x58
		::System::String* _LocalRelativeFilePathNoExt; // 0x60
		::System::Object* _LoadItemLock; // 0x68
		::System::Int64 _ByteArrayAlignByte; // 0x70
		::RPG::Client::FileVisitorPosMode _FileVisitorPosMode; // 0x78
		::System::Boolean _IsEnableFileStreamCache; // 0x7C
		::System::Boolean _IsEnableLog; // 0x7D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__CCTOR_OFFSET))();
		}

		static ::System::Boolean CanLoadServerDesignDataBundle(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CANLOADSERVERDESIGNDATABUNDLE_OFFSET))(a1);
		}

		static ::System::Boolean CanLoadLocalDesignDataBundle(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CANLOADLOCALDESIGNDATABUNDLE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFileVisitorPosMode(::RPG::Client::FileVisitorPosMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FileVisitorPosMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SETFILEVISITORPOSMODE_OFFSET))(this, a1);
		}

		::System::Void InitProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_INITPROVIDER_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_CLEAR_OFFSET))(this);
		}

		::System::Void PutCache(::Class_0_16E4307DCC419505_67* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET))(this, a1);
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

		::System::Boolean ReloadDesignDataProviderIfStale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_RELOADDESIGNDATAPROVIDERIFSTALE_OFFSET))(this);
		}

		::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_EXISTS_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_67* _LoadWithAssetCreatedAndLoad(::Class_0_16E4307DCC419505_67* a1, ::Struct_2_710A4BB1F3B3A759 a2)
		{
			return ((::Class_0_16E4307DCC419505_67*(*)(::PVOID, ::Class_0_16E4307DCC419505_67*, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadWithAssetCreatedAndNotLoad(::System::UInt32 a1, ::Class_0_16E4307DCC419505_67* a2, ::Struct_2_710A4BB1F3B3A759 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_67*, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_67* _LoadWithAssetNotCreatedAndNotLoad(::System::UInt32 a1, ::Struct_2_710A4BB1F3B3A759 a2, ::Class_0_16E4307DCC419505_66* a3)
		{
			return ((::Class_0_16E4307DCC419505_67*(*)(::PVOID, ::System::UInt32, ::Struct_2_710A4BB1F3B3A759, ::Class_0_16E4307DCC419505_66*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_67* LoadAssetByAssetOrBundleShortNameHash(::System::UInt32 a1, ::Struct_2_710A4BB1F3B3A759 a2)
		{
			return ((::Class_0_16E4307DCC419505_67*(*)(::PVOID, ::System::UInt32, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_67* SyncLoadAsset(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_67*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET))(this, a1);
		}

		::System::Int64 _GetAlignSize(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__GETALIGNSIZE_OFFSET))(this, a1);
		}

		::System::String* SyncLoadTextFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADTEXTFROMFILE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* _SyncLoadBytesFromFileImpl(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3, ::System::Boolean a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__SYNCLOADBYTESFROMFILEIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Byte>* SyncLoadBytesFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADBYTESFROMFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAssetByAssetShortName(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAssetByAssetShortName_1(::System::UInt32 a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UnloadAssetByAssetOrBundleShortNameHash(::System::UInt32 a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadNoRefAsset(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET))(this, a1);
		}
	};
}
