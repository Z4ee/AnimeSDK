#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA;
class Class_2_43A15B3BD4B47FBF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_43A15B3BD4B47FBF_STRUCT_2_B74F8A6858BB4BDD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E7480)
#define CLASS_2_43A15B3BD4B47FBF_STRUCT_2_B74F8A6858BB4BDD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_43A15B3BD4B47FBF_Struct_2_B74F8A6858BB4BDD_TypeDefinitionIndex = 49784;

struct alignas(8) Class_2_43A15B3BD4B47FBF_Struct_2_B74F8A6858BB4BDD
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*> Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x28
	::Class_2_43A15B3BD4B47FBF* Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_3; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43A15B3BD4B47FBF_STRUCT_2_B74F8A6858BB4BDD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_43A15B3BD4B47FBF_STRUCT_2_B74F8A6858BB4BDD_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
