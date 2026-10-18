#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16CEF26E52F4EDEF;
namespace RPG::Client { class ScheduleData; }
namespace System { class Action; }

#define CLASS_1_16CEF26E52F4EDEF___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBED3FE0)
#define CLASS_1_16CEF26E52F4EDEF___C__DISPLAYCLASS2_0__TRYREGISTERSCHEDULEOPENCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xBED44C0)

inline static constexpr unsigned int Class_1_16CEF26E52F4EDEF___c__DisplayClass2_0_TypeDefinitionIndex = 82109;

class Class_1_16CEF26E52F4EDEF___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_16CEF26E52F4EDEF* __4__this; // 0x10
	::System::Action* callback; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryRegisterScheduleOpenCallback_b__0(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF___C__DISPLAYCLASS2_0__TRYREGISTERSCHEDULEOPENCALLBACK_B__0_OFFSET))(this, a1);
	}
};
