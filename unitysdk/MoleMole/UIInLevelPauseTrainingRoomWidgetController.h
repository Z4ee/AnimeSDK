#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ETrainingRoomItemType.h"
#include "unitysdk/MoleMole/UIGeneralOptionWidgetController.h"

class Class_2_14B0BFEBE8C5942A_2;
class Class_3_29AD770B16B2D814;
class Class_4_9D746F36A53A6BE5;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class ConfigTrainingRoom; }

#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_GETISOPENSLELECT_OFFSET UNITYSDK_OFFSET(0x155EACA0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x155E9FC0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONDROPDOWNSELECT_OFFSET UNITYSDK_OFFSET(0x155EA870)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155EA130)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E9CC0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_RECORDSELECTINFO_OFFSET UNITYSDK_OFFSET(0x155EABC0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_SPAWNSELECTLIST_OFFSET UNITYSDK_OFFSET(0x155EA180)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155EACF0)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155EAD50)
#define MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155EAD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTrainingRoomWidgetController_TypeDefinitionIndex = 40481;

	class UIInLevelPauseTrainingRoomWidgetController : public ::MoleMole::UIGeneralOptionWidgetController
	{
	public:
		::Class_2_14B0BFEBE8C5942A_2* _view; // 0x2C0
		::MoleMole::Config::ConfigTrainingRoom* _trainingRoomConfig; // 0x2C8
		::Class_4_9D746F36A53A6BE5* _gameContext; // 0x2D0
		::Class_3_29AD770B16B2D814* _levelTrainingRoomComponent; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SpawnSelectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_SPAWNSELECTLIST_OFFSET))(this);
		}

		::System::Void OnDropDownSelect(::System::Int32 changeType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_ONDROPDOWNSELECT_OFFSET))(this, changeType, index);
		}

		::System::Boolean GetIsOpenSlelect(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_GETISOPENSLELECT_OFFSET))(this, index);
		}

		::System::Void RecordSelectInfo(::MoleMole::Config::ETrainingRoomItemType changeType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ETrainingRoomItemType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER_RECORDSELECTINFO_OFFSET))(this, changeType, index);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETRAININGROOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
