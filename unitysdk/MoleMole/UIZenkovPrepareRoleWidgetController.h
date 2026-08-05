#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_186;
class Class_1_1685EC66FBD28897;
class Class_2_CD4366C5A9AA9BC8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_CLEARROLE_OFFSET UNITYSDK_OFFSET(0x162EFD40)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GETWEAPONSLOTRECT_OFFSET UNITYSDK_OFFSET(0x162F00E0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162EF920)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162EF990)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162EFA30)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_PLAYWEAPONHIGHLIGHTRED_OFFSET UNITYSDK_OFFSET(0x162F03D0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x162EFDE0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x162EFE90)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLESELECTED_OFFSET UNITYSDK_OFFSET(0x162F0180)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLE_OFFSET UNITYSDK_OFFSET(0x162EFC90)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET UNITYSDK_OFFSET(0x162F0470)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x162F0300)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET UNITYSDK_OFFSET(0x162F0230)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SHOWLOCKTIPS_OFFSET UNITYSDK_OFFSET(0x162F0540)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONDURABILITY_OFFSET UNITYSDK_OFFSET(0x162F0030)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONSLOT_OFFSET UNITYSDK_OFFSET(0x162EFF40)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162F05E0)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162F0640)
#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162F06E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPrepareRoleWidgetController_TypeDefinitionIndex = 83780;

	class UIZenkovPrepareRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_CD4366C5A9AA9BC8* get__viewModel()
		{
			return ((::Class_2_CD4366C5A9AA9BC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRole(::System::Int32 avatarId, ::System::Boolean isUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLE_OFFSET))(this, avatarId, isUp);
		}

		::System::Void ClearRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_CLEARROLE_OFFSET))(this);
		}

		::System::Void SetDisabled(::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETDISABLED_OFFSET))(this, disabled);
		}

		::System::Void SetLockState(::System::Boolean disabled, ::System::Boolean canUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETLOCKSTATE_OFFSET))(this, disabled, canUnlock);
		}

		::System::Void UpdateWeaponSlot(::Class_1_1685EC66FBD28897* viewData, ::Class_0_16E4307DCC419505_186* dropTarget, ::System::String* emptyBgPath, ::System::String* emptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1685EC66FBD28897*, ::Class_0_16E4307DCC419505_186*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONSLOT_OFFSET))(this, viewData, dropTarget, emptyBgPath, emptyLabel);
		}

		::System::Void UpdateWeaponDurability(::System::Int32 current, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_UPDATEWEAPONDURABILITY_OFFSET))(this, current, max);
		}

		::UnityEngine::RectTransform* GetWeaponSlotRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_GETWEAPONSLOTRECT_OFFSET))(this);
		}

		::System::Void SetRoleSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETROLESELECTED_OFFSET))(this, selected);
		}

		::System::Void SetWeaponSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONSELECTED_OFFSET))(this, selected);
		}

		::System::Void SetWeaponRecommendHighlight(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONRECOMMENDHIGHLIGHT_OFFSET))(this, show);
		}

		::System::Void PlayWeaponHighlightRed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_PLAYWEAPONHIGHLIGHTRED_OFFSET))(this);
		}

		::System::Void SetWeaponMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SETWEAPONMASKSTATE_OFFSET))(this, active);
		}

		::System::Void ShowLockTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_SHOWLOCKTIPS_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
