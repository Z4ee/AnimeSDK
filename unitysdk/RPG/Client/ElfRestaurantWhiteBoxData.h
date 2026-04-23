#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameSwitcherStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PeriodConfig; }
namespace RPG::Client { class ProgressConfig; }
namespace RPG::Client { class RecipeConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTWHITEBOXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA27A560)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantWhiteBoxData_TypeDefinitionIndex = 67013;

	class ElfRestaurantWhiteBoxData : public ::System::Object
	{
	public:
		::System::Int32 DailyThumRecord; // 0x10
		::System::Int32 TotalThumRecord; // 0x14
		::System::Int32 CurrentGold; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RecipeConfig*>* DailyRecipe; // 0x20
		::RPG::Client::ProgressConfig* CurrentProgress; // 0x28
		::System::Int32 CurrentCustomer; // 0x30
		::RPG::Client::PeriodConfig* CurrentPeriodconfig; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* RecipeLevelDict; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BackpackItemDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* UpgradeLevelDict; // 0x50
		::RPG::Client::GameSwitcherStatus GameSwitcherstatus; // 0x58
		::System::Int32 DailyThumb; // 0x5C
		::System::Int32 GoldEarned; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* UsedItemDict; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTWHITEBOXDATA__CTOR_OFFSET))(this);
		}
	};
}
