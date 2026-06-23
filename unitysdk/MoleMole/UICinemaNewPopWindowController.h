#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_3E1A0459A6647B99_13;
namespace MoleMole { class UICinemaNewContext; }
namespace MoleMole { class UICinemaNewMovieWidgetController; }
namespace MoleMole { class UICinemaNewRoleWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_GENCINEMANEWMOVIE_OFFSET UNITYSDK_OFFSET(0x17F653E0)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_GENCINEMANEWROLE_OFFSET UNITYSDK_OFFSET(0x17F654C0)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17F645B0)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0x17F650D0)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F64F40)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F64FD0)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F645C0)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F64790)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_REFRESHNEWCONTEXTID_OFFSET UNITYSDK_OFFSET(0x17F64880)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17F65040)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F65590)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F655A0)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F65630)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F65640)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17F65650)
#define MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17F656E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaNewPopWindowController_TypeDefinitionIndex = 78498;

	class UICinemaNewPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_3E1A0459A6647B99_13* _view; // 0x318
		::MoleMole::UICinemaNewContext* context; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UICinemaNewMovieWidgetController*>* newMovieWidgetList; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UICinemaNewRoleWidgetController*>* newRoleWidgetList; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnClickOKBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET))(this);
		}

		::System::Void RefreshNewContextID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_REFRESHNEWCONTEXTID_OFFSET))(this);
		}

		::System::Void GenCinemaNewMovie(::System::Int32 movieID, ::System::Boolean isSingleLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_GENCINEMANEWMOVIE_OFFSET))(this, movieID, isSingleLevel);
		}

		::System::Void GenCinemaNewRole(::System::Int32 dateLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER_GENCINEMANEWROLE_OFFSET))(this, dateLevelID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
