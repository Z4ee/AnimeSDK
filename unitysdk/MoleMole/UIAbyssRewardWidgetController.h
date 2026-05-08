#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_809;
class Class_2_60638234271CCDB8_105;
class Class_2_E621E51D351EB960;
class Class_3_64D9DF94F8C16A38;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETACTIVESELECTSHOW_OFFSET UNITYSDK_OFFSET(0x11E10280)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANCLICK_OFFSET UNITYSDK_OFFSET(0x11E10430)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCANGETREWARD_OFFSET UNITYSDK_OFFSET(0x11E10210)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETCURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x11E10370)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0x11E10080)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET UNITYSDK_OFFSET(0x11E0F370)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_GETREWARDID_OFFSET UNITYSDK_OFFSET(0x11E103D0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCLICKGETITEM_OFFSET UNITYSDK_OFFSET(0x11E104E0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E0EE90)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E0EFA0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11E0F400)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E0EF20)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E0EA60)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11E0FCC0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E10890)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E108A0)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E10930)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11E10960)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E10A00)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E10A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardWidgetController_TypeDefinitionIndex = 77540;

	class UIAbyssRewardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_105* _view; // 0x2E8
		::Class_2_208CC9941471731A_809* rewardBarCfg; // 0x2F0
		::System::Action_1<::MoleMole::UIAbyssRewardWidgetController*>* OnClickGetReward; // 0x2F8
		::System::Action* OnRewardFocusChange; // 0x300
		::MoleMole::UIItemIconBtnWidgetController* _itemIconBtn0; // 0x308
		::MoleMole::UIItemIconBtnWidgetController* _itemIconBtn1; // 0x310
		::Class_2_E621E51D351EB960* _abyssModel; // 0x318
		::Class_3_64D9DF94F8C16A38* currentGroup; // 0x320

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
