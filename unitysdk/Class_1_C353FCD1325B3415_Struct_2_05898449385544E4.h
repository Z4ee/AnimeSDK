#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_C353FCD1325B3415;
class ReplayChangeEvent;
class ReplayFullData;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_C353FCD1325B3415_STRUCT_2_05898449385544E4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9879A0)
#define CLASS_1_C353FCD1325B3415_STRUCT_2_05898449385544E4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_C353FCD1325B3415_Struct_2_05898449385544E4_TypeDefinitionIndex = 34562;

struct alignas(8) Class_1_C353FCD1325B3415_Struct_2_05898449385544E4
{
	::Class_1_C353FCD1325B3415* Field_2_2; // 0x10
	::ReplayChangeEvent* Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x28
	::System::Collections::Generic::IEnumerator_1<::ReplayChangeEvent*>* Field_2_5; // 0x38
	::ReplayFullData* Field_2_3; // 0x40
	::System::Single Field_2_7; // 0x48
	::System::Int32 Field_2_0; // 0x4C
	::System::Single Field_2_4; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_STRUCT_2_05898449385544E4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_C353FCD1325B3415_STRUCT_2_05898449385544E4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
