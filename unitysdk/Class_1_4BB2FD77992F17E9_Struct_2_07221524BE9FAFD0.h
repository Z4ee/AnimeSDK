#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4BB2FD77992F17E9;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_4BB2FD77992F17E9_STRUCT_2_07221524BE9FAFD0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x791E40)
#define CLASS_1_4BB2FD77992F17E9_STRUCT_2_07221524BE9FAFD0_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_4BB2FD77992F17E9_Struct_2_07221524BE9FAFD0_TypeDefinitionIndex = 79636;

struct alignas(8) Class_1_4BB2FD77992F17E9_Struct_2_07221524BE9FAFD0
{
	::Class_1_4BB2FD77992F17E9* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BB2FD77992F17E9_STRUCT_2_07221524BE9FAFD0_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_4BB2FD77992F17E9_STRUCT_2_07221524BE9FAFD0_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
