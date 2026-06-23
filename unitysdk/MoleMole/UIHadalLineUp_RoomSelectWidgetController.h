#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_468A4FBF2E9F527C;
class Class_2_77D12983AB7F9492_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace MoleMole { class UIHadalZone_Common_HadalRoomSelectContext; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18466500)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x18466AF0)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONSELECTBUDDYHANDLE_OFFSET UNITYSDK_OFFSET(0x184672E0)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18466590)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18465980)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18465AE0)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18467370)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__OPENSELECTBUDDYPAGE_OFFSET UNITYSDK_OFFSET(0x18467070)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__OPENSELECTHEROPAGE_OFFSET UNITYSDK_OFFSET(0x18466610)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__REFRESHROLES_OFFSET UNITYSDK_OFFSET(0x18465C30)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__SETEMPTY_OFFSET UNITYSDK_OFFSET(0x18466480)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18467680)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18467710)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184677A0)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18467830)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___REFRESHROLES_G____ONBUDDYHEADROWBTNCLICKED_12_1_OFFSET UNITYSDK_OFFSET(0x184675A0)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___REFRESHROLES_G____ONROLEHEADROWBTNCLICKED_12_0_OFFSET UNITYSDK_OFFSET(0x184674C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalLineUp_RoomSelectWidgetController_TypeDefinitionIndex = 72458;

	class UIHadalLineUp_RoomSelectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_ROLE_COUNT = 0x3; // 0x0
		// static const ::System::Int32 MAX_BUDDY_COUNT = 0x1; // 0x0
		::Class_2_77D12983AB7F9492_2* _view; // 0x2C0
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2C8
		::MoleMole::UIHadalZone_Common_HadalRoomSelectContext* _roomSelectContext; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _role_headRowWidgetControllers; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* _buddy_headRowWidgetControllers; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void _SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__SETEMPTY_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _RefreshRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__REFRESHROLES_OFFSET))(this);
		}

		::System::Void _OpenSelectHeroPage(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__OPENSELECTHEROPAGE_OFFSET))(this, index);
		}

		::System::Void OnSelectAvatar(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONSELECTAVATAR_OFFSET))(this, eventArgs);
		}

		::System::Void _OpenSelectBuddyPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER__OPENSELECTBUDDYPAGE_OFFSET))(this);
		}

		::System::Void OnSelectBuddyHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER_ONSELECTBUDDYHANDLE_OFFSET))(this, args);
		}

		::System::Void __RefreshRoles_g____OnRoleHeadRowBtnClicked_12_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___REFRESHROLES_G____ONROLEHEADROWBTNCLICKED_12_0_OFFSET))(this, index);
		}

		::System::Void __RefreshRoles_g____OnBuddyHeadRowBtnClicked_12_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___REFRESHROLES_G____ONBUDDYHEADROWBTNCLICKED_12_1_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
