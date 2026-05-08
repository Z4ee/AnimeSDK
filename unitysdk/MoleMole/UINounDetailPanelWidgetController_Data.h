#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UINounDetailPanelWidgetController_HeightState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C83520)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController_Data_TypeDefinitionIndex = 82396;

	class UINounDetailPanelWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* SourceText; // 0x10
		::System::String* DetailText; // 0x18
		::System::String* Title; // 0x20
		::MoleMole::UINounDetailPanelWidgetController_HeightState CurrentHeightState; // 0x28
		::MoleMole::UINounDetailPanelWidgetController_HeightState InitialHeightState; // 0x2C
		::System::Int32 TermId; // 0x30
		::System::Boolean IsExpanded; // 0x34
		::System::Boolean CurrentVisible; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
