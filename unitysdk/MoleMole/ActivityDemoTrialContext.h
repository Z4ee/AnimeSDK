#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityDemoTrialContext_EShowType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1EA8435E138F2E03;

#define MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCB890)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityDemoTrialContext_TypeDefinitionIndex = 41088;

	class ActivityDemoTrialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_1EA8435E138F2E03* notificationNode; // 0x28
		::MoleMole::ActivityDemoTrialContext_EShowType showType; // 0x30
		::System::Boolean isSelect; // 0x34
		::System::Boolean isCanClick; // 0x35
		::System::Int32 gachaScheduleId; // 0x38
		::System::Int32 gachaId; // 0x3C
		::System::Int32 weaponId; // 0x40
		::System::Int32 trialQuestID; // 0x44
		::System::Int32 trialRoleID; // 0x48
		::System::Boolean canDirectTake; // 0x4C
		::System::Boolean muteSound; // 0x4D
		::System::Boolean hideNumImage; // 0x4E
		::System::Boolean isFocus; // 0x4F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
