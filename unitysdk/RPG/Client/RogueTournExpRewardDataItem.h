#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class RogueTournExpRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xB0C6A30)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GETREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xB0C6E50)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB0C6F60)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xB0C6ED0)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB09C930)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_GET_REQUIREDEXP_OFFSET UNITYSDK_OFFSET(0xB0C6A90)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_SET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB0C6F70)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xB0C6280)
#define RPG_CLIENT_ROGUETOURNEXPREWARDDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C6E40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExpRewardDataItem_TypeDefinitionIndex = 62558;

	class RogueTournExpRewardDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournExpRewardRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems; // 0x18
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
