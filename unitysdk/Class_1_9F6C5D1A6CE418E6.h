#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5748A036B5628CB0;

#define CLASS_1_9F6C5D1A6CE418E6_CLEAR_OFFSET UNITYSDK_OFFSET(0x187AA9B0)
#define CLASS_1_9F6C5D1A6CE418E6__CTOR_OFFSET UNITYSDK_OFFSET(0x187AAA10)

inline static constexpr unsigned int Class_1_9F6C5D1A6CE418E6_TypeDefinitionIndex = 40695;

class Class_1_9F6C5D1A6CE418E6 : public ::System::Object
{
public:
	::Class_1_5748A036B5628CB0* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6C5D1A6CE418E6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6C5D1A6CE418E6_CLEAR_OFFSET))(this);
	}
};
