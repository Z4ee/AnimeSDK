#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_976E7EB4180DA020__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5A470)

inline static constexpr unsigned int Class_3_976E7EB4180DA020_TypeDefinitionIndex = 83132;

class Class_3_976E7EB4180DA020 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::Int32 Field_3_0; // 0x10
	::System::UInt32 Field_3_3; // 0x14
	::System::UInt32 Field_3_2; // 0x18
	::System::UInt32 Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_976E7EB4180DA020__CTOR_OFFSET))(this);
	}
};
