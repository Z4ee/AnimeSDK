#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D4A7FEECE9D0444E;

#define CLASS_1_09AFF3E21D08A4EE_CLEAR_OFFSET UNITYSDK_OFFSET(0x18DAD1B0)
#define CLASS_1_09AFF3E21D08A4EE_METHOD_1_0169F0DBABDADCA6_OFFSET UNITYSDK_OFFSET(0x18DAD2A0)
#define CLASS_1_09AFF3E21D08A4EE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18DAD230)
#define CLASS_1_09AFF3E21D08A4EE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18DAD460)
#define CLASS_1_09AFF3E21D08A4EE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAD4A0)

inline static constexpr unsigned int Class_1_09AFF3E21D08A4EE_TypeDefinitionIndex = 39884;

class Class_1_09AFF3E21D08A4EE : public ::System::Object
{
public:
	::Class_1_D4A7FEECE9D0444E* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09AFF3E21D08A4EE__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09AFF3E21D08A4EE_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09AFF3E21D08A4EE_ONALLOC_OFFSET))(this);
	}

	::System::Void Method_1_0169F0DBABDADCA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_09AFF3E21D08A4EE_METHOD_1_0169F0DBABDADCA6_OFFSET))(this, a1);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09AFF3E21D08A4EE_ONRECYCLE_OFFSET))(this);
	}
};
