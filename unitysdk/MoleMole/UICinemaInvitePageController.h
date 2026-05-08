#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_E50E89F6E00CADC0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_11;
class Class_1_270AC9529BDD8E1A;
class Class_2_23EC6E39A5C61502;
class Class_2_699998D4E6F32559;
class Class_2_C66DEC328A595BAB;
class Class_3_32CD58E95ADFF8F5_77;
namespace MoleMole { class UICinemaInviteMovieWidgetController; }
namespace MoleMole { class UICinemaInvitePageContext; }
namespace MoleMole { class UICinemaInviteRoleWidgetController; }
namespace MoleMole { class UICinemaInviteWidgetContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x16EE09E0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16EDFE10)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCINEMAPLAYEXIT_OFFSET UNITYSDK_OFFSET(0x16EE1110)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x16EE0A30)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLOSESELECTMOVIE_OFFSET UNITYSDK_OFFSET(0x16EE0B90)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EDFE20)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELERROR_OFFSET UNITYSDK_OFFSET(0x16EE10C0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELSUCCESS_OFFSET UNITYSDK_OFFSET(0x16EE0EC0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EE0790)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSTARTDATELEVEL_OFFSET UNITYSDK_OFFSET(0x16EE0C40)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EE07F0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EDFEB0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EE0070)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTMOVIE_OFFSET UNITYSDK_OFFSET(0x16EE0550)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTROLE_OFFSET UNITYSDK_OFFSET(0x16EE0340)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE12E0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EE12F0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EE1380)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EE1390)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EE13A0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EE13B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInvitePageController_TypeDefinitionIndex = 38384;

	class UICinemaInvitePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_C66DEC328A595BAB* _view; // 0x310
		::MoleMole::UICinemaInviteRoleWidgetController* roleSelectWidget; // 0x318
		::MoleMole::UICinemaInviteMovieWidgetController* movieSelectWidget; // 0x320
		::Enum_3_E50E89F6E00CADC0 state; // 0x328
		::MoleMole::UICinemaInviteWidgetContext* widgetContext; // 0x330
		::MoleMole::UICinemaInvitePageContext* inviteContext; // 0x338
		::Class_1_270AC9529BDD8E1A* inviteHandler; // 0x340
		::System::Collections::Generic::List_1<::Class_2_23EC6E39A5C61502*>* dateLevelDataList; // 0x348
		::Class_2_699998D4E6F32559* cinemaModel; // 0x350
		::Class_2_23EC6E39A5C61502* nowSelectLevel; // 0x358
		::System::Boolean clickLevelMask; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_C66DEC328A595BAB* GetView()
		{
			return ((::Class_2_C66DEC328A595BAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void OnClickClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLICKCLOSE_OFFSET))(this);
		}

		::System::Void OnCloseSelectMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLOSESELECTMOVIE_OFFSET))(this);
		}

		::System::Void OpenSelectRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTROLE_OFFSET))(this);
		}

		::System::Void OpenSelectMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTMOVIE_OFFSET))(this);
		}

		::System::Void OnStartDateLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSTARTDATELEVEL_OFFSET))(this);
		}

		::System::Void OnEnterCinemaLevelSuccess(::Class_3_32CD58E95ADFF8F5_77* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_77*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELSUCCESS_OFFSET))(this, rcvMessage);
		}

		::System::Void OnEnterCinemaLevelError(::Class_0_16E4307DCC419505_11* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELERROR_OFFSET))(this, rcvMessage);
		}

		::System::Void OnCinemaPlayExit(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCINEMAPLAYEXIT_OFFSET))(this, isFinish);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
