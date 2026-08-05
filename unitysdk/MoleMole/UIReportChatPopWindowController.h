#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIReportChatPopWindowController_Mode.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_89120A467F7A010D;
class Class_2_D12E18C1047DCBF2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x179ABC80)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_INITWITHDATA_OFFSET UNITYSDK_OFFSET(0x179AC0B0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179ABF70)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x179ACBB0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179AC000)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179ABC90)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179ABCE0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179ACCA0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179ACCB0)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179ACD40)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179ACD50)
#define MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179ACD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportChatPopWindowController_TypeDefinitionIndex = 81373;

	class UIReportChatPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_D12E18C1047DCBF2* _view; // 0x318
		::System::Int32 currSelectedChatNum; // 0x320
		::System::Int32 maxSelectedChatNum; // 0x324
		::System::Action_1<::System::Int32>* closeCB; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitWithData(::MoleMole::UIReportChatPopWindowController_Mode mode, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_89120A467F7A010D*>* reportMsgDataList, ::System::Int32 maxSelectCount, ::System::Action_1<::System::Int32>* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIReportChatPopWindowController_Mode, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_89120A467F7A010D*>*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_INITWITHDATA_OFFSET))(this, mode, reportMsgDataList, maxSelectCount, closeCallback);
		}

		::System::Boolean OnSelectItem(::System::Boolean isSelected)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER_ONSELECTITEM_OFFSET))(this, isSelected);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTCHATPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
