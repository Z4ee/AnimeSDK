#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_A2D92FDACAFA70D5_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x816030)
#define CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_A2D92FDACAFA70D5_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC_Struct_2_A2D92FDACAFA70D5_2_TypeDefinitionIndex = 70849;

struct alignas(8) Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC_Struct_2_A2D92FDACAFA70D5_2
{
	::Class_2_34E304ABF8E9FF08_Class_1_AD9FF58C3FE0E0EC* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_A2D92FDACAFA70D5_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_CLASS_1_AD9FF58C3FE0E0EC_STRUCT_2_A2D92FDACAFA70D5_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
