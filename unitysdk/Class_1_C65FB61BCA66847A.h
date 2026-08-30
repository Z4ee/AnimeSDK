#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelTriggerInfo; }

#define CLASS_1_C65FB61BCA66847A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF86600)

inline static constexpr unsigned int Class_1_C65FB61BCA66847A_TypeDefinitionIndex = 42008;

class Class_1_C65FB61BCA66847A : public ::System::Object
{
public:
	::RPG::GameCore::LevelTriggerInfo* BIBDONOMAHG; // 0x10
	::System::Boolean FHMMAOOCOPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C65FB61BCA66847A__CTOR_OFFSET))(this);
	}
};
