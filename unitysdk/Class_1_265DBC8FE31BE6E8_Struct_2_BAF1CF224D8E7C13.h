#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_265DBC8FE31BE6E8;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_265DBC8FE31BE6E8_STRUCT_2_BAF1CF224D8E7C13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x804C30)
#define CLASS_1_265DBC8FE31BE6E8_STRUCT_2_BAF1CF224D8E7C13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_265DBC8FE31BE6E8_Struct_2_BAF1CF224D8E7C13_TypeDefinitionIndex = 59326;

struct alignas(8) Class_1_265DBC8FE31BE6E8_Struct_2_BAF1CF224D8E7C13
{
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter Field_2_11; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x28
	::Class_1_265DBC8FE31BE6E8* Field_2_1; // 0x38
	::Il2CppArray<::System::Boolean>* Field_2_6; // 0x40
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter Field_2_4; // 0x48
	::System::Int32 Field_2_3; // 0x4C
	::UnityEngine::Vector2 Field_2_0; // 0x50
	::System::ValueTuple_2<::System::Single, ::System::Single> Field_2_7; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_STRUCT_2_BAF1CF224D8E7C13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_STRUCT_2_BAF1CF224D8E7C13_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
