#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_D839DBCC5FDBFDB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0DB4F0)

inline static constexpr unsigned int Class_3_D839DBCC5FDBFDB5_TypeDefinitionIndex = 83116;

class Class_3_D839DBCC5FDBFDB5 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt64 Field_3_0; // 0x10
	::System::UInt64 Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D839DBCC5FDBFDB5__CTOR_OFFSET))(this);
	}
};
