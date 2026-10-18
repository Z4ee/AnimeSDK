#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91C9195F7AC754D8;
class Class_1_D031E8F06825AB4F;

#define CLASS_1_47EB23CB5C4B2615_43_METHOD_1_DAEB67F34AF80609_1_OFFSET UNITYSDK_OFFSET(0xB429A60)
#define CLASS_1_47EB23CB5C4B2615_43_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xB429980)
#define CLASS_1_47EB23CB5C4B2615_43_START_OFFSET UNITYSDK_OFFSET(0xB429900)
#define CLASS_1_47EB23CB5C4B2615_43_STOP_OFFSET UNITYSDK_OFFSET(0xB429940)
#define CLASS_1_47EB23CB5C4B2615_43__CTOR_OFFSET UNITYSDK_OFFSET(0xB429B40)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_43_TypeDefinitionIndex = 79224;

class Class_1_47EB23CB5C4B2615_43 : public ::System::Object
{
public:
	::Class_1_D031E8F06825AB4F* BBGCKINIMBH; // 0x10
	::Class_1_91C9195F7AC754D8* NMLAOCMPPPP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_43__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_43_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_43_STOP_OFFSET))(this);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_43_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_DAEB67F34AF80609_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_43_METHOD_1_DAEB67F34AF80609_1_OFFSET))(this);
	}
};
