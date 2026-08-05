#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1EA8435E138F2E03;
class Class_2_6913AEABC08EF711;
class Class_2_74EAE7375772B9FE_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVRBattleResultRecordRowWidgetController_RecordData; }

#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x161062D0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16106360)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16106170)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x161061D0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x161063E0)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16106610)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16106670)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16106700)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16106790)
#define MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16106820)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBattleResultRecordRowWidgetController_TypeDefinitionIndex = 49247;

	class UIVRBattleResultRecordRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6913AEABC08EF711* _redNode; // 0x2C0
		::Class_1_1EA8435E138F2E03* _rewardNode; // 0x2C8
		::Class_2_74EAE7375772B9FE_2* _view; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::MoleMole::UIVRBattleResultRecordRowWidgetController_RecordData* data, ::System::Boolean needRed)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVRBattleResultRecordRowWidgetController_RecordData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, data, needRed);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBATTLERESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
