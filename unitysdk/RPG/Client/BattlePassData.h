#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_25.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class BattlePassConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEPASSDATA_GETDISPLAYEQUIPCANREPEAT_OFFSET UNITYSDK_OFFSET(0xE2E40)
#define RPG_CLIENT_BATTLEPASSDATA_GETDISPLAYEQUIPNOTREPEATED_OFFSET UNITYSDK_OFFSET(0xE2E50)
#define RPG_CLIENT_BATTLEPASSDATA_GET_CANPURCHASE_OFFSET UNITYSDK_OFFSET(0xE2F20)
#define RPG_CLIENT_BATTLEPASSDATA_GET_DEFAULTLEVELMAXEXP_OFFSET UNITYSDK_OFFSET(0xE2EC0)
#define RPG_CLIENT_BATTLEPASSDATA_GET_HASPURCHASED_OFFSET UNITYSDK_OFFSET(0xE2F70)
#define RPG_CLIENT_BATTLEPASSDATA_GET_ISEXPSPEEDUP_OFFSET UNITYSDK_OFFSET(0xE2E60)
#define RPG_CLIENT_BATTLEPASSDATA_GET_ISPAIDREWARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE2ED0)
#define RPG_CLIENT_BATTLEPASSDATA_GET_LEVELMAXEXP_OFFSET UNITYSDK_OFFSET(0xE2FC0)
#define RPG_CLIENT_BATTLEPASSDATA_GET_REFRESHBEGINWEEK_OFFSET UNITYSDK_OFFSET(0xE2FE0)
#define RPG_CLIENT_BATTLEPASSDATA_GET_WEEKMAXEXP_OFFSET UNITYSDK_OFFSET(0xE2FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassData_TypeDefinitionIndex = 62890;

	struct alignas(8) BattlePassData
	{
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::BattlePassConfigRow* Row; // 0x18
		::System::UInt32 CurrentLevel; // 0x20
		::System::UInt32 LevelGainedExp; // 0x24
		::System::UInt32 WeekGainedExp; // 0x28
		::Enum_3_DB663931210BBC27_25 PurchaseType; // 0x2C

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayEquipCanRepeat()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GETDISPLAYEQUIPCANREPEAT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayEquipNotRepeated()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GETDISPLAYEQUIPNOTREPEATED_OFFSET))(this);
		}

		::System::Boolean get_IsExpSpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_ISEXPSPEEDUP_OFFSET))(this);
		}

		::System::UInt32 get_DefaultLevelMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_DEFAULTLEVELMAXEXP_OFFSET))(this);
		}

		::System::Boolean get_IsPaidRewardUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_ISPAIDREWARDUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_CanPurchase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_CANPURCHASE_OFFSET))(this);
		}

		::System::Boolean get_HasPurchased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_HASPURCHASED_OFFSET))(this);
		}

		::System::UInt32 get_LevelMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_LEVELMAXEXP_OFFSET))(this);
		}

		::System::UInt32 get_WeekMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_WEEKMAXEXP_OFFSET))(this);
		}

		::System::UInt32 get_RefreshBeginWeek()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSDATA_GET_REFRESHBEGINWEEK_OFFSET))(this);
		}
	};
}
