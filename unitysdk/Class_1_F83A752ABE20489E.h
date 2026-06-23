#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F83A752ABE20489E__CTOR_OFFSET UNITYSDK_OFFSET(0x18843620)

inline static constexpr unsigned int Class_1_F83A752ABE20489E_TypeDefinitionIndex = 76098;

class Class_1_F83A752ABE20489E : public ::System::Object
{
public:
	::System::UInt64 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F83A752ABE20489E__CTOR_OFFSET))(this, a1, a2);
	}
};
