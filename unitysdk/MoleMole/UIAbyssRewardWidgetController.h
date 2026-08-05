#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_1132;
class Class_2_60638234271CCDB8_140;
class Class_2_AB2EF02AB0EB9012;
class Class_3_64D9DF94F8C16A38;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETACTIVESELECTSHOW_OFFSET UNITYSDK_OFFSET(0x11D890F0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANCLICK_OFFSET UNITYSDK_OFFSET(0x11D892A0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANGETREWARD_OFFSET UNITYSDK_OFFSET(0x11D89080)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x11D891E0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0x11D88EF0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET UNITYSDK_OFFSET(0x11D881E0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDID_OFFSET UNITYSDK_OFFSET(0x11D89240)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCLICKGETITEM_OFFSET UNITYSDK_OFFSET(0x11D89350)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D87D10)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11D87E20)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11D88270)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D87DA0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D878E0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11D88B30)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D89700)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D89710)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11D897A0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11D897D0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D89870)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D89900)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardWidgetController_TypeDefinitionIndex = 70285;

	class UIAbyssRewardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_140* _view; // 0x2F0
		::Class_2_208CC9941471731A_1132* rewardBarCfg; // 0x2F8
		::System::Action_1<::MoleMole::UIAbyssRewardWidgetController*>* OnClickGetReward; // 0x300
		::System::Action* OnRewardFocusChange; // 0x308
		::MoleMole::UIItemIconBtnWidgetController* _itemIconBtn0; // 0x310
		::MoleMole::UIItemIconBtnWidgetController* _itemIconBtn1; // 0x318
		::Class_2_AB2EF02AB0EB9012* _abyssModel; // 0x320
		::Class_3_64D9DF94F8C16A38* currentGroup; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean GetRewardCustomListIsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETISUNLOCK_OFFSET))(this);
		}

		::System::Boolean GetCanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANGETREWARD_OFFSET))(this);
		}

		::System::Boolean GetActiveSelectShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETACTIVESELECTSHOW_OFFSET))(this);
		}

		::System::Int32 GetCurrentLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCURRENTLEVEL_OFFSET))(this);
		}

		::System::Int32 GetRewardID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDID_OFFSET))(this);
		}

		::System::Boolean GetCanClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANCLICK_OFFSET))(this);
		}

		::System::Void OnClickGetItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCLICKGETITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
