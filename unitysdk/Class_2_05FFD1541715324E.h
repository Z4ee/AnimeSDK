#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F9417780723166C.h"
#include "unitysdk/Enum_3_697B1639EB957863.h"

#define CLASS_2_05FFD1541715324E__CTOR_OFFSET UNITYSDK_OFFSET(0x1440F030)

inline static constexpr unsigned int Class_2_05FFD1541715324E_TypeDefinitionIndex = 68291;

class Class_2_05FFD1541715324E : public ::Class_1_4F9417780723166C
{
public:
	::Enum_3_697B1639EB957863 Field_2_3; // 0x20
	::System::Boolean Field_2_1; // 0x24
	::System::Boolean Field_2_2; // 0x25
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05FFD1541715324E__CTOR_OFFSET))(this);
	}
};
