#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B97F91670F801CBC_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x129B6700)
#define CLASS_2_B97F91670F801CBC__CTOR_OFFSET UNITYSDK_OFFSET(0x129B66F0)

inline static constexpr unsigned int Class_2_B97F91670F801CBC_TypeDefinitionIndex = 71281;

class Class_2_B97F91670F801CBC : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC__CTOR_OFFSET))(this, a1);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_B97F91670F801CBC_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
