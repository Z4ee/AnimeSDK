#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B0AE402A30E726B1;

#define CLASS_1_9F6C5D1A6CE418E6_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D3ED90)
#define CLASS_1_9F6C5D1A6CE418E6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3EDF0)

inline static constexpr unsigned int Class_1_9F6C5D1A6CE418E6_1_TypeDefinitionIndex = 39883;

class Class_1_9F6C5D1A6CE418E6_1 : public ::System::Object
{
public:
	::Class_1_B0AE402A30E726B1* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6C5D1A6CE418E6_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F6C5D1A6CE418E6_1_CLEAR_OFFSET))(this);
	}
};
