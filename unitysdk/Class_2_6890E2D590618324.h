#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_7.h"
#include "unitysdk/Enum_3_1839AA83EB3B23DA.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_2_6890E2D590618324_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1E4CCFD0)
#define CLASS_2_6890E2D590618324_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E4CCFC0)
#define CLASS_2_6890E2D590618324__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CD020)

inline static constexpr unsigned int Class_2_6890E2D590618324_TypeDefinitionIndex = 29210;

class Class_2_6890E2D590618324 : public ::Class_1_43BD383C98B4C0C5_7
{
public:
	::System::Single Field_2_0; // 0x10
	::Struct_2_E614D3B245F96744 Field_2_7; // 0x14
	::System::Single Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6890E2D590618324__CTOR_OFFSET))(this);
	}

	::Enum_3_1839AA83EB3B23DA Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_1839AA83EB3B23DA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6890E2D590618324_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6890E2D590618324_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}
};
