#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BECE17107CA7B5B0_Struct_2_7D9023B263F2474A.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_2_57F332741EAD4A87;
class Class_3_BECE17107CA7B5B0;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x846A60)
#define CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_BECE17107CA7B5B0_Struct_2_A4ACB54D9F9BCC11_TypeDefinitionIndex = 88864;

struct alignas(8) Class_3_BECE17107CA7B5B0_Struct_2_A4ACB54D9F9BCC11
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x18
	::System::WeakReference_1<::Class_3_BECE17107CA7B5B0*>* Field_2_7; // 0x28
	::Class_2_57F332741EAD4A87* Field_2_4; // 0x30
	::Class_3_BECE17107CA7B5B0_Struct_2_7D9023B263F2474A Field_2_5; // 0x38
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_10; // 0x40
	::Class_1_3002D7CF5FEE9D3A* Field_2_6; // 0x50
	::System::Int32 Field_2_1; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_BECE17107CA7B5B0_STRUCT_2_A4ACB54D9F9BCC11_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
