#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16377430)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchMapRow02WidgetController_Data_TypeDefinitionIndex = 73030;

	class UICoopMatchMapRow02WidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 QuestId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
