#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_77ADBA378EFC2D41.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_FEC40CC23204DEDF;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICinemaInvitePageController; }
namespace MoleMole { class UICinemaRewardLevelRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_EXITPREPPAGE_OFFSET UNITYSDK_OFFSET(0x16C9CD80)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITFIRSTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0x16C9C080)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITRIGHTREWARDROW_OFFSET UNITYSDK_OFFSET(0x16C9AFC0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLEITEM_OFFSET UNITYSDK_OFFSET(0x16C9C4B0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLESELECT_OFFSET UNITYSDK_OFFSET(0x16C9CAE0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16C9C800)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16C9C910)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16C9C890)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16C9BD10)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16C9BD80)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0x16C9B760)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHTARGETDATELEVEL_OFFSET UNITYSDK_OFFSET(0x16C9B130)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_RESETCLICKMASK_OFFSET UNITYSDK_OFFSET(0x16C9CF10)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9CF60)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16C9D030)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16C9D0C0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16C9D1B0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16C9D240)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16C9D2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInviteRoleWidgetController_TypeDefinitionIndex = 45735;

	class UICinemaInviteRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UICinemaRewardLevelRowWidgetController*>* levelRowList; // 0x2B8
		::Il2CppArray<::Enum_3_77ADBA378EFC2D41>* pointLevels; // 0x2C0
		::Class_2_FEC40CC23204DEDF* _view; // 0x2C8
		::MoleMole::UICinemaInvitePageController* parentPageController; // 0x2D0
		::System::Boolean clickRoleMask; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitRightRewardRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITRIGHTREWARDROW_OFFSET))(this);
		}

		::System::Void RefreshTargetDateLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHTARGETDATELEVEL_OFFSET))(this);
		}

		::System::Void RefreshDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_REFRESHDESC_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Int32 InitFirstSelectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_INITFIRSTSELECTLEVEL_OFFSET))(this);
		}

		::System::Void OnClickRoleItem(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLEITEM_OFFSET))(this, selectIndex);
		}

		::System::Void OnClickRoleSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_ONCLICKROLESELECT_OFFSET))(this);
		}

		::System::Void ExitPrepPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_EXITPREPPAGE_OFFSET))(this);
		}

		::System::Void ResetClickMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER_RESETCLICKMASK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
