#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7;
class Class_2_B4378B46E0020E85;
class Class_2_D4013B1655644290_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x182E0540)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x182E0010)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCLICKMSG_OFFSET UNITYSDK_OFFSET(0x182E0720)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182E05A0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x182E0630)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182E0160)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182E06B0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182E0020)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_SHOWAVATAROPENMESSAGE_OFFSET UNITYSDK_OFFSET(0x182E0880)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182E0CB0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182E0CC0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x182E0D50)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182E0DE0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182E0DF0)
#define MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182E0E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMessageChildWindowController_TypeDefinitionIndex = 89141;

	class UIMessageChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_D4013B1655644290_1* _view; // 0x318
		::System::Single _titleWidth; // 0x320
		::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*>* _curMessageUsers; // 0x328
		::System::Boolean newBie; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::Class_2_B4378B46E0020E85* GetButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickMsg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_ONCLICKMSG_OFFSET))(this);
		}

		::System::Void ShowAvatarOpenMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER_SHOWAVATAROPENMESSAGE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
