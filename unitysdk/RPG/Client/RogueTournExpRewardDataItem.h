#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class RogueTournExpRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA38F820)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GETREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xA38FC40)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA38FD50)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xA38FCC0)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA38F5E0)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_REQUIREDEXP_OFFSET UNITYSDK_OFFSET(0xA38F880)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA38FD60)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA38EE30)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA38FC30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExpRewardDataItem_TypeDefinitionIndex = 55367;

	class RogueTournExpRewardDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x10
		::RPG::GameCore::RogueTournExpRewardRow* _Row; // 0x18
		::System::Boolean _IsRewardTaken_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::RogueTournExpRewardRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournExpRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM__CTOR_OFFSET))(this, row);
		}

		static ::RPG::Client::RogueTournExpRewardDataItem* Create(::RPG::GameCore::RogueTournExpRewardRow* row)
		{
			return ((::RPG::Client::RogueTournExpRewardDataItem*(*)(::RPG::GameCore::RogueTournExpRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_CREATE_OFFSET))(row);
		}

		::System::Void Sync(::System::Boolean isRewardTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_SYNC_OFFSET))(this, isRewardTaken);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GETREWARDITEMS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_RequiredExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_REQUIREDEXP_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_SET_ISREWARDTAKEN_OFFSET))(this, value);
		}
	};
}
