#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3FF857A0877EA521;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_3FF857A0877EA521_STRUCT_2_ABAA1722EF0CB7F4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B2700)
#define CLASS_3_3FF857A0877EA521_STRUCT_2_ABAA1722EF0CB7F4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_3FF857A0877EA521_Struct_2_ABAA1722EF0CB7F4_TypeDefinitionIndex = 85499;

struct alignas(8) Class_3_3FF857A0877EA521_Struct_2_ABAA1722EF0CB7F4
{
	::Foundation::ViewObject::ViewObjectHandle Field_2_4; // 0x10
	::Class_3_3FF857A0877EA521* Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x28
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Field_2_6; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_11; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_STRUCT_2_ABAA1722EF0CB7F4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_STRUCT_2_ABAA1722EF0CB7F4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
