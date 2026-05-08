#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79F6D62CE30E3F8E_30;
class Class_2_C04F87C132BA9A06;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167859E0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x167856F0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONITEMCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x167858C0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16785860)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16786D00)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16785460)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16785970)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_PLAYCHANGEEQUIPANI_OFFSET UNITYSDK_OFFSET(0x16786790)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHDRESSSTATE_OFFSET UNITYSDK_OFFSET(0x16786600)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16785CA0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETAVATARDATA_OFFSET UNITYSDK_OFFSET(0x16785BC0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETROBOTDATA_OFFSET UNITYSDK_OFFSET(0x16786B10)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTALPHA_OFFSET UNITYSDK_OFFSET(0x16785740)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTID_OFFSET UNITYSDK_OFFSET(0x16786B70)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSLOTDATA_OFFSET UNITYSDK_OFFSET(0x16785A70)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16786D80)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_0_OFFSET UNITYSDK_OFFSET(0x16786DE0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_1_OFFSET UNITYSDK_OFFSET(0x16786DF0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16786E50)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16786EE0)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16786F70)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16787000)
#define MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16787090)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipRowWidgetController_TypeDefinitionIndex = 40712;

	class UICoopEquipRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_30* _view; // 0x2B8
		::Class_2_C04F87C132BA9A06* _coopModel; // 0x2C0
		::System::Int32 _slotID; // 0x2C8
		::System::Int32 _avatarID; // 0x2CC
		::System::Int32 _robotID; // 0x2D0
		::System::Action_1<::System::Int32>* _clickAction; // 0x2D8
		::System::Boolean _isUnlock; // 0x2E0
		::MoleMole::UIGeneralIconCardRarityWidgetController* _rarityWidget; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle _fadeCoroutineHandle; // 0x2F0
		::System::Int32 _lastEquipID; // 0x2F4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnFocusStateChanged(::System::Boolean obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONFOCUSSTATECHANGED_OFFSET))(this, obj);
		}

		::System::Void SetSelectAlpha(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTALPHA_OFFSET))(this, isFocus);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnItemClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONITEMCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetSlotData(::System::Int32 slotID, ::System::Action_1<::System::Int32>* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSLOTDATA_OFFSET))(this, slotID, clickAction);
		}

		::System::Void SetAvatarData(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETAVATARDATA_OFFSET))(this, avatarID);
		}

		::System::Void RefreshDressState(::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHDRESSSTATE_OFFSET))(this, withAni);
		}

		::System::Void SetRobotData(::System::Int32 robotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETROBOTDATA_OFFSET))(this, robotID);
		}

		::System::Single PlayChangeEquipAni()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_PLAYCHANGEEQUIPANI_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetSelectID(::System::Int32 selectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_SETSELECTID_OFFSET))(this, selectID);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _PlayChangeEquipAni_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_0_OFFSET))(this);
		}

		::System::Void _PlayChangeEquipAni_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER__PLAYCHANGEEQUIPANI_B__25_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
