#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_568600B6F5743120;
class Class_5_5D8179DA70178B73;
class Class_5_5D8179DA70178B73_Class_1_5E9723171F9C3B56;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_5D8179DA70178B73_STRUCT_2_F9E2A202288A9BD4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x782690)
#define CLASS_5_5D8179DA70178B73_STRUCT_2_F9E2A202288A9BD4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_5_5D8179DA70178B73_Struct_2_F9E2A202288A9BD4_TypeDefinitionIndex = 71211;

struct alignas(8) Class_5_5D8179DA70178B73_Struct_2_F9E2A202288A9BD4
{
	::Class_5_5D8179DA70178B73* Field_2_6; // 0x10
	::System::Threading::CancellationToken Field_2_5; // 0x18
	::Class_5_5D8179DA70178B73_Class_1_5E9723171F9C3B56* Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x28
	::Class_3_568600B6F5743120* Field_2_11; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_5D8179DA70178B73_STRUCT_2_F9E2A202288A9BD4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_5D8179DA70178B73_STRUCT_2_F9E2A202288A9BD4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
