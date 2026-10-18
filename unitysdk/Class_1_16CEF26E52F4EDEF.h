#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1294FEF8E985635C;
class Class_1_2F214E1A5E1FAFFB;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Action; }

#define CLASS_1_16CEF26E52F4EDEF_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xBED3FF0)
#define CLASS_1_16CEF26E52F4EDEF_METHOD_1_25E9F7B1D9DCCA08_OFFSET UNITYSDK_OFFSET(0xBED3BE0)
#define CLASS_1_16CEF26E52F4EDEF_METHOD_1_3AC572023154FC7C_OFFSET UNITYSDK_OFFSET(0xBED3B00)
#define CLASS_1_16CEF26E52F4EDEF_METHOD_1_55CBDDF756DAED1D_OFFSET UNITYSDK_OFFSET(0xBED4400)
#define CLASS_1_16CEF26E52F4EDEF_METHOD_1_999F4BD43BA4991F_OFFSET UNITYSDK_OFFSET(0xBED4320)
#define CLASS_1_16CEF26E52F4EDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xBED3AF0)
#define CLASS_1_16CEF26E52F4EDEF__TRYREGISTERACTIVITYCLOSEMESSAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0xBED4470)

inline static constexpr unsigned int Class_1_16CEF26E52F4EDEF_TypeDefinitionIndex = 82108;

class Class_1_16CEF26E52F4EDEF : public ::System::Object
{
public:
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x10
	::RPG::Client::ScheduleTask* NAKELPEMAMH; // 0x18
	::System::Boolean FEFDBMKGABN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3AC572023154FC7C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF_METHOD_1_3AC572023154FC7C_OFFSET))(this);
	}

	::System::Void Method_1_25E9F7B1D9DCCA08(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF_METHOD_1_25E9F7B1D9DCCA08_OFFSET))(this, a1);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::RPG::Client::ScheduleData* Method_1_999F4BD43BA4991F(::Class_1_2F214E1A5E1FAFFB* a1)
	{
		return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::Class_1_2F214E1A5E1FAFFB*))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF_METHOD_1_999F4BD43BA4991F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_55CBDDF756DAED1D(::Class_1_2F214E1A5E1FAFFB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2F214E1A5E1FAFFB*))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF_METHOD_1_55CBDDF756DAED1D_OFFSET))(this, a1);
	}

	::System::Void _TryRegisterActivityCloseMessage_b__3_0(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_16CEF26E52F4EDEF__TRYREGISTERACTIVITYCLOSEMESSAGE_B__3_0_OFFSET))(this, a1);
	}
};
