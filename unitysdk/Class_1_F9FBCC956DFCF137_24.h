#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;

#define CLASS_1_F9FBCC956DFCF137_24_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBCA3A90)
#define CLASS_1_F9FBCC956DFCF137_24__CTOR_OFFSET UNITYSDK_OFFSET(0xBCA3A80)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_24_TypeDefinitionIndex = 75393;

class Class_1_F9FBCC956DFCF137_24 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x10

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_24__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_24_EXECUTE_OFFSET))(this);
	}
};
