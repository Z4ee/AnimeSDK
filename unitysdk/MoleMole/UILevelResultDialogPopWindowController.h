#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_2A09C8C0CD4D6ED4;
class Class_2_F96EEF3462521D2D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILevelResultProgressRowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x191310F0)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_CREATEDATA_OFFSET UNITYSDK_OFFSET(0x19131FF0)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x19130180)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19130170)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19130FF0)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONFAIRYBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x19133BC0)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19131080)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19130190)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19130670)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x19131500)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x19131CE0)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19133C00)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19133E20)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19133D70)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19133D80)
#define MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19133D90)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultDialogPopWindowController_TypeDefinitionIndex = 74830;

	class UILevelResultDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_F96EEF3462521D2D* _view; // 0x318
		::System::Collections::Generic::List_1<::System::Single>* weaponRatio; // 0x320
		::System::Collections::Generic::List_1<::System::Single>* equipRatio; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UILevelResultProgressRowWidgetController*>* widgets; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4*>*>* failedInfos; // 0x338
		::System::UInt32 _curAvatarId; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_F96EEF3462521D2D* get_View()
		{
			return ((::Class_2_F96EEF3462521D2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean Contains(::System::UInt32 avatarid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_CONTAINS_OFFSET))(this, avatarid);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_PREPAREDATA_OFFSET))(this);
		}

		::System::Void RefreshInfo(::System::UInt32 avatarid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_REFRESHINFO_OFFSET))(this, avatarid);
		}

		::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4*>* CreateData(::System::UInt32 avatarid)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_CREATEDATA_OFFSET))(this, avatarid);
		}

		::System::Void OnFairyBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER_ONFAIRYBTNCLICKED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}
	};
}
