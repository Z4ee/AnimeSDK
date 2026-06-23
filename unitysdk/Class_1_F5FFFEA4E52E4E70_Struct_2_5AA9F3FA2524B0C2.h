#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F5FFFEA4E52E4E70;
class Class_2_A944C35C433158AC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F5FFFEA4E52E4E70_STRUCT_2_5AA9F3FA2524B0C2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x818260)
#define CLASS_1_F5FFFEA4E52E4E70_STRUCT_2_5AA9F3FA2524B0C2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_F5FFFEA4E52E4E70_Struct_2_5AA9F3FA2524B0C2_TypeDefinitionIndex = 51158;

struct alignas(8) Class_1_F5FFFEA4E52E4E70_Struct_2_5AA9F3FA2524B0C2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_A944C35C433158AC* Field_2_3; // 0x20
	::Class_1_F5FFFEA4E52E4E70* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5FFFEA4E52E4E70_STRUCT_2_5AA9F3FA2524B0C2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_F5FFFEA4E52E4E70_STRUCT_2_5AA9F3FA2524B0C2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
