#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_20F8961AD4210E92;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CLEARROLE_OFFSET UNITYSDK_OFFSET(0x11E42A90)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E42480)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E424F0)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E42590)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETROLE_OFFSET UNITYSDK_OFFSET(0x11E429E0)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET UNITYSDK_OFFSET(0x11E42C00)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x11E42B30)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET UNITYSDK_OFFSET(0x11E42CD0)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E42D80)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11E42DE0)
#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11E42E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagRoleWidgetController_TypeDefinitionIndex = 52276;

	class UIZenkovBagRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_20F8961AD4210E92* get__viewModel()
		{
			return ((::Class_2_20F8961AD4210E92*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRole(::System::Int32 avatarId, ::System::Boolean isUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETROLE_OFFSET))(this, avatarId, isUp);
		}

		::System::Void ClearRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CLEARROLE_OFFSET))(this);
		}

		::System::Void SetWeaponRecommendHighlight(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET))(this, show);
		}

		::System::Void SetWeaponMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetWeaponSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET))(this, selected);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
