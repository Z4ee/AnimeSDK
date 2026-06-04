#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_59;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class MonopolyAssetDataItem; }
namespace RPG::GameCore { class MonopolyAreaAssetConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYASSETINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1622B0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETAREAASSETDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0xC163450)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETAREACONFIGS_OFFSET UNITYSDK_OFFSET(0xC162F80)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETAREATOTALPROFITS_OFFSET UNITYSDK_OFFSET(0xC1631C0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETASSETLIST_OFFSET UNITYSDK_OFFSET(0xC162AD0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETASSETNUMBYLEVEL_OFFSET UNITYSDK_OFFSET(0xC162E60)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETCURACTIONPROFIT_OFFSET UNITYSDK_OFFSET(0xC162C10)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETTOTALASSETPROFITS_OFFSET UNITYSDK_OFFSET(0xC163700)
#define RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETOWNEDCOUNT_OFFSET UNITYSDK_OFFSET(0xC163A20)
#define RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETSDICT_OFFSET UNITYSDK_OFFSET(0xC1639A0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC1639C0)
#define RPG_CLIENT_MONOPOLYASSETINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC162010)
#define RPG_CLIENT_MONOPOLYASSETINFO_ISAREAUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC163850)
#define RPG_CLIENT_MONOPOLYASSETINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0xC1626B0)
#define RPG_CLIENT_MONOPOLYASSETINFO_SET_ASSETSDICT_OFFSET UNITYSDK_OFFSET(0xC1639B0)
#define RPG_CLIENT_MONOPOLYASSETINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC162350)
#define RPG_CLIENT_MONOPOLYASSETINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xC162270)
#define RPG_CLIENT_MONOPOLYASSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC163B60)
#define RPG_CLIENT_MONOPOLYASSETINFO__MODIFYASSETLEVEL_OFFSET UNITYSDK_OFFSET(0xC1629D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyAssetInfo_TypeDefinitionIndex = 61905;

	class MonopolyAssetInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyAssetDataItem*>* _AssetList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>* _AssetsDict_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_MODIFY_OFFSET))(this, a1);
		}

		::System::Void _ModifyAssetLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO__MODIFYASSETLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyAssetDataItem*>* GetAssetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyAssetDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETASSETLIST_OFFSET))(this);
		}

		::System::UInt32 GetCurActionProfit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETCURACTIONPROFIT_OFFSET))(this);
		}

		::System::UInt32 GetAssetNumByLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETASSETNUMBYLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonopolyAreaAssetConfigRow*>* GetAreaConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonopolyAreaAssetConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETAREACONFIGS_OFFSET))(this);
		}

		::System::UInt32 GetAreaTotalProfits(::RPG::GameCore::MonopolyAreaAssetConfigRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MonopolyAreaAssetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETAREATOTALPROFITS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAreaAssetDisplayParam(::RPG::GameCore::MonopolyAreaAssetConfigRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::MonopolyAreaAssetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETAREAASSETDISPLAYPARAM_OFFSET))(this, a1);
		}

		::System::UInt32 GetTotalAssetProfits()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETTOTALASSETPROFITS_OFFSET))(this);
		}

		::System::Boolean IsAreaUnlocked(::RPG::GameCore::MonopolyAreaAssetConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonopolyAreaAssetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_ISAREAUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>* get_AssetsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETSDICT_OFFSET))(this);
		}

		::System::Void set_AssetsDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_SET_ASSETSDICT_OFFSET))(this, a1);
		}

		::System::Int32 get_AssetTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETTOTALCOUNT_OFFSET))(this);
		}

		::System::Int32 get_AssetOwnedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETOWNEDCOUNT_OFFSET))(this);
		}
	};
}
