#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_324399ACB04F339E;
class Class_2_0F81C900BF7F52E0_4;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D61350)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONQUESTCOUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x16D61BA0)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16D61460)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D613E0)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D61240)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_SHOWUNLOCK_OFFSET UNITYSDK_OFFSET(0x16D61550)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D61CB0)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D61CC0)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16D61D50)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D61DF0)
#define MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D61E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBountyMissionWidgetController_TypeDefinitionIndex = 85603;

	class UIBountyMissionWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_0F81C900BF7F52E0_4* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowUnlock(::Class_1_324399ACB04F339E* questDay)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_324399ACB04F339E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_SHOWUNLOCK_OFFSET))(this, questDay);
		}

		::System::Void OnQuestCountDownEnd(::UnityEngine::UI::Extension::UITimeWidget* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER_ONQUESTCOUNTDOWNEND_OFFSET))(this, obj);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOUNTYMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
