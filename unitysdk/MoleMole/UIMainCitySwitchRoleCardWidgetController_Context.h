#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_CLICKACTION_OFFSET UNITYSDK_OFFSET(0x183AB540)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0x183AB4E0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x183AB4C0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISMASK_OFFSET UNITYSDK_OFFSET(0x183AB500)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_SHOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x183AB520)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SETBTNCLICKACTION_OFFSET UNITYSDK_OFFSET(0x183AB680)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SETHANDLESELECT_OFFSET UNITYSDK_OFFSET(0x183AB5D0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SETMASK_OFFSET UNITYSDK_OFFSET(0x183AB630)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_CLICKACTION_OFFSET UNITYSDK_OFFSET(0x183AB550)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_HANDLESELECT_OFFSET UNITYSDK_OFFSET(0x183AB4F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x183AB4D0)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISMASK_OFFSET UNITYSDK_OFFSET(0x183AB510)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_SHOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x183AB530)
#define MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183AB560)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleCardWidgetController_Context_TypeDefinitionIndex = 52759;

	class UIMainCitySwitchRoleCardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>* _ClickAction_k__BackingField; // 0x28
		::System::Boolean _IsEmpty_k__BackingField; // 0x30
		::System::Boolean _IsMask_k__BackingField; // 0x31
		::System::Boolean _HandleSelect_k__BackingField; // 0x32
		::System::Boolean _ShowNotification_k__BackingField; // 0x33
		::System::Boolean IsBtnInteractable; // 0x34
		::System::Int32 AvatarId; // 0x38

		::System::Void _ctor(::System::Int32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, avatarId);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISEMPTY_OFFSET))(this, value);
		}

		::System::Boolean get_HandleSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_HANDLESELECT_OFFSET))(this);
		}

		::System::Void set_HandleSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_HANDLESELECT_OFFSET))(this, value);
		}

		::System::Boolean get_IsMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_ISMASK_OFFSET))(this);
		}

		::System::Void set_IsMask(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_ISMASK_OFFSET))(this, value);
		}

		::System::Boolean get_ShowNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_SHOWNOTIFICATION_OFFSET))(this);
		}

		::System::Void set_ShowNotification(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_SHOWNOTIFICATION_OFFSET))(this, value);
		}

		::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>* get_ClickAction()
		{
			return ((::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_GET_CLICKACTION_OFFSET))(this);
		}

		::System::Void set_ClickAction(::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SET_CLICKACTION_OFFSET))(this, value);
		}

		::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context* SetHandleSelect(::System::Boolean handleSelect, ::System::Boolean showNotification)
		{
			return ((::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SETHANDLESELECT_OFFSET))(this, handleSelect, showNotification);
		}

		::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context* SetMask(::System::Boolean mask)
		{
			return ((::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SETMASK_OFFSET))(this, mask);
		}

		::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context* SetBtnClickAction(::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>* callback)
		{
			return ((::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*(*)(::PVOID, ::System::Action_1<::MoleMole::UIMainCitySwitchRoleCardWidgetController_Context*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLECARDWIDGETCONTROLLER_CONTEXT_SETBTNCLICKACTION_OFFSET))(this, callback);
		}
	};
}
