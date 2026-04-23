#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class UserPrefs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS5_0__CHECKRECIPEHINTS_B__0_OFFSET UNITYSDK_OFFSET(0xA240250)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS5_0__CHECKRECIPEHINTS_B__1_OFFSET UNITYSDK_OFFSET(0xA240430)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA23F750)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass5_0_TypeDefinitionIndex = 58696;

	class ElfHintToastManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::ElfRestaurantProgressData* currentProgressData; // 0x10
		::RPG::Client::UserPrefs* userPrefs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUndevelopedRecipeIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckRecipeHints_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS5_0__CHECKRECIPEHINTS_B__0_OFFSET))(this);
		}

		::System::Void _CheckRecipeHints_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS5_0__CHECKRECIPEHINTS_B__1_OFFSET))(this);
		}
	};
}
