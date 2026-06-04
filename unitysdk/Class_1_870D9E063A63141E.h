#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07D84007721CF2C3;
class Class_3_D878B15D5D5D4685;

#define CLASS_1_870D9E063A63141E__CTOR_OFFSET UNITYSDK_OFFSET(0x13B9A370)

inline static constexpr unsigned int Class_1_870D9E063A63141E_TypeDefinitionIndex = 53113;

class Class_1_870D9E063A63141E : public ::System::Object
{
public:
	::Class_1_07D84007721CF2C3* Field_1_0; // 0x10
	::Class_3_D878B15D5D5D4685* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt64 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_870D9E063A63141E__CTOR_OFFSET))(this);
	}
};
