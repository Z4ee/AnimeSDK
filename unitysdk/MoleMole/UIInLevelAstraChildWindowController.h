#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_D68EC59F0214DAC2_15;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17DC3AB0)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DC3B80)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DC3C10)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DC3AC0)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DC3B10)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_REFRESHCURCHARGETIMES_OFFSET UNITYSDK_OFFSET(0x17DC3C80)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC3D00)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DC3D10)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DC3DA0)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DC3DB0)
#define MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DC3DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAstraChildWindowController_TypeDefinitionIndex = 85936;

	class UIInLevelAstraChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_D68EC59F0214DAC2_15* _view; // 0x318
		::System::Int32 chargeIndex; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshCurChargeTimes(::System::Int32 curChargeTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER_REFRESHCURCHARGETIMES_OFFSET))(this, curChargeTimes);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELASTRACHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
