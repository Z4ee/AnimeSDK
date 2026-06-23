#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_72679ED639CF4AB4_1;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_BINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1763C090)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_INITROLEINDEX_OFFSET UNITYSDK_OFFSET(0x1763BEA0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1763D920)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1763D9B0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1763D750)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1763DA30)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1763BEF0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1763DAA0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1763DB00)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1763DB60)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1763DBF0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1763DC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRolePoolWidgetController_TypeDefinitionIndex = 66741;

	class UIGachaRolePoolWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_72679ED639CF4AB4_1* _view; // 0x2C0
		::System::Action_1<::MoleMole::UIGachaRolePoolWidgetController*>* _callback; // 0x2C8
		::UnityEngine::Color _origImgColor; // 0x2D0
		::UnityEngine::Color _unselectImgColor; // 0x2E0
		::System::Int32 roleIndex; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRoleIndex(::System::Int32 roleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_INITROLEINDEX_OFFSET))(this, roleIndex);
		}

		::System::Void SetSelect(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETSELECT_OFFSET))(this, select);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void BindCallback(::System::Action_1<::MoleMole::UIGachaRolePoolWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIGachaRolePoolWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_BINDCALLBACK_OFFSET))(this, cb);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
