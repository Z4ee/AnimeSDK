#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_343;

#define CLASS_1_FD26DBB29540C9AE_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11D33D20)
#define CLASS_1_FD26DBB29540C9AE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D33CE0)

inline static constexpr unsigned int Class_1_FD26DBB29540C9AE_TypeDefinitionIndex = 79745;

class Class_1_FD26DBB29540C9AE : public ::System::Object
{
public:
	::Class_1_5DA2E7556103D5A3_343* Field_1_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD26DBB29540C9AE__CTOR_OFFSET))(this, a1);
	}

	::Class_1_5DA2E7556103D5A3_343* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5DA2E7556103D5A3_343*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD26DBB29540C9AE_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
