#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0C93237CA4E39915;
class Class_2_12BDE7300F0E061C;
class Class_3_A7EA3BF91B53AC5E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_CLEARSELECT_OFFSET UNITYSDK_OFFSET(0x15C10B70)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C10400)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15C10510)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C10490)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C0ED50)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C0F0A0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15C0F1A0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x15C0EF40)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x15C10C20)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_SHOWITEM_OFFSET UNITYSDK_OFFSET(0x15C10A10)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C10C70)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C10D50)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15C10DE0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C10E10)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C10EA0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C10F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetController_TypeDefinitionIndex = 63870;

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

		::System::Void RefreshView(::Class_3_A7EA3BF91B53AC5E* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A7EA3BF91B53AC5E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
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
