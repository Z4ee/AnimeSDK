#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_119;
class Class_1_0A3B9FD0FE703FDC;

#define CLASS_1_3DB2A09292C36E36_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C71340)
#define CLASS_1_3DB2A09292C36E36__CTOR_OFFSET UNITYSDK_OFFSET(0x18C713E0)

inline static constexpr unsigned int Class_1_3DB2A09292C36E36_TypeDefinitionIndex = 40129;

class Class_1_3DB2A09292C36E36 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_119* Field_1_0; // 0x10
	::Class_1_0A3B9FD0FE703FDC* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB2A09292C36E36__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB2A09292C36E36_CLEAR_OFFSET))(this);
	}
};
