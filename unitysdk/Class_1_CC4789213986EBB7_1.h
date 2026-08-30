#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6770BC9DDC5C458C;

#define CLASS_1_CC4789213986EBB7_1_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x1A037B00)
#define CLASS_1_CC4789213986EBB7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A037BD0)

inline static constexpr unsigned int Class_1_CC4789213986EBB7_1_TypeDefinitionIndex = 63926;

class Class_1_CC4789213986EBB7_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC4789213986EBB7_1__CTOR_OFFSET))(this);
	}

	::Class_1_6770BC9DDC5C458C* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_6770BC9DDC5C458C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CC4789213986EBB7_1_METHOD_1_A917AC671DF6CB2D_OFFSET))(this, a1);
	}
};
