#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

#define CLASS_2_89135713DE4EB434_1_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1871BF00)
#define CLASS_2_89135713DE4EB434_1_GET_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x1871C0A0)
#define CLASS_2_89135713DE4EB434_1_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1871BE40)
#define CLASS_2_89135713DE4EB434_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1871C140)
#define CLASS_2_89135713DE4EB434_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1871C0B0)

inline static constexpr unsigned int Class_2_89135713DE4EB434_1_TypeDefinitionIndex = 58687;

class Class_2_89135713DE4EB434_1 : public ::Foundation::Singleton_1<::Class_2_89135713DE4EB434_1*>
{
public:
	::System::Double Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89135713DE4EB434_1__CTOR_OFFSET))(this);
	}

	::System::Double get_Timestamp()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89135713DE4EB434_1_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Single get_DeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89135713DE4EB434_1_GET_DELTATIME_OFFSET))(this);
	}

	::System::Boolean get_IsThreadSafeInWorkThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89135713DE4EB434_1_GET_ISTHREADSAFEINWORKTHREAD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89135713DE4EB434_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
