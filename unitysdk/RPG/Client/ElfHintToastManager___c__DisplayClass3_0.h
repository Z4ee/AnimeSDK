#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::Client { class UserPrefs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95B9020)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0___CHECKEMPLOYEEMANAGEHINTS_B__0_OFFSET UNITYSDK_OFFSET(0x95B9480)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS3_0___CHECKEMPLOYEEMANAGEHINTS_B__1_OFFSET UNITYSDK_OFFSET(0x95B9660)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass3_0_TypeDefinitionIndex = 51746;

	class ElfHintToastManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUndevelopedEmployeeIDs; // 0x10
		::RPG::Client::UserPrefs* userPrefs; // 0x18
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
