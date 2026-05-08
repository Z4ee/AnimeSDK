#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915;

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_TUTORIALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D20810)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetController_TutorialData_TypeDefinitionIndex = 55913;

	class UIInLevelPauseTutorialWidgetController_TutorialData : public ::System::Object
	{
	public:
		::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915* data; // 0x10
		::System::Int32 groupId; // 0x18
		::System::Boolean redPoind; // 0x1C
		::System::Boolean getInCurQuest; // 0x1D
		::System::Boolean isTrain; // 0x1E
		::System::Int32 trainQuestID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLER_TUTORIALDATA__CTOR_OFFSET))(this);
		}
	};
}
