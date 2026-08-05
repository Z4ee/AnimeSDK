#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_1B691570AFD0213C;
class Class_2_208CC9941471731A_535;
class Class_2_696E0C6E8A7D9C84;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInterKnotClientInfoDialogContext; }
namespace MoleMole { class UIInterKnotClientTitleInfoRowWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_DEFEREDSETLOOPTEXT_OFFSET UNITYSDK_OFFSET(0x174332F0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_GETQUESTNAMETEXT_OFFSET UNITYSDK_OFFSET(0x174340A0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17433090)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174341D0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x174342D0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17434260)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174330A0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17433370)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0x17434010)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_UPDATEQUESTITEM_OFFSET UNITYSDK_OFFSET(0x17433CD0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17434490)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__DEFEREDSETLOOPTEXT_B__4_0_OFFSET UNITYSDK_OFFSET(0x174344A0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__UPDATEQUESTITEM_B__8_0_OFFSET UNITYSDK_OFFSET(0x174344E0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17434720)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x174347B0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174347E0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174347F0)
#define MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17434800)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotClientInfoPopWindowController_TypeDefinitionIndex = 81751;

	class UIInterKnotClientInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_1B691570AFD0213C* _view; // 0x318
		::Class_2_696E0C6E8A7D9C84* _uiQuestModel; // 0x320
		::MoleMole::UIInterKnotClientInfoDialogContext* _curContext; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* _cachedId; // 0x330
		::System::Int32 _selectIndex; // 0x338
		::MoleMole::UIInterKnotClientTitleInfoRowWidgetController* _selectCtrl; // 0x340
		::Class_2_208CC9941471731A_535* _spConfig; // 0x348
		::System::Single detailHeight; // 0x350
		::UnityEngine::RectTransform* detailContentRectTrans; // 0x358
		::UnityEngine::RectTransform* detailParentRectTrans; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* DeferedSetLoopText()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_DEFEREDSETLOOPTEXT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::String* GetQuestNameText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_GETQUESTNAMETEXT_OFFSET))(this);
		}

		::System::Void RefreshLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET))(this);
		}

		::System::Void UpdateQuestItem(::MoleMole::UIInterKnotClientTitleInfoRowWidgetController* ctrl, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotClientTitleInfoRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_UPDATEQUESTITEM_OFFSET))(this, ctrl, dataIndex);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void _DeferedSetLoopText_b__4_0(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__DEFEREDSETLOOPTEXT_B__4_0_OFFSET))(this, s);
		}

		::System::Void _UpdateQuestItem_b__8_0(::MoleMole::UIInterKnotClientTitleInfoRowWidgetController* selectCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInterKnotClientTitleInfoRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER__UPDATEQUESTITEM_B__8_0_OFFSET))(this, selectCtrl);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTCLIENTINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
