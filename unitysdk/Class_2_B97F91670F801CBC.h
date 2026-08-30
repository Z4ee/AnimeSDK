#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B97F91670F801CBC_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x18E36CE0)
#define CLASS_2_B97F91670F801CBC__CTOR_OFFSET UNITYSDK_OFFSET(0x18E36CD0)

inline static constexpr unsigned int Class_2_B97F91670F801CBC_TypeDefinitionIndex = 77228;

class Class_2_B97F91670F801CBC : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC__CTOR_OFFSET))(this, a1);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
