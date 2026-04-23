#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_452E919D64CB8CCD;

#define CLASS_1_9A3A8BCA46EF129A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFDFFB0)
#define CLASS_1_9A3A8BCA46EF129A__CTOR_OFFSET UNITYSDK_OFFSET(0xAFDFF60)

inline static constexpr unsigned int Class_1_9A3A8BCA46EF129A_TypeDefinitionIndex = 64113;

class Class_1_9A3A8BCA46EF129A : public ::System::Object
{
public:
	::Class_1_452E919D64CB8CCD* Field_1_1; // 0x10
	::Class_1_452E919D64CB8CCD* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A3A8BCA46EF129A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A3A8BCA46EF129A_DISPOSE_OFFSET))(this);
	}
};
