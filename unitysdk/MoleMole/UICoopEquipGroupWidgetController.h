#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_C66E4DE78E6562C8;
class Class_2_E55F60BF63BB02E0;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopEquipRowWidgetController; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x185677C0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONEQUIPSLOTCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x185673F0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x18566BF0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18566D10)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18566E60)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONROLEICONBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x18567270)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONROWCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x185676C0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18568C00)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18566690)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18567750)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_PLAYCHANGEEQUIPANI_OFFSET UNITYSDK_OFFSET(0x18568630)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_REFRESHDRESSSTATE_OFFSET UNITYSDK_OFFSET(0x18568400)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_REFRESHEQUIPVIEW_OFFSET UNITYSDK_OFFSET(0x18567990)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_REFRESHSELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0x18567040)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETAVATARDATA_OFFSET UNITYSDK_OFFSET(0x18568280)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETROBOTDATA_OFFSET UNITYSDK_OFFSET(0x18567850)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETROLEICONSTATE_OFFSET UNITYSDK_OFFSET(0x18568A60)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETSELECTALPHA_OFFSET UNITYSDK_OFFSET(0x18566C40)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x185674F0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETSLOTCLICKACTION_OFFSET UNITYSDK_OFFSET(0x185674A0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETUISTATE_OFFSET UNITYSDK_OFFSET(0x18568A00)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18568D10)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18568DF0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18568E80)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18568F10)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18568FA0)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18569030)
#define MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x185690C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipGroupWidgetController_TypeDefinitionIndex = 75704;

	class UICoopEquipGroupWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 _equipSlotID = 0x1; // 0x0
		::Class_2_E55F60BF63BB02E0* _view; // 0x2C0
		::Class_2_C66E4DE78E6562C8* _coopModel; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UICoopEquipRowWidgetController*>* _rowWidgets; // 0x2D0
		::System::Action_1<::System::Int32>* _slotCkickAcction; // 0x2D8
		::System::Int32 _selectedSlotID; // 0x2E0
		::System::Int32 _avatarID; // 0x2E4
		::System::Int32 _robotID; // 0x2E8
		::MoleMole::UIGeneralIconCardRarityWidgetController* _rarityWidget; // 0x2F0
		::System::Boolean _isAvatarType; // 0x2F8
		::Foundation::Coroutine::CoroutineHandle _fadeCoroutineHandle; // 0x2FC
		::System::Int32 _lastEquipID; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnFocusStateChanged(::System::Boolean obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET))(this, obj);
		}

		::System::Void SetSelectAlpha(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETSELECTALPHA_OFFSET))(this, isFocus);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnRoleIconBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONROLEICONBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnEquipSlotClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONEQUIPSLOTCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetSlotClickAction(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETSLOTCLICKACTION_OFFSET))(this, action);
		}

		::System::Void SetSelectState(::System::Int32 slotID, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETSELECTSTATE_OFFSET))(this, slotID, isInit);
		}

		::System::Void OnRowClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONROWCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void RefreshSelectedState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_REFRESHSELECTEDSTATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetRobotData(::System::Int32 robotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETROBOTDATA_OFFSET))(this, robotID);
		}

		::System::Void SetAvatarData(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETAVATARDATA_OFFSET))(this, avatarID);
		}

		::System::Void RefreshDressState(::System::Boolean withDressAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_REFRESHDRESSSTATE_OFFSET))(this, withDressAni);
		}

		::System::Void SetUIState(::System::Boolean isAvatarType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETUISTATE_OFFSET))(this, isAvatarType);
		}

		::System::Void SetRoleIconState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_SETROLEICONSTATE_OFFSET))(this);
		}

		::System::Single PlayChangeEquipAni()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_PLAYCHANGEEQUIPANI_OFFSET))(this);
		}

		::System::Void RefreshEquipView(::System::Boolean withDressAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_REFRESHEQUIPVIEW_OFFSET))(this, withDressAni);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPGROUPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
