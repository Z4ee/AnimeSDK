#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_A292D09112D1EC5F;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_A292D09112D1EC5F_STRUCT_2_ABAA1722EF0CB7F4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x879E00)
#define CLASS_3_A292D09112D1EC5F_STRUCT_2_ABAA1722EF0CB7F4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_A292D09112D1EC5F_Struct_2_ABAA1722EF0CB7F4_TypeDefinitionIndex = 42956;

struct alignas(8) Class_3_A292D09112D1EC5F_Struct_2_ABAA1722EF0CB7F4
{
	::Foundation::ViewObject::ViewObjectHandle Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_3_A292D09112D1EC5F* Field_2_3; // 0x30
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x40
	::System::Int32 Field_2_0; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_STRUCT_2_ABAA1722EF0CB7F4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_A292D09112D1EC5F_STRUCT_2_ABAA1722EF0CB7F4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
