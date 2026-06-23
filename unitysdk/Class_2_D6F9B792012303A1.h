#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F3CBC7F3887FCE9.h"

class Class_1_769471637ABAF003;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define CLASS_2_D6F9B792012303A1_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x151F6370)
#define CLASS_2_D6F9B792012303A1__CTOR_OFFSET UNITYSDK_OFFSET(0x151F6360)

inline static constexpr unsigned int Class_2_D6F9B792012303A1_TypeDefinitionIndex = 66944;

class Class_2_D6F9B792012303A1 : public ::Class_1_0F3CBC7F3887FCE9
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_769471637ABAF003* a1, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_769471637ABAF003*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D6F9B792012303A1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6F9B792012303A1_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}
};
