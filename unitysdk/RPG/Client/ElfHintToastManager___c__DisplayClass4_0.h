#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class UserPrefs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xB8C5640)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__1_OFFSET UNITYSDK_OFFSET(0xB8C57E0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__2_OFFSET UNITYSDK_OFFSET(0xB8C5980)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C5040)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass4_0_TypeDefinitionIndex = 59625;

	class ElfHintToastManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUnpurchasedTableIDs; // 0x10
		::RPG::Client::UserPrefs* userPrefs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUnpurchasedDecoratorIDs; // 0x20
		::RPG::Client::ElfRestaurantProgressData* currentProgressData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckRestaurantUpgradeHints_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__0_OFFSET))(this);
		}

		::System::Void _CheckRestaurantUpgradeHints_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__1_OFFSET))(this);
		}

		::System::Void _CheckRestaurantUpgradeHints_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__2_OFFSET))(this);
		}
	};
}
