#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C57FA0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__0_OFFSET UNITYSDK_OFFSET(0x18C58390)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__1_OFFSET UNITYSDK_OFFSET(0x18C584B0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__2_OFFSET UNITYSDK_OFFSET(0x18C57FB0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__3_OFFSET UNITYSDK_OFFSET(0x18C58040)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__4_OFFSET UNITYSDK_OFFSET(0x18C581A0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__5_OFFSET UNITYSDK_OFFSET(0x18C58230)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass150_0_TypeDefinitionIndex = 75062;

	class UIActivityHotpotInGamePageController___c__DisplayClass150_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseDialogPopWindowController* popWindowController; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x18
		::System::Action* __9__5; // 0x20
		::System::Action* __9__3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseOrResumeGame_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__2_OFFSET))(this);
		}

		::System::Void _PauseOrResumeGame_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__3_OFFSET))(this);
		}

		::System::Void _PauseOrResumeGame_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__4_OFFSET))(this);
		}

		::System::Void _PauseOrResumeGame_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__5_OFFSET))(this);
		}

		::System::Void _PauseOrResumeGame_b__0(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* settingDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__0_OFFSET))(this, settingDict);
		}

		::System::Void _PauseOrResumeGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS150_0__PAUSEORRESUMEGAME_B__1_OFFSET))(this);
		}
	};
}
