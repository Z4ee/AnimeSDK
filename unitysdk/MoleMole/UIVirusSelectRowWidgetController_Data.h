#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVirusCollectWidgetController_CollectTabType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVIRUSSELECTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1089A940)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusSelectRowWidgetController_Data_TypeDefinitionIndex = 45140;

	class UIVirusSelectRowWidgetController_Data : public ::System::Object
	{
	public:
		::MoleMole::UIVirusCollectWidgetController_CollectTabType tabType; // 0x10
		::System::Int32 id; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSELECTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
