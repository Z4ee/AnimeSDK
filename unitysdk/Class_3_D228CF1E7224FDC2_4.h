#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_53B7DA6B50203A3E.h"

#define CLASS_3_D228CF1E7224FDC2_4_METHOD_3_9E380911998A73AF_OFFSET UNITYSDK_OFFSET(0x111A9840)
#define CLASS_3_D228CF1E7224FDC2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x111A9830)

inline static constexpr unsigned int Class_3_D228CF1E7224FDC2_4_TypeDefinitionIndex = 69032;

class Class_3_D228CF1E7224FDC2_4 : public ::Class_2_53B7DA6B50203A3E
{
public:
	::System::UInt32 Field_3_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D228CF1E7224FDC2_4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9E380911998A73AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D228CF1E7224FDC2_4_METHOD_3_9E380911998A73AF_OFFSET))(this);
	}
};
