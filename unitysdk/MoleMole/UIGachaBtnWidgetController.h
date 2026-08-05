#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30409CAE069D6997.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_FD8F308C8F39BC8A;
class Class_2_79F6D62CE30E3F8E_86;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaBtnWidgetContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_BINDTABNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x172E5E20)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_FORCEREFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x172E6740)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_GET_ISUIGROUP_OFFSET UNITYSDK_OFFSET(0x172E6F20)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x172E53E0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172E6180)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172E6210)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172E5070)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172E51B0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_REFRESHNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x172E63A0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_REFRESHUIGROUPLOOPSWITCH_OFFSET UNITYSDK_OFFSET(0x172E6800)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x172E5900)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETBANGBOOIMG_OFFSET UNITYSDK_OFFSET(0x172E6D00)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETCLICKCB_OFFSET UNITYSDK_OFFSET(0x172E62A0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETCOMMONIMG_OFFSET UNITYSDK_OFFSET(0x172E6E10)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETROLEIMG_OFFSET UNITYSDK_OFFSET(0x172E6AE0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x172E62F0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETTABRESOURCE_OFFSET UNITYSDK_OFFSET(0x172E6920)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x172E69E0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETWEAPONIMG_OFFSET UNITYSDK_OFFSET(0x172E6BF0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172E6F40)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__INITVIEW_G__SWITCHIMGONTRANSITIONMID_9_1_OFFSET UNITYSDK_OFFSET(0x172E6FE0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x172E6FA0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x172E6FD0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x172E7240)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172E72D0)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172E7360)
#define MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x172E73F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaBtnWidgetController_TypeDefinitionIndex = 50128;

	class UIGachaBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_86* _view; // 0x2C0
		::System::Action* _clickCb; // 0x2C8
		::MoleMole::UIGachaBtnWidgetContext* _context; // 0x2D0
		::System::Boolean _needShowNotificationBadge; // 0x2D8
		::Class_1_FD8F308C8F39BC8A* _groupLoopSwitchHandle; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetClickCb(::System::Action* clickCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETCLICKCB_OFFSET))(this, clickCb);
		}

		::System::Void SetSelect(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETSELECT_OFFSET))(this, select);
		}

		::System::Void ForceRefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_FORCEREFRESHSTATE_OFFSET))(this);
		}

		::System::Void RefreshUIGroupLoopSwitch(::System::Boolean isCurrent, ::System::Int32 currentGachaScheduleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_REFRESHUIGROUPLOOPSWITCH_OFFSET))(this, isCurrent, currentGachaScheduleId);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetTabResource(::Enum_3_30409CAE069D6997 type, ::System::String* tabResource)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_30409CAE069D6997, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETTABRESOURCE_OFFSET))(this, type, tabResource);
		}

		::System::Void SetRoleImg(::System::String* resource)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETROLEIMG_OFFSET))(this, resource);
		}

		::System::Void SetWeaponImg(::System::String* resource)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETWEAPONIMG_OFFSET))(this, resource);
		}

		::System::Void SetBangbooImg(::System::String* resource)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETBANGBOOIMG_OFFSET))(this, resource);
		}

		::System::Void SetCommonImg(::System::String* resource)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETCOMMONIMG_OFFSET))(this, resource);
		}

		::System::Void SetText(::System::String* key, ::System::String* textResource)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_SETTEXT_OFFSET))(this, key, textResource);
		}

		::System::Void RefreshNotificationBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_REFRESHNOTIFICATIONBADGE_OFFSET))(this);
		}

		::System::Void BindTabNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_BINDTABNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Boolean get_isUIGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER_GET_ISUIGROUP_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this, args);
		}

		::System::Void _InitView_g__SwitchImgOnTransitionMid_9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER__INITVIEW_G__SWITCHIMGONTRANSITIONMID_9_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
