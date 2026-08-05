#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_754022533D501C3E_13;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A235F0)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A23680)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A23520)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A23580)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x17A23810)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17A23700)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_SETNEW_OFFSET UNITYSDK_OFFSET(0x17A238F0)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A23960)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17A239C0)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17A23A50)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17A23AE0)
#define MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A23B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelResultRecordRowWidgetController_TypeDefinitionIndex = 78076;

	class UIRepelResultRecordRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_754022533D501C3E_13* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* title, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, title, value);
		}

		::System::Void RefreshView_1(::System::String* title, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, title, value);
		}

		::System::Void SetNew(::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER_SETNEW_OFFSET))(this, isNew);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELRESULTRECORDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
