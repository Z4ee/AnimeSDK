#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_9AC357D52CEBEEFD_2;
class Class_1_E9529ED64113E4E9;
class Class_2_FC20C2EC2B787291;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1AE414C0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1AE415A0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1AE41C70)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1AE420A0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AE41B70)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE41C00)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AE414D0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AE41520)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE42130)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AE42150)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE421E0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AE421F0)
#define MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AE42200)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowJoystickModePopWindowController_TypeDefinitionIndex = 89486;

	class UIHollowJoystickModePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_FC20C2EC2B787291* _view; // 0x318
		::System::String* _curVideoPath; // 0x320
		::System::Boolean _isEnableJoystick; // 0x328
		::System::Collections::Generic::List_1<::Class_1_9AC357D52CEBEEFD_2*>* _joystickModeOptions; // 0x330
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnBtnClicked(::System::Boolean isEnableJoystick, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET))(this, isEnableJoystick, videoPath);
		}

		::System::Void OnConfirmBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWJOYSTICKMODEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
