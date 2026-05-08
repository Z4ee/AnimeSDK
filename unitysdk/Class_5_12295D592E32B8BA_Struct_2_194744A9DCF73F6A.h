#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_12295D592E32B8BA;
class Class_5_AF65C3A968E836D2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6D4920)
#define CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Struct_2_194744A9DCF73F6A_TypeDefinitionIndex = 37971;

struct alignas(8) Class_5_12295D592E32B8BA_Struct_2_194744A9DCF73F6A
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_5_12295D592E32B8BA* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::Class_5_AF65C3A968E836D2* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
