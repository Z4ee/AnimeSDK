#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6B9FBCAC09C5F877;

#define CLASS_1_E03597A69ECA0B85_EQUALS_OFFSET UNITYSDK_OFFSET(0x183BF8F0)
#define CLASS_1_E03597A69ECA0B85__CTOR_OFFSET UNITYSDK_OFFSET(0x183BF9B0)

inline static constexpr unsigned int Class_1_E03597A69ECA0B85_TypeDefinitionIndex = 51805;

class Class_1_E03597A69ECA0B85 : public ::System::Object
{
public:
	::Class_1_6B9FBCAC09C5F877* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E03597A69ECA0B85__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_E03597A69ECA0B85* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E03597A69ECA0B85*))((::PBYTE)hIl2Cpp + CLASS_1_E03597A69ECA0B85_EQUALS_OFFSET))(this, a1);
	}
};
