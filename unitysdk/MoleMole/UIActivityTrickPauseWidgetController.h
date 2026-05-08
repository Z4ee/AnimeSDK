#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41ADB30B0929BB2A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_E743398130672E35;
class Class_2_B2303AC82AEE5F2A;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickTechRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETBINDMODULES_OFFSET UNITYSDK_OFFSET(0x13EF2B90)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET UNITYSDK_OFFSET(0x13EF2CC0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13EF0D40)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13EF0DD0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13EF2850)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHTRICKTYPE_OFFSET UNITYSDK_OFFSET(0x13EF28D0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x13EF0EF0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF3130)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x13EF3280)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_1_OFFSET UNITYSDK_OFFSET(0x13EF3330)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13EF33E0)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13EF3470)
#define MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13EF3510)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTrickPauseWidgetController_TypeDefinitionIndex = 61241;

	class UIActivityTrickPauseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B2303AC82AEE5F2A* _view; // 0x2B8
		::Class_1_E743398130672E35* scoreData; // 0x2C0
		::System::Int32 questid; // 0x2C8
		::Enum_3_41ADB30B0929BB2A trickType; // 0x2CC
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* _scoreList; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickTechRowWidgetController*>* _teachList; // 0x2D8
		::MonoUITableScrollV2* BindScrollView; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshTrickType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_REFRESHTRICKTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* GetBindModules()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETBINDMODULES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetNestedListDelegateGoList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER_GETNESTEDLISTDELEGATEGOLIST_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER__REFRESHVIEW_B__10_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTRICKPAUSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
