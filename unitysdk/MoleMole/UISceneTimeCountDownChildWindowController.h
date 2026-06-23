#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13815BB0)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13815BC0)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13815E90)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13815FD0)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13815FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISceneTimeCountDownChildWindowController_TypeDefinitionIndex = 55431;

	class UISceneTimeCountDownChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::UInt32 _startTime; // 0x318
		::System::UInt32 _endTime; // 0x31C
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* _tipController; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
