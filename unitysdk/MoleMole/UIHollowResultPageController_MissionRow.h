#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowResultPageController_MissionRowType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_MISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8CC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_MissionRow_TypeDefinitionIndex = 57533;

	class UIHollowResultPageController_MissionRow : public ::System::Object
	{
	public:
		::System::String* strValue; // 0x10
		::System::Object* Data; // 0x18
		::System::Boolean showComplete; // 0x20
		::MoleMole::UIHollowResultPageController_MissionRowType Type; // 0x24

		::System::Void _ctor(::MoleMole::UIHollowResultPageController_MissionRowType Type, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowResultPageController_MissionRowType, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER_MISSIONROW__CTOR_OFFSET))(this, Type, data);
		}
	};
}
