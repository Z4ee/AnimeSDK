#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UserPrefs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS2_0__CHECKFARMHINTS_B__0_OFFSET UNITYSDK_OFFSET(0x18E3A810)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS2_0__CHECKFARMHINTS_B__1_OFFSET UNITYSDK_OFFSET(0x18E3A9B0)
#define RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3A600)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfHintToastManager___c__DisplayClass2_0_TypeDefinitionIndex = 60908;

	class ElfHintToastManager___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::UserPrefs* userPrefs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedUnpurchasedFieldIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* unlockedSeedIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckFarmHints_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS2_0__CHECKFARMHINTS_B__0_OFFSET))(this);
		}

		::System::Void _CheckFarmHints_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFHINTTOASTMANAGER___C__DISPLAYCLASS2_0__CHECKFARMHINTS_B__1_OFFSET))(this);
		}
	};
}
