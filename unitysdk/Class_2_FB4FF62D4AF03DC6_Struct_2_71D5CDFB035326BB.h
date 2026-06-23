#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_77794C962ABD89A9;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_FB4FF62D4AF03DC6_STRUCT_2_71D5CDFB035326BB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7943F0)
#define CLASS_2_FB4FF62D4AF03DC6_STRUCT_2_71D5CDFB035326BB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_FB4FF62D4AF03DC6_Struct_2_71D5CDFB035326BB_TypeDefinitionIndex = 69211;

struct alignas(8) Class_2_FB4FF62D4AF03DC6_Struct_2_71D5CDFB035326BB
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x20
	::System::Threading::CancellationToken Field_2_5; // 0x28
	::Class_2_77794C962ABD89A9* Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::System::Int32 Field_2_0; // 0x48
	::Struct_2_D7E802D2192B688B Field_2_3; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB4FF62D4AF03DC6_STRUCT_2_71D5CDFB035326BB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_FB4FF62D4AF03DC6_STRUCT_2_71D5CDFB035326BB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
