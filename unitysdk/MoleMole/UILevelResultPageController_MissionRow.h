#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultPageController_MissionRowType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_MISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1783AD70)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController_MissionRow_TypeDefinitionIndex = 47045;

	class UILevelResultPageController_MissionRow : public ::System::Object
	{
	public:
		::System::Object* Data; // 0x10
		::MoleMole::UILevelResultPageController_MissionRowType Type; // 0x18

		::System::Void _ctor(::MoleMole::UILevelResultPageController_MissionRowType Type, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageController_MissionRowType, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_MISSIONROW__CTOR_OFFSET))(this, Type, data);
		}
	};
}
