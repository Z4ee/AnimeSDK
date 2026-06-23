#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_068A7D0F6C4F60E4;
class Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_068A7D0F6C4F60E4_STRUCT_2_0E0E2BEAD979D0AA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x775D70)
#define CLASS_2_068A7D0F6C4F60E4_STRUCT_2_0E0E2BEAD979D0AA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_068A7D0F6C4F60E4_Struct_2_0E0E2BEAD979D0AA_TypeDefinitionIndex = 47058;

struct alignas(8) Class_2_068A7D0F6C4F60E4_Struct_2_0E0E2BEAD979D0AA
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_2_3A7CC933E49505B0_Class_1_AAEE064E9E16DCFA*> Field_2_4; // 0x10
	::Class_2_068A7D0F6C4F60E4* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x38
	::System::Boolean Field_2_3; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_068A7D0F6C4F60E4_STRUCT_2_0E0E2BEAD979D0AA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_068A7D0F6C4F60E4_STRUCT_2_0E0E2BEAD979D0AA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
