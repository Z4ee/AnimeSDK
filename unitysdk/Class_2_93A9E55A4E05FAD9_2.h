#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_10.h"
#include "unitysdk/Enum_3_1839AA83EB3B23DA.h"

#define CLASS_2_93A9E55A4E05FAD9_2_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1DEFBC90)
#define CLASS_2_93A9E55A4E05FAD9_2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1DEFBC80)
#define CLASS_2_93A9E55A4E05FAD9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFBCE0)

inline static constexpr unsigned int Class_2_93A9E55A4E05FAD9_2_TypeDefinitionIndex = 29024;

class Class_2_93A9E55A4E05FAD9_2 : public ::Class_1_43BD383C98B4C0C5_10
{
public:
	::System::Single Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_2__CTOR_OFFSET))(this);
	}

	::Enum_3_1839AA83EB3B23DA Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_1839AA83EB3B23DA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93A9E55A4E05FAD9_2_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}
};
