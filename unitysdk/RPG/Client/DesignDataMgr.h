#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/Struct_2_710A4BB1F3B3A759.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_85;
class Class_0_16E4307DCC419505_86;
class Class_1_F0F5FC8CD22F7E83;
class Class_1_FF343A54D15F6E7D;
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::AssetSystem { template <typename T> class AssetOperationCache_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_DESIGNDATAMGR_CANLOADLOCALDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x1BFD17D0)
#define RPG_CLIENT_DESIGNDATAMGR_CANLOADSERVERDESIGNDATABUNDLE_OFFSET UNITYSDK_OFFSET(0x1BFD1700)
#define RPG_CLIENT_DESIGNDATAMGR_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1BFD2610)
#define RPG_CLIENT_DESIGNDATAMGR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BFD2030)
#define RPG_CLIENT_DESIGNDATAMGR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BFD1BC0)
#define RPG_CLIENT_DESIGNDATAMGR_EXISTS_OFFSET UNITYSDK_OFFSET(0x1BFD2700)
#define RPG_CLIENT_DESIGNDATAMGR_INITPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BFD1A10)
#define RPG_CLIENT_DESIGNDATAMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1BFD19C0)
#define RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1BFD30E0)
#define RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET UNITYSDK_OFFSET(0x1BFD21A0)
#define RPG_CLIENT_DESIGNDATAMGR_RELOADDESIGNDATAPROVIDERIFSTALE_OFFSET UNITYSDK_OFFSET(0x1BFD2680)
#define RPG_CLIENT_DESIGNDATAMGR_SETFILEVISITORPOSMODE_OFFSET UNITYSDK_OFFSET(0x1BFD1FE0)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x1BFD31F0)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADBYTESFROMFILE_OFFSET UNITYSDK_OFFSET(0x1BFD4370)
#define RPG_CLIENT_DESIGNDATAMGR_SYNCLOADTEXTFROMFILE_OFFSET UNITYSDK_OFFSET(0x1BFD3570)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x1BFD4D50)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET UNITYSDK_OFFSET(0x1BFD3BD0)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_2_OFFSET UNITYSDK_OFFSET(0x1BFD4540)
#define RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x1BFD43E0)
#define RPG_CLIENT_DESIGNDATAMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFD4DA0)
#define RPG_CLIENT_DESIGNDATAMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD1830)
#define RPG_CLIENT_DESIGNDATAMGR__GETALIGNSIZE_OFFSET UNITYSDK_OFFSET(0x1BFD3500)
#define RPG_CLIENT_DESIGNDATAMGR__INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BFD2320)
#define RPG_CLIENT_DESIGNDATAMGR__INITDATADESIGNBUNDLEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BFD2210)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET UNITYSDK_OFFSET(0x1BFD2840)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1BFD29C0)
#define RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1BFD2F50)
#define RPG_CLIENT_DESIGNDATAMGR__SYNCLOADBYTESFROMFILEIMPL_OFFSET UNITYSDK_OFFSET(0x1BFD3D20)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET UNITYSDK_OFFSET(0x1BFD1D20)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_1_OFFSET UNITYSDK_OFFSET(0x1BFD4CD0)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1BFD45C0)
#define RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET UNITYSDK_OFFSET(0x1BFD4A30)

namespace RPG::Client
{
	inline static constexpr unsigned int DesignDataMgr_TypeDefinitionIndex = 40133;

	class DesignDataMgr : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__SyncLoadAssetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(DesignDataMgr_TypeDefinitionIndex)->GetStaticField(0x1100);
		}
		::Class_1_FF343A54D15F6E7D* _ByteArrayCache; // 0x10
		::Class_0_16E4307DCC419505_85* DesignDataProvider; // 0x18
		::Struct_2_710A4BB1F3B3A759 _LoadParam; // 0x20
		::RPG::Client::AssetSystem::AssetOperationCache_1<::Class_0_16E4307DCC419505_86*>* AssetCache; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::DesignDataShortNameHash, ::Class_0_16E4307DCC419505_86*>* AssetOrBundleShortNameHash2LoadItemDic; // 0x48
		::System::String* _MiniInfoLocalRelativeFilePath; // 0x50
		::System::String* _LocalRelativeFilePathNoExt; // 0x58
		::Class_1_F0F5FC8CD22F7E83* _MiniVersion; // 0x60
		::System::Object* _LoadItemLock; // 0x68
		::System::Int64 _ByteArrayAlignByte; // 0x70
		::System::Boolean _IsEnableLog; // 0x78
		::System::Boolean _IsEnableFileStreamCache; // 0x79
		::RPG::Client::FileVisitorPosMode _FileVisitorPosMode; // 0x7C

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

		::System::Void PutCache(::Class_0_16E4307DCC419505_86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_PUTCACHE_OFFSET))(this, a1);
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

		::Class_0_16E4307DCC419505_86* _LoadWithAssetCreatedAndLoad(::Class_0_16E4307DCC419505_86* a1, ::Struct_2_710A4BB1F3B3A759 a2)
		{
			return ((::Class_0_16E4307DCC419505_86*(*)(::PVOID, ::Class_0_16E4307DCC419505_86*, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadWithAssetCreatedAndNotLoad(::RPG::Client::DesignDataShortNameHash a1, ::Class_0_16E4307DCC419505_86* a2, ::Struct_2_710A4BB1F3B3A759 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::Class_0_16E4307DCC419505_86*, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETCREATEDANDNOTLOAD_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_86* _LoadWithAssetNotCreatedAndNotLoad(::RPG::Client::DesignDataShortNameHash a1, ::Struct_2_710A4BB1F3B3A759 a2, ::Class_0_16E4307DCC419505_85* a3)
		{
			return ((::Class_0_16E4307DCC419505_86*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::Struct_2_710A4BB1F3B3A759, ::Class_0_16E4307DCC419505_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__LOADWITHASSETNOTCREATEDANDNOTLOAD_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_86* LoadAssetByAssetOrBundleShortNameHash(::RPG::Client::DesignDataShortNameHash a1, ::Struct_2_710A4BB1F3B3A759 a2)
		{
			return ((::Class_0_16E4307DCC419505_86*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::Struct_2_710A4BB1F3B3A759))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_LOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_86* SyncLoadAsset(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_86*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_SYNCLOADASSET_OFFSET))(this, a1);
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

		::System::Void UnloadAssetByAssetShortName_1(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAssetByAssetShortName_2(::System::UInt32 a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADASSETBYASSETSHORTNAME_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UnloadAssetByAssetOrBundleShortNameHash(::RPG::Client::DesignDataShortNameHash a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UnloadAssetByAssetOrBundleShortNameHash_1(::System::UInt32 a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::OnAssetOperationDelegate*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADASSETBYASSETORBUNDLESHORTNAMEHASH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR_UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadAllLoadItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADALLLOADITEM_OFFSET))(this);
		}

		::System::Void _UnloadNoRefAsset(::RPG::Client::DesignDataShortNameHash a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash))((::PBYTE)hIl2Cpp + RPG_CLIENT_DESIGNDATAMGR__UNLOADNOREFASSET_OFFSET))(this, a1);
		}
	};
}
