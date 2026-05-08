#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_85037376A06481AA;
class Class_2_E621E51D351EB960;
class Class_3_B34301746BFA36C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_BTNENTRYOBJ_OFFSET UNITYSDK_OFFSET(0x12382DE0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x123834B0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCLICKENTRY_OFFSET UNITYSDK_OFFSET(0x123835C0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12383AA0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12383B30)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12382E10)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12383A20)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_REFRESHCARDS_OFFSET UNITYSDK_OFFSET(0x12382FA0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_TELEPORTTONESTLEVEL_OFFSET UNITYSDK_OFFSET(0x12383800)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12383BB0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12383C10)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12383CA0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12383D30)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12383DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssCardSuitEntryWidgetController_TypeDefinitionIndex = 38990;

	class UIAbyssCardSuitEntryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_85037376A06481AA* _view; // 0x2B8
		::System::Boolean m_inited; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* m_list; // 0x2C8
		::Class_3_B34301746BFA36C2* m_curSelectAbyssCardBuild; // 0x2D0
		::Class_2_E621E51D351EB960* m_model; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_BtnEntryObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_BTNENTRYOBJ_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshCards(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_REFRESHCARDS_OFFSET))(this, args);
		}

		::System::Void OnClickEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCLICKENTRY_OFFSET))(this);
		}

		::System::Void TelePortToNestLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_TELEPORTTONESTLEVEL_OFFSET))(this);
		}

		::Class_2_E621E51D351EB960* get_Model()
		{
			return ((::Class_2_E621E51D351EB960*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
