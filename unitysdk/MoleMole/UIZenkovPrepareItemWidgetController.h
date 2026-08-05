#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_186;
class Class_1_1685EC66FBD28897;
class Class_2_7CE61511C115303B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0x14DA6030)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14DA5C60)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14DA5CD0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14DA5D70)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_PLAYHIGHLIGHTRED_OFFSET UNITYSDK_OFFSET(0x14DA62C0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETINFOTEXT_OFFSET UNITYSDK_OFFSET(0x14DA6430)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0x14DA6360)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETRECOMMENDHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x14DA61F0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x14DA6120)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_UPDATESLOTDATA_OFFSET UNITYSDK_OFFSET(0x14DA5F30)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA64E0)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14DA6540)
#define MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14DA65E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPrepareItemWidgetController_TypeDefinitionIndex = 40625;

	class UIZenkovPrepareItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_7CE61511C115303B* get__viewModel()
		{
			return ((::Class_2_7CE61511C115303B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void UpdateSlotData(::Class_1_1685EC66FBD28897* viewData, ::System::Boolean isLocked, ::Class_0_16E4307DCC419505_186* dropTarget, ::System::String* emptyBgPath, ::System::String* emptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1685EC66FBD28897*, ::System::Boolean, ::Class_0_16E4307DCC419505_186*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_UPDATESLOTDATA_OFFSET))(this, viewData, isLocked, dropTarget, emptyBgPath, emptyLabel);
		}

		::System::Void ClearSlot(::Class_0_16E4307DCC419505_186* dropTarget, ::System::String* emptyBgPath, ::System::String* emptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_186*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_CLEARSLOT_OFFSET))(this, dropTarget, emptyBgPath, emptyLabel);
		}

		::System::Void SetSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, selected);
		}

		::System::Void SetRecommendHighlight(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETRECOMMENDHIGHLIGHT_OFFSET))(this, show);
		}

		::System::Void PlayHighlightRed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_PLAYHIGHLIGHTRED_OFFSET))(this);
		}

		::System::Void SetMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetInfoText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER_SETINFOTEXT_OFFSET))(this, text);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
