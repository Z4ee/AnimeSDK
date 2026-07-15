#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEBATTLEITEMINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1AABB4D0)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AABBB30)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO_GETBATTLEITEMDATAITEM_OFFSET UNITYSDK_OFFSET(0x1AABBBA0)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO_GET_BATTLEITEMLIST_OFFSET UNITYSDK_OFFSET(0x1AABBC50)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AABB680)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AABB5E0)
#define RPG_CLIENT_CAKERACEBATTLEITEMINFO__INITBATTLEITEMDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1AABB6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemInfo_TypeDefinitionIndex = 60218;

	class CakeRaceBattleItemInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceBattleItemDataItem*>* _BattleItems; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>* _BattleItemList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceBattleItemInfo* Create()
		{
			return ((::RPG::Client::CakeRaceBattleItemInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::CakeRaceBattleItemDataItem* GetBattleItemDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceBattleItemDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO_GETBATTLEITEMDATAITEM_OFFSET))(this, a1);
		}

		::System::Void _InitBattleItemDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO__INITBATTLEITEMDATAITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>* get_BattleItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMINFO_GET_BATTLEITEMLIST_OFFSET))(this);
		}
	};
}
