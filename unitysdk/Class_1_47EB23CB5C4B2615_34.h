#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91C9195F7AC754D8;
class Class_1_D031E8F06825AB4F;

#define CLASS_1_47EB23CB5C4B2615_34_METHOD_1_8894E534FED3129C_1_OFFSET UNITYSDK_OFFSET(0x15FD7C10)
#define CLASS_1_47EB23CB5C4B2615_34_METHOD_1_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x15FD7AC0)
#define CLASS_1_47EB23CB5C4B2615_34_START_OFFSET UNITYSDK_OFFSET(0x15FD7A40)
#define CLASS_1_47EB23CB5C4B2615_34_STOP_OFFSET UNITYSDK_OFFSET(0x15FD7A80)
#define CLASS_1_47EB23CB5C4B2615_34__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD7D60)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_34_TypeDefinitionIndex = 75196;

class Class_1_47EB23CB5C4B2615_34 : public ::System::Object
{
public:
	::Class_1_91C9195F7AC754D8* Field_1_0; // 0x10
	::Class_1_D031E8F06825AB4F* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_34__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_34_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_34_STOP_OFFSET))(this);
	}

	::System::Void Method_1_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_34_METHOD_1_8894E534FED3129C_OFFSET))(this);
	}

	::System::Void Method_1_8894E534FED3129C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_34_METHOD_1_8894E534FED3129C_1_OFFSET))(this);
	}
};
