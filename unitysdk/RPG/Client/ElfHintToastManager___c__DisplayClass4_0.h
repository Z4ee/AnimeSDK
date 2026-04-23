#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class UserPrefs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xA23FE00)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__1_OFFSET UNITYSDK_OFFSET(0xA23FFE0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CHECKRESTAURANTUPGRADEHINTS_B__2_OFFSET UNITYSDK_OFFSET(0xA2401C0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA23F740)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass4_0_TypeDefinitionIndex = 58695;

	class ElfHintToastManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::UserPrefs* userPrefs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUnpurchasedDecoratorIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUnpurchasedTableIDs; // 0x20
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
