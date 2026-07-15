#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_240DB2142F5C3FD4;

#define CLASS_1_6873DE750CBDEF35_EXECUTE_OFFSET UNITYSDK_OFFSET(0x190DA050)
#define CLASS_1_6873DE750CBDEF35__CTOR_OFFSET UNITYSDK_OFFSET(0x190DA040)

inline static constexpr unsigned int Class_1_6873DE750CBDEF35_TypeDefinitionIndex = 35647;

class Class_1_6873DE750CBDEF35 : public ::System::Object
{
public:
	::Class_3_240DB2142F5C3FD4* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::Class_3_240DB2142F5C3FD4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_240DB2142F5C3FD4*))((::PBYTE)hIl2Cpp + CLASS_1_6873DE750CBDEF35__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6873DE750CBDEF35_EXECUTE_OFFSET))(this);
	}
};
