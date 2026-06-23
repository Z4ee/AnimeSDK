#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController.h"

class Class_1_1685EC66FBD28897;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BC6520)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x17BC66C0)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC6C90)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BC6CA0)
#define MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x17BC6CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerBattleInfoWidgetController_TypeDefinitionIndex = 65335;

	class UITriggerBattleInfoWidgetController : public ::MoleMole::UIInLevelPauseBattleInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* __base_RefreshShowRewardList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERBATTLEINFOWIDGETCONTROLLER___BASE_REFRESHSHOWREWARDLIST_OFFSET))(this);
		}
	};
}
