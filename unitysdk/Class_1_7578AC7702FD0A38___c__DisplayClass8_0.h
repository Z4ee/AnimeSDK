#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7578AC7702FD0A38;
class Class_2_6D901FCC8D1C685B;
namespace RPG::Client { class ScheduleData; }

#define CLASS_1_7578AC7702FD0A38___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95098F0)
#define CLASS_1_7578AC7702FD0A38___C__DISPLAYCLASS8_0___ONSCHEDULECONFIGREFRESHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x9509D10)

inline static constexpr unsigned int Class_1_7578AC7702FD0A38___c__DisplayClass8_0_TypeDefinitionIndex = 56630;

class Class_1_7578AC7702FD0A38___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_7578AC7702FD0A38* __4__this; // 0x10
	::Class_2_6D901FCC8D1C685B* round; // 0x18
	::System::UInt32 activityModuleID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnScheduleConfigRefreshFinish_b__0(::RPG::Client::ScheduleData* data)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_7578AC7702FD0A38___C__DISPLAYCLASS8_0___ONSCHEDULECONFIGREFRESHFINISH_B__0_OFFSET))(this, data);
	}
};
