#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0C93237CA4E39915;
class Class_2_12BDE7300F0E061C;
class Class_3_5F93B9EE9043C5B6_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x160C9A90)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160C9350)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x160C9460)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160C93E0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160C7CC0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160C8010)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x160C8110)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x160C7EB0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x160C9B40)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SHOWITEM_OFFSET UNITYSDK_OFFSET(0x160C9930)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160C9B90)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160C9C70)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x160C9D00)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160C9D30)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160C9DC0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160C9E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetController_TypeDefinitionIndex = 75429;

	class UIRecommendTypeSuitRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_COUNT = 0x3; // 0x0
		::Class_2_0C93237CA4E39915* _view; // 0x2C0
		::MoleMole::UIRoleEquipRecommendPopContext_1<::Class_2_12BDE7300F0E061C*>* _context; // 0x2C8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _suitRootList; // 0x2D0
		::MoleMole::UIGeneralFilterItemRowWidgetController* _itemTypeRowWidgetController; // 0x2D8
		::System::Boolean needSelect; // 0x2E0
		::System::Action* _itemClickAct; // 0x2E8
		::System::Action_1<::System::Boolean>* _onSuitFocusChange; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void RefreshView(::Class_3_5F93B9EE9043C5B6_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F93B9EE9043C5B6_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void SetEmpty(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, root);
		}

		::System::Void ShowItem(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SHOWITEM_OFFSET))(this, root);
		}

		::System::Void ClearSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_CLEARSELECT_OFFSET))(this);
		}

		::System::Void SetItemClickedAct(::System::Action* itemClickAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickAct);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
