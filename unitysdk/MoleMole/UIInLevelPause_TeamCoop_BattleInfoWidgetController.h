#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityTeamTrialInLevelPauseBattleWidgetController.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityTrickPauseContext; }
namespace MoleMole { class UIActivityTrickPauseWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_GETBINDMODULES_OFFSET UNITYSDK_OFFSET(0x164E8190)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET UNITYSDK_OFFSET(0x164E8520)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x164E7B70)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_REFRESHSCOREINFO_OFFSET UNITYSDK_OFFSET(0x164E7BE0)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_REFRESHTRICK_OFFSET UNITYSDK_OFFSET(0x164E8080)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164E8A40)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER___BASE_GETBINDMODULES_OFFSET UNITYSDK_OFFSET(0x164E8A50)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER___BASE_GETNESTEDLISTDELEGATEGOLIST_OFFSET UNITYSDK_OFFSET(0x164E8AE0)
#define MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER___BASE_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x164E8B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPause_TeamCoop_BattleInfoWidgetController_TypeDefinitionIndex = 57556;

	class UIInLevelPause_TeamCoop_BattleInfoWidgetController : public ::MoleMole::UIActivityTeamTrialInLevelPauseBattleWidgetController
	{
	public:
		::MoleMole::UIActivityTrickPauseWidgetController* _scoreInfoWidgetController; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_REFRESHDETAIL_OFFSET))(this);
		}

		::System::Void RefreshScoreInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_REFRESHSCOREINFO_OFFSET))(this);
		}

		::System::Void RefreshTrick(::MoleMole::UIActivityTrickPauseContext* pauseContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityTrickPauseContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_REFRESHTRICK_OFFSET))(this, pauseContext);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* GetBindModules()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_GETBINDMODULES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetNestedListDelegateGoList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* __base_GetBindModules()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER___BASE_GETBINDMODULES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __base_GetNestedListDelegateGoList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER___BASE_GETNESTEDLISTDELEGATEGOLIST_OFFSET))(this);
		}

		::System::Void __base_RefreshDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_TEAMCOOP_BATTLEINFOWIDGETCONTROLLER___BASE_REFRESHDETAIL_OFFSET))(this);
		}
	};
}
