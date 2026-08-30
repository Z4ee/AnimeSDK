#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLLSHOPREWARDGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0xDFD68C0)
#define RPG_CLIENT_ROLLSHOPREWARDGROUP_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xDFD68E0)
#define RPG_CLIENT_ROLLSHOPREWARDGROUP_GET_REWARDIDS_OFFSET UNITYSDK_OFFSET(0xDFD68D0)
#define RPG_CLIENT_ROLLSHOPREWARDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD5AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RollShopRewardGroup_TypeDefinitionIndex = 67889;

	class RollShopRewardGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* _Items_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RewardIDs_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPREWARDGROUP__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPREWARDGROUP_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RewardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPREWARDGROUP_GET_REWARDIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPREWARDGROUP_GET_ITEMS_OFFSET))(this);
		}
	};
}
