#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_DISPLAYITEMS_OFFSET UNITYSDK_OFFSET(0x184E94B0)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_REWARDGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x184E94A0)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_ROLLSHOPID_OFFSET UNITYSDK_OFFSET(0x184E9480)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS_GET_WALKNUM_OFFSET UNITYSDK_OFFSET(0x184E9490)
#define RPG_CLIENT_ROLLSHOPROLLINGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x184E94C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RollShopRollingParams_TypeDefinitionIndex = 64883;

	class RollShopRollingParams : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _DisplayItems_k__BackingField; // 0x10
		::System::Int32 _WalkNum_k__BackingField; // 0x18
		::System::UInt32 _RollShopID_k__BackingField; // 0x1C
		::System::UInt32 _RewardGroupType_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLLSHOPROLLINGPARAMS__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
