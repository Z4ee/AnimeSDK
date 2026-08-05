#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_3B1E761D184CCDAF;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIEQUIPSTATECONTROLLER_GET_CURITEMDATA_OFFSET UNITYSDK_OFFSET(0x18D55AE0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_HIDEBTNS_OFFSET UNITYSDK_OFFSET(0x18D52AC0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18D55AF0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_REALDELETE_OFFSET UNITYSDK_OFFSET(0x18D56610)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_REFRESHTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x18D56A40)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x18D52A50)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_SETONITEMDATANULLHIDEBTNS_OFFSET UNITYSDK_OFFSET(0x18D569F0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLEDELETE_OFFSET UNITYSDK_OFFSET(0x18D562B0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLELOCK_OFFSET UNITYSDK_OFFSET(0x18D55E50)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_TRIGGERTOGGLEAUDIO_OFFSET UNITYSDK_OFFSET(0x18D567F0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D582B0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18D58360)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipStateController_TypeDefinitionIndex = 74702;

	class UIEquipStateController : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* LockSwitchBtn; // 0x80
		::UnityEngine::UI::Extension::UIButtonEx* DeleteBtn; // 0x88
		::UnityEngine::GameObject* LockSwitchLock; // 0x90
		::UnityEngine::GameObject* LockSwitchUnLock; // 0x98
		::UnityEngine::UI::Image* LockSwitchLockImage; // 0xA0
		::UnityEngine::UI::Image* LockSwitchUnLockImage; // 0xA8
		::UnityEngine::GameObject* DeleteLock; // 0xB0
		::UnityEngine::GameObject* DeleteUnLock; // 0xB8
		::UnityEngine::UI::Image* DeleteLockImage; // 0xC0
		::UnityEngine::UI::Image* DeleteUnLockImage; // 0xC8
		::UnityEngine::UI::Extension::UILocalizationText* LockSwitchConsoleTipText; // 0xD0
		::UnityEngine::UI::Extension::UILocalizationText* DeleteConsoleTipText; // 0xD8
		::System::Boolean EnableLockControl; // 0xE0
		::System::Boolean EnableDelControl; // 0xE1
		::Class_1_0D6706375CDAAE8C* _curItemData; // 0xE8
		::System::Action* stateChangeAction; // 0xF0
		::System::Boolean _OnItemDataNullHideBtns; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* get_CurItemData()
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_GET_CURITEMDATA_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_ONAWAKE_OFFSET))(this);
		}

		::System::Void ToggleLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLELOCK_OFFSET))(this);
		}

		::System::Void ToggleDelete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLEDELETE_OFFSET))(this);
		}

		::System::Void RealDelete(::Class_2_3B1E761D184CCDAF* equip, ::System::Boolean isNoShowTips)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_REALDELETE_OFFSET))(this, equip, isNoShowTips);
		}

		::System::Void TriggerToggleAudio(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_TRIGGERTOGGLEAUDIO_OFFSET))(this, isLock);
		}

		::System::Void SetOnItemDataNullHideBtns(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_SETONITEMDATANULLHIDEBTNS_OFFSET))(this, state);
		}

		::System::Void RefreshToggleState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_REFRESHTOGGLESTATE_OFFSET))(this);
		}

		::System::Void SetItemData(::Class_1_0D6706375CDAAE8C* itemData, ::System::Action* changeAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_SETITEMDATA_OFFSET))(this, itemData, changeAction);
		}

		::System::Void HideBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_HIDEBTNS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
