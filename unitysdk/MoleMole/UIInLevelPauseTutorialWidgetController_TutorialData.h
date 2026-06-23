#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_TUTORIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7110)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetController_TutorialData_TypeDefinitionIndex = 63168;

	class UIInLevelPauseTutorialWidgetController_TutorialData : public ::System::Object
	{
	public:
		::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* data; // 0x10
		::System::Int32 trainQuestID; // 0x18
		::System::Int32 groupId; // 0x1C
		::System::Boolean redPoind; // 0x20
		::System::Boolean getInCurQuest; // 0x21
		::System::Boolean isTrain; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_TUTORIALDATA__CTOR_OFFSET))(this);
		}
	};
}
