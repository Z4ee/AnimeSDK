#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class FateRinDeckEditViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A35B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___C__DISPLAYCLASS2_0___DOSAVEDECKSANDEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x1B4A3810)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___C__DISPLAYCLASS2_0___DOSAVEDECKSANDEXIT_B__1_OFFSET UNITYSDK_OFFSET(0x1B4A38E0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinDeckEditViewModel___c__DisplayClass2_0_TypeDefinitionIndex = 76204;

	class FateRinDeckEditViewModel___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* toastStrings; // 0x10
		::RPG::Client::FateRin::Card::FateRinDeckEditViewModel* __4__this; // 0x18
		::System::UInt32 saveBlockUID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoSaveDecksAndExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___C__DISPLAYCLASS2_0___DOSAVEDECKSANDEXIT_B__0_OFFSET))(this);
		}

		::System::Void __DoSaveDecksAndExit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITVIEWMODEL___C__DISPLAYCLASS2_0___DOSAVEDECKSANDEXIT_B__1_OFFSET))(this);
		}
	};
}
