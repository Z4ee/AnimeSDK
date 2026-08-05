#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_959152A77CDBE985;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UINewbieGuideMissionLockedRewardItemRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168E4CB0)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONSELECTBTNCLICK_OFFSET UNITYSDK_OFFSET(0x168E4DC0)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168E4D40)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168E3E30)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168E4450)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_SETLOCKREWARDPREVIEW_OFFSET UNITYSDK_OFFSET(0x168E44D0)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168E4E10)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168E4E70)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168E4F00)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168E4F90)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168E5020)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideMissionLockedWidgetController_TypeDefinitionIndex = 69944;

	class UINewbieGuideMissionLockedWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_959152A77CDBE985* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UINewbieGuideMissionLockedRewardItemRowWidgetController*>* topItemList; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* itemIconViewList; // 0x2D0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gamepadSpaceList; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetLockRewardPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_SETLOCKREWARDPREVIEW_OFFSET))(this);
		}

		::System::Void OnSelectBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER_ONSELECTBTNCLICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
