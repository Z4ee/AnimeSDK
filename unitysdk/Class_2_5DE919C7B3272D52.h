#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;

#define CLASS_2_5DE919C7B3272D52_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x967A770)
#define CLASS_2_5DE919C7B3272D52__CTOR_OFFSET UNITYSDK_OFFSET(0x967A810)

inline static constexpr unsigned int Class_2_5DE919C7B3272D52_TypeDefinitionIndex = 71267;

class Class_2_5DE919C7B3272D52 : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::System::Nullable_1<::System::Int32> Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DE919C7B3272D52__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_5DE919C7B3272D52_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
