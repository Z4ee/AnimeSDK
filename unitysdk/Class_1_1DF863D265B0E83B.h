#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1DF863D265B0E83B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BAEE0)

inline static constexpr unsigned int Class_1_1DF863D265B0E83B_TypeDefinitionIndex = 14479;

class Class_1_1DF863D265B0E83B : public ::System::Object
{
public:
	::System::DateTime Field_1_2; // 0x10
	::System::DateTime Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF863D265B0E83B__CTOR_OFFSET))(this);
	}
};
