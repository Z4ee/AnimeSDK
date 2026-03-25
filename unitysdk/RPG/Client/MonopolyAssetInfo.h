#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_47;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class MonopolyAssetDataItem; }
namespace RPG::GameCore { class MonopolyAreaAssetConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYASSETINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D50610)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETAREAASSETDISPLAYPARAM_OFFSET UNITYSDK_OFFSET(0x9D51640)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETAREACONFIGS_OFFSET UNITYSDK_OFFSET(0x9D512D0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETAREATOTALPROFITS_OFFSET UNITYSDK_OFFSET(0x9D51420)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETASSETLIST_OFFSET UNITYSDK_OFFSET(0x9D50EA0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETASSETNUMBYLEVEL_OFFSET UNITYSDK_OFFSET(0x9D511A0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETCURACTIONPROFIT_OFFSET UNITYSDK_OFFSET(0x9D50F40)
#define RPG_CLIENT_MONOPOLYASSETINFO_GETTOTALASSETPROFITS_OFFSET UNITYSDK_OFFSET(0x9D51840)
#define RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETOWNEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9D51B30)
#define RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETSDICT_OFFSET UNITYSDK_OFFSET(0x9D51AB0)
#define RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9D51AD0)
#define RPG_CLIENT_MONOPOLYASSETINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9D503A0)
#define RPG_CLIENT_MONOPOLYASSETINFO_ISAREAUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9D519A0)
#define RPG_CLIENT_MONOPOLYASSETINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0x9D50A80)
#define RPG_CLIENT_MONOPOLYASSETINFO_SET_ASSETSDICT_OFFSET UNITYSDK_OFFSET(0x9D51AC0)
#define RPG_CLIENT_MONOPOLYASSETINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9D506C0)
#define RPG_CLIENT_MONOPOLYASSETINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0x9D505D0)
#define RPG_CLIENT_MONOPOLYASSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D51C90)
#define RPG_CLIENT_MONOPOLYASSETINFO__MODIFYASSETLEVEL_OFFSET UNITYSDK_OFFSET(0x9D50D60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyAssetInfo_TypeDefinitionIndex = 53827;

	class MonopolyAssetInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>* _AssetsDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyAssetDataItem*>* _AssetList; // 0x18

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

		::System::Void Sync(::Class_1_E7C4009BCC22497A_47* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_SYNC_OFFSET))(this, info);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_MODIFY_OFFSET))(this, result);
		}

		::System::Void _ModifyAssetLevel(::System::UInt32 assetID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO__MODIFYASSETLEVEL_OFFSET))(this, assetID, level);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyAssetDataItem*>* GetAssetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyAssetDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETASSETLIST_OFFSET))(this);
		}

		::System::UInt32 GetCurActionProfit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETCURACTIONPROFIT_OFFSET))(this);
		}

		::System::UInt32 GetAssetNumByLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETASSETNUMBYLEVEL_OFFSET))(this, level);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonopolyAreaAssetConfigRow*>* GetAreaConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonopolyAreaAssetConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETAREACONFIGS_OFFSET))(this);
		}

		::System::UInt32 GetAreaTotalProfits(::RPG::GameCore::MonopolyAreaAssetConfigRow* row)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MonopolyAreaAssetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETAREATOTALPROFITS_OFFSET))(this, row);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAreaAssetDisplayParam(::RPG::GameCore::MonopolyAreaAssetConfigRow* row)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::MonopolyAreaAssetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETAREAASSETDISPLAYPARAM_OFFSET))(this, row);
		}

		::System::UInt32 GetTotalAssetProfits()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GETTOTALASSETPROFITS_OFFSET))(this);
		}

		::System::Boolean IsAreaUnlocked(::RPG::GameCore::MonopolyAreaAssetConfigRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonopolyAreaAssetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_ISAREAUNLOCKED_OFFSET))(this, row);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>* get_AssetsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_GET_ASSETSDICT_OFFSET))(this);
		}

		::System::Void set_AssetsDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyAssetDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETINFO_SET_ASSETSDICT_OFFSET))(this, value);
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
