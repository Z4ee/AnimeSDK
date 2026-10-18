#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_215.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_B60FBEECFFB607DC_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0xB7288A0)
#define CLASS_2_B60FBEECFFB607DC__CTOR_OFFSET UNITYSDK_OFFSET(0xB728940)

inline static constexpr unsigned int Class_2_B60FBEECFFB607DC_TypeDefinitionIndex = 77674;

class Class_2_B60FBEECFFB607DC : public ::Class_1_43BD383C98B4C0C5_215
{
public:
	::System::Collections::Generic::Queue_1<::System::Int32>* OGFDEMELINC; // 0x10
	::System::Nullable_1<::System::Int32> MCLLALGABAB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B60FBEECFFB607DC__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_B60FBEECFFB607DC_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
