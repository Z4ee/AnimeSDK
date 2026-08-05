#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UINounDetailPanelWidgetController_HeightState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1756A7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController_Data_TypeDefinitionIndex = 55924;

	class UINounDetailPanelWidgetController_Data : public ::System::Object
	{
	public:
		::System::String* SourceText; // 0x10
		::System::Action_1<::MoleMole::UINounDetailPanelWidgetController_Data*>* OnCollapsedHeaderClick; // 0x18
		::System::String* Title; // 0x20
		::System::String* DetailText; // 0x28
		::MoleMole::UINounDetailPanelWidgetController_HeightState InitialHeightState; // 0x30
		::System::Int32 TermId; // 0x34
		::System::Boolean CurrentVisible; // 0x38
		::System::Boolean IsDeactivated; // 0x39
		::System::Boolean IsExpanded; // 0x3A
		::MoleMole::UINounDetailPanelWidgetController_HeightState CurrentHeightState; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
