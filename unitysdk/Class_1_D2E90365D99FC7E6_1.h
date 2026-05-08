#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D2E90365D99FC7E6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x133D95A0)

inline static constexpr unsigned int Class_1_D2E90365D99FC7E6_1_TypeDefinitionIndex = 63629;

class Class_1_D2E90365D99FC7E6_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2E90365D99FC7E6_1__CTOR_OFFSET))(this);
	}
};
