#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ObjectPoolOfT_1_ObjectHandler_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_63A11AA7DE9E5A94_Class_1_3BC201442A256799;
class Class_2_63A11AA7DE9E5A94_Class_1_69842514A4923F4F;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_63A11AA7DE9E5A94_CLASS_1_3BC201442A256799_STRUCT_2_1017EDD3B1410172_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x848170)
#define CLASS_2_63A11AA7DE9E5A94_CLASS_1_3BC201442A256799_STRUCT_2_1017EDD3B1410172_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_63A11AA7DE9E5A94_Class_1_3BC201442A256799_Struct_2_1017EDD3B1410172_TypeDefinitionIndex = 84679;

struct alignas(8) Class_2_63A11AA7DE9E5A94_Class_1_3BC201442A256799_Struct_2_1017EDD3B1410172
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x10
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_4; // 0x20
	::Class_2_63A11AA7DE9E5A94_Class_1_69842514A4923F4F* Field_2_5; // 0x28
	::Class_2_63A11AA7DE9E5A94_Class_1_3BC201442A256799* Field_2_6; // 0x30
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*> Field_2_11; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63A11AA7DE9E5A94_CLASS_1_3BC201442A256799_STRUCT_2_1017EDD3B1410172_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_63A11AA7DE9E5A94_CLASS_1_3BC201442A256799_STRUCT_2_1017EDD3B1410172_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
