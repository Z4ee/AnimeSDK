#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_6DEAE53C2F596860;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_6DEAE53C2F596860___EXECUTE_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52AE0)
#define CLASS_5_6DEAE53C2F596860___EXECUTE_D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_5_6DEAE53C2F596860___Execute_d__2_TypeDefinitionIndex = 44225;

struct alignas(8) Class_5_6DEAE53C2F596860___Execute_d__2
{
	::Class_5_6DEAE53C2F596860* __4__this; // 0x10
	::System::Object* __7__wrap1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
	::System::Int32 __7__wrap2; // 0x40
	::System::Int32 __1__state; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6DEAE53C2F596860___EXECUTE_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_6DEAE53C2F596860___EXECUTE_D__2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
