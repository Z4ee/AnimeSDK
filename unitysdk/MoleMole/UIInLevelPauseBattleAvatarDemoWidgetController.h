#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController.h"

class Class_1_1685EC66FBD28897;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1781F4C0)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1781FF10)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1781FF20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBattleAvatarDemoWidgetController_TypeDefinitionIndex = 61765;

	class UIInLevelPauseBattleAvatarDemoWidgetController : public ::MoleMole::UIInLevelPauseBattleInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* __base_RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEAVATARDEMOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}
	};
}
