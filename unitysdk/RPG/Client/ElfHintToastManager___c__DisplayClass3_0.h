#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class UserPrefs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3A610)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0___CHECKEMPLOYEEMANAGEHINTS_B__0_OFFSET UNITYSDK_OFFSET(0x18E3AB50)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0___CHECKEMPLOYEEMANAGEHINTS_B__1_OFFSET UNITYSDK_OFFSET(0x18E3ACF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass3_0_TypeDefinitionIndex = 60909;

	class ElfHintToastManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::UserPrefs* userPrefs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUndevelopedEmployeeIDs; // 0x18
		::RPG::Client::ElfRestaurantProgressData* currentProgressData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __CheckEmployeeManageHints_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0___CHECKEMPLOYEEMANAGEHINTS_B__0_OFFSET))(this);
		}

		::System::Void __CheckEmployeeManageHints_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0___CHECKEMPLOYEEMANAGEHINTS_B__1_OFFSET))(this);
		}
	};
}
