#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9398F4679171AA9C;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EFCA20)
#define MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EFCAB0)
#define MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x10EFCB30)
#define MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFD1D0)
#define MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EFD230)
#define MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EFD2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusLevelUpDetailsRowWidgetController_TypeDefinitionIndex = 87153;

	class UIVirusLevelUpDetailsRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_9398F4679171AA9C* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::Int32 level, ::System::Int32 middleKeyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, level, middleKeyID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPDETAILSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
