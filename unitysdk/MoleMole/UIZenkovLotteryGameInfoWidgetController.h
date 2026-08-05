#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_7BEEB90214042948_15;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10AF7190)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x10AF72A0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10AF7220)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10AF7130)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF7410)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10AF7420)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x10AF74B0)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10AF7550)
#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10AF75E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameInfoWidgetController_TypeDefinitionIndex = 62740;

	class UIZenkovLotteryGameInfoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_15* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
