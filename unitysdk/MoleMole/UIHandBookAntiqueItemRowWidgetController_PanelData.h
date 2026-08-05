#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x190DBC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAntiqueItemRowWidgetController_PanelData_TypeDefinitionIndex = 63568;

	class UIHandBookAntiqueItemRowWidgetController_PanelData : public ::System::Object
	{
	public:
		::System::String* TargetTxt; // 0x10
		::System::String* Title; // 0x18
		::System::Int32 CurrentCount; // 0x20
		::System::Int32 GotoAccessId; // 0x24
		::Share::ENotificationBadgeType RedSignType; // 0x28
		::System::Boolean IsRate; // 0x2C
		::System::Int32 LockTipsId; // 0x30
		::System::Int32 TotalCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
