#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_48D56DACBE4271BC;
class Class_2_79AE422BA06F6D26_15;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x16173050)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDTOBASELEVEL_OFFSET UNITYSDK_OFFSET(0x161730C0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x16173C80)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x16172AB0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16172F40)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16172FD0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16172B50)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16172ED0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_REFRESHLEVEL_1_OFFSET UNITYSDK_OFFSET(0x16173AC0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x16173360)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16173D40)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x16173EF0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16173F80)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16174010)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x161740A0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16174130)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianLevelWidgetController_TypeDefinitionIndex = 40473;

	class UISuibianLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_15* _view; // 0x2C0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* textList; // 0x2C8
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* effectList; // 0x2D0
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* effectBGList; // 0x2D8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindNotification(::Share::ENotificationBadgeType type)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDNOTIFICATION_OFFSET))(this, type);
		}

		::System::Void BindToBaseLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDTOBASELEVEL_OFFSET))(this);
		}

		::System::Void RefreshLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_REFRESHLEVEL_OFFSET))(this, level);
		}

		::System::Void RefreshLevel_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_REFRESHLEVEL_1_OFFSET))(this);
		}

		::System::Void BindViewCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET))(this, callback);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
