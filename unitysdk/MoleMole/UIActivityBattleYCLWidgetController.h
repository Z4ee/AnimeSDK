#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_DEED5AAD1F9518EE_2;
namespace MoleMole { class UIActivityBattleYCLWidgetController_Context; }
namespace MoleMole { class UIActivityTeamTrialListRowWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16452F90)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16452AB0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONFADEINFINISH_OFFSET UNITYSDK_OFFSET(0x16453070)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONSELECTQUEST_OFFSET UNITYSDK_OFFSET(0x16453C30)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16452C30)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16452CB0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x16453250)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_TRYPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x16453770)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_UNLOCKANIMFINISH_OFFSET UNITYSDK_OFFSET(0x16453BE0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16453E10)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16453EF0)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16453F80)
#define MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16454010)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLWidgetController_TypeDefinitionIndex = 83432;

	class UIActivityBattleYCLWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DEED5AAD1F9518EE_2* _view; // 0x2C0
		::MoleMole::UIActivityBattleYCLWidgetController_Context* _context; // 0x2C8
		::System::Int32 _activityID; // 0x2D0
		::Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20 _activityBattleType; // 0x2D4
		::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970 _activityBattleSubType; // 0x2D8
		::System::Int32 selectQuestID; // 0x2DC
		::System::Boolean _waitFadeInFinish; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIActivityTeamTrialListRowWidgetController_Data*>* _questDataList; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RefreshWidget(::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970 activityBattleSubType, ::System::Int32 targetQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, activityBattleSubType, targetQuestID);
		}

		::System::Void OnFadeInFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONFADEINFINISH_OFFSET))(this);
		}

		::System::Void TryPlayUnlockAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_TRYPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void UnlockAnimFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_UNLOCKANIMFINISH_OFFSET))(this);
		}

		::System::Void OnSelectQuest(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER_ONSELECTQUEST_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
