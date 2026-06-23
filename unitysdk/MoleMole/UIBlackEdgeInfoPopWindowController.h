#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBlackEdgeInfoPopWindowController___c__DisplayClass3_0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_7BEEB90214042948_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18A67A60)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A68080)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A68110)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A67A70)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A68010)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A68180)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER__ONUIINIT_G__GETBLACKEDGETYPE_3_0_OFFSET UNITYSDK_OFFSET(0x18A67FA0)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A68190)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A68220)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A68230)
#define MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A68240)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlackEdgeInfoPopWindowController_TypeDefinitionIndex = 67411;

	class UIBlackEdgeInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_7BEEB90214042948_11* _view; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::String* _OnUIInit_g__GetBlackEdgeType_3_0(::MoleMole::UIBlackEdgeInfoPopWindowController___c__DisplayClass3_0& a1)
		{
			return ((::System::String*(*)(::MoleMole::UIBlackEdgeInfoPopWindowController___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER__ONUIINIT_G__GETBLACKEDGETYPE_3_0_OFFSET))(a1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
