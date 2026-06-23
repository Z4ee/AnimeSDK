#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_169;
class Class_2_B33D4DBECC9805C8_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ISCLOSETORESETTIME_OFFSET UNITYSDK_OFFSET(0x15F01AC0)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F00F70)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F01000)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F00EA0)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F00F00)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15F01080)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F01CA0)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F01D00)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F01D90)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F01E20)
#define MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F01EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepFreedomWidgetController_TypeDefinitionIndex = 67798;

	class UIMechBooPrepFreedomWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B33D4DBECC9805C8_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_169* levelInfo, ::System::Action_1<::Class_0_16E4307DCC419505_169*>* onClickScriptBtn)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_169*, ::System::Action_1<::Class_0_16E4307DCC419505_169*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, levelInfo, onClickScriptBtn);
		}

		::System::Boolean IsCloseToResetTime(::System::Int64 unlockTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER_ISCLOSETORESETTIME_OFFSET))(this, unlockTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPFREEDOMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
