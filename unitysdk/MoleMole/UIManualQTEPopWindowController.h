#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_9AC357D52CEBEEFD_1;
class Class_1_E9529ED64113E4E9;
class Class_2_FC20C2EC2B787291_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1900FDF0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1900FF80)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x19010740)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x19010B70)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x190105F0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19010680)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1900FE00)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1900FE50)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19010D20)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19010D40)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19010DD0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19010DE0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19010DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIManualQTEPopWindowController_TypeDefinitionIndex = 56730;

	class UIManualQTEPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_FC20C2EC2B787291_1* _view; // 0x318
		::System::String* _curVideoPath; // 0x320
		::System::Boolean _isManualQTEOn; // 0x328
		::System::Collections::Generic::List_1<::Class_1_9AC357D52CEBEEFD_1*>* _manualQTEOptions; // 0x330
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView(::System::Boolean isManualQTEOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this, isManualQTEOn);
		}

		::System::Void OnBtnClicked(::System::Boolean isManualQTEOn, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONBTNCLICKED_OFFSET))(this, isManualQTEOn, videoPath);
		}

		::System::Void OnConfirmBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER_ONCONFIRMBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
