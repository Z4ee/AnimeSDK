#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E80F8ECB5AFCA7CC_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x9992210)
#define CLASS_2_E80F8ECB5AFCA7CC__CTOR_OFFSET UNITYSDK_OFFSET(0x998EBE0)

inline static constexpr unsigned int Class_2_E80F8ECB5AFCA7CC_TypeDefinitionIndex = 71276;

class Class_2_E80F8ECB5AFCA7CC : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E80F8ECB5AFCA7CC__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_E80F8ECB5AFCA7CC_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
