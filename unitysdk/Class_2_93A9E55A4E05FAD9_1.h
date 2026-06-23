#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_10.h"
#include "unitysdk/Enum_3_1839AA83EB3B23DA.h"

#define CLASS_2_93A9E55A4E05FAD9_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E4320F0)
#define CLASS_2_93A9E55A4E05FAD9_1_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1E432100)
#define CLASS_2_93A9E55A4E05FAD9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E432180)

inline static constexpr unsigned int Class_2_93A9E55A4E05FAD9_1_TypeDefinitionIndex = 29090;

class Class_2_93A9E55A4E05FAD9_1 : public ::Class_1_43BD383C98B4C0C5_10
{
public:
	::System::Single Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_1__CTOR_OFFSET))(this);
	}

	::Enum_3_1839AA83EB3B23DA Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_1839AA83EB3B23DA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_1_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}
};
