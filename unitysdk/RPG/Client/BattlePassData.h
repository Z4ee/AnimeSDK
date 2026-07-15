#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_16.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class BattlePassConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEPASSDATA_GETDISPLAYEQUIPCANREPEAT_OFFSET UNITYSDK_OFFSET(0x39564E0)
#define RPG_CLIENT_BATTLEPASSDATA_GETDISPLAYEQUIPNOTREPEATED_OFFSET UNITYSDK_OFFSET(0x39564F0)
#define RPG_CLIENT_BATTLEPASSDATA_GET_CANPURCHASE_OFFSET UNITYSDK_OFFSET(0x39565C0)
#define RPG_CLIENT_BATTLEPASSDATA_GET_DEFAULTLEVELMAXEXP_OFFSET UNITYSDK_OFFSET(0x3956560)
#define RPG_CLIENT_BATTLEPASSDATA_GET_HASPURCHASED_OFFSET UNITYSDK_OFFSET(0x3956610)
#define RPG_CLIENT_BATTLEPASSDATA_GET_ISEXPSPEEDUP_OFFSET UNITYSDK_OFFSET(0x3956500)
#define RPG_CLIENT_BATTLEPASSDATA_GET_ISPAIDREWARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x3956570)
#define RPG_CLIENT_BATTLEPASSDATA_GET_LEVELMAXEXP_OFFSET UNITYSDK_OFFSET(0x3956660)
#define RPG_CLIENT_BATTLEPASSDATA_GET_REFRESHBEGINWEEK_OFFSET UNITYSDK_OFFSET(0x3956680)
#define RPG_CLIENT_BATTLEPASSDATA_GET_WEEKMAXEXP_OFFSET UNITYSDK_OFFSET(0x3956670)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassData_TypeDefinitionIndex = 60111;

	struct alignas(8) BattlePassData
	{
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::BattlePassConfigRow* Row; // 0x18
		::System::UInt32 CurrentLevel; // 0x20
		::System::UInt32 LevelGainedExp; // 0x24
		::System::UInt32 WeekGainedExp; // 0x28
		::Enum_3_DB663931210BBC27_16 PurchaseType; // 0x2C

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
