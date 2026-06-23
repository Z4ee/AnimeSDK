#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2582D22C0BC976C3;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_2582D22C0BC976C3_STRUCT_2_BAF1CF224D8E7C13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x731A30)
#define CLASS_1_2582D22C0BC976C3_STRUCT_2_BAF1CF224D8E7C13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_2582D22C0BC976C3_Struct_2_BAF1CF224D8E7C13_TypeDefinitionIndex = 78811;

struct alignas(8) Class_1_2582D22C0BC976C3_Struct_2_BAF1CF224D8E7C13
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Il2CppArray<::System::Boolean>* Field_2_5; // 0x20
	::Class_1_2582D22C0BC976C3* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_6; // 0x30
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter Field_2_8; // 0x38
	::System::Int32 Field_2_0; // 0x48
	::UnityEngine::Vector2 Field_2_3; // 0x4C
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter Field_2_7; // 0x54
	::System::ValueTuple_2<::System::Single, ::System::Single> Field_2_4; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_STRUCT_2_BAF1CF224D8E7C13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_2582D22C0BC976C3_STRUCT_2_BAF1CF224D8E7C13_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
