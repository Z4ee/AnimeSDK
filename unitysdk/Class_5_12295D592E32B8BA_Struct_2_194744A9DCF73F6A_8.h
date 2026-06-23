#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_12295D592E32B8BA;
class Class_5_FCAF801AC482D3B5;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x68F5D0)
#define CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Struct_2_194744A9DCF73F6A_8_TypeDefinitionIndex = 65838;

struct alignas(8) Class_5_12295D592E32B8BA_Struct_2_194744A9DCF73F6A_8
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Class_5_FCAF801AC482D3B5* Field_2_3; // 0x20
	::Class_5_12295D592E32B8BA* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_STRUCT_2_194744A9DCF73F6A_8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
