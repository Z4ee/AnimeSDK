#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_403;
class Class_2_78F97BB2BFE48D6C;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_BINDNEWBADGE_OFFSET UNITYSDK_OFFSET(0x16AB1B20)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_CLEARCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16AB1020)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_CLEARNEWBADGE_OFFSET UNITYSDK_OFFSET(0x16AB1390)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16AB18D0)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16AB1270)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16AB1560)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16AB1300)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16AB1080)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16AB1A80)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_SETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16AB0D80)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_SHOWROW_OFFSET UNITYSDK_OFFSET(0x16AB16F0)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_UPDATECOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x16AB0E10)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB1D70)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16AB1D80)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16AB1D90)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16AB1E20)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16AB1EC0)
#define MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16AB1F50)

namespace MoleMole
{
	inline static constexpr unsigned int UISpecialPoseRowWidgetController_TypeDefinitionIndex = 84182;

	class UISpecialPoseRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_78F97BB2BFE48D6C* _view; // 0x2F0
		::Class_2_208CC9941471731A_403* _actionConfig; // 0x2F8
		::System::Single _countdownTotal; // 0x300
		::System::Single _countdownRemaining; // 0x304
		::System::Boolean _isCountingDown; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetCountdown(::System::Single totalDuration, ::System::Single remainingTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_SETCOUNTDOWN_OFFSET))(this, totalDuration, remainingTime);
		}

		::System::Void ClearCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_CLEARCOUNTDOWN_OFFSET))(this);
		}

		::System::Void UpdateCountdownUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_UPDATECOUNTDOWNUI_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void ShowRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_SHOWROW_OFFSET))(this);
		}

		::System::Void BindNewBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_BINDNEWBADGE_OFFSET))(this);
		}

		::System::Void ClearNewBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER_CLEARNEWBADGE_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALPOSEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
