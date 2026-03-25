#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_DISPLAYITEMS_OFFSET UNITYSDK_OFFSET(0xA3F8360)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_REWARDGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xA3F8350)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_ROLLSHOPID_OFFSET UNITYSDK_OFFSET(0xA3F8330)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_WALKNUM_OFFSET UNITYSDK_OFFSET(0xA3F8340)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F8370)

namespace RPG::Client
{
	inline static constexpr unsigned int RollShopRollingParams_TypeDefinitionIndex = 55392;

	class RollShopRollingParams : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _DisplayItems_k__BackingField; // 0x10
		::System::Int32 _WalkNum_k__BackingField; // 0x18
		::System::UInt32 _RewardGroupType_k__BackingField; // 0x1C
		::System::UInt32 _RollShopID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 rollShopID, ::System::Int32 walkNum, ::System::UInt32 rewardGroupType, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* displayItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPROLLINGPARAMS__CTOR_OFFSET))(this, rollShopID, walkNum, rewardGroupType, displayItems);
		}

		::System::UInt32 get_RollShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_ROLLSHOPID_OFFSET))(this);
		}

		::System::Int32 get_WalkNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_WALKNUM_OFFSET))(this);
		}

		::System::UInt32 get_RewardGroupType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_REWARDGROUPTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_DisplayItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_DISPLAYITEMS_OFFSET))(this);
		}
	};
}
