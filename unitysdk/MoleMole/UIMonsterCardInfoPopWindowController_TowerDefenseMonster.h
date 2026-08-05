#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController_Monster.h"

class Class_2_79F6D62CE30E3F8E_19;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F2B10)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179F2BA0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x179F2C20)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F2C30)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179F2C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_TowerDefenseMonster_TypeDefinitionIndex = 41780;

	class UIMonsterCardInfoPopWindowController_TowerDefenseMonster : public ::MoleMole::UIMonsterCardInfoPopWindowController_Monster
	{
	public:
		::Class_2_79F6D62CE30E3F8E_19* _view; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
