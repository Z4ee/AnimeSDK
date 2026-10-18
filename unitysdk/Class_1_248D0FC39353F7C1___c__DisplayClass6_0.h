#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace System { class Action; }

#define CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB15CF60)
#define CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS6_0__REGISTERSCHEDULECLOSEWATCH_B__0_OFFSET UNITYSDK_OFFSET(0xB15DE20)

inline static constexpr unsigned int Class_1_248D0FC39353F7C1___c__DisplayClass6_0_TypeDefinitionIndex = 66714;

class Class_1_248D0FC39353F7C1___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Action* callback; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _RegisterScheduleCloseWatch_b__0(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_248D0FC39353F7C1___C__DISPLAYCLASS6_0__REGISTERSCHEDULECLOSEWATCH_B__0_OFFSET))(this, a1);
	}
};
