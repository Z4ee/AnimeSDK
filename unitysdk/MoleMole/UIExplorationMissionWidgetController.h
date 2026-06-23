#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_324399ACB04F339E;
class Class_2_0F81C900BF7F52E0;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17708940)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONQUESTCOUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x17709240)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17708A50)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177089D0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17708830)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_SHOWUNLOCK_OFFSET UNITYSDK_OFFSET(0x17708B70)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17709350)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17709360)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x177093F0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17709490)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17709520)

namespace MoleMole
{
	inline static constexpr unsigned int UIExplorationMissionWidgetController_TypeDefinitionIndex = 41182;

	class UIExplorationMissionWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_0F81C900BF7F52E0* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowUnlock(::Class_1_324399ACB04F339E* questDay)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_324399ACB04F339E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_SHOWUNLOCK_OFFSET))(this, questDay);
		}

		::System::Void OnQuestCountDownEnd(::UnityEngine::UI::Extension::UITimeWidget* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONQUESTCOUNTDOWNEND_OFFSET))(this, obj);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
