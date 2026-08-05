#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ObjectPoolOfT_1_ObjectHandler_1.h"
#include "unitysdk/Struct_2_64902D197000D007.h"
#include "unitysdk/Struct_2_7548B21900B2290E.h"
#include "unitysdk/System/ValueType.h"

class Class_2_63A11AA7DE9E5A94;
class Class_2_63A11AA7DE9E5A94_Class_1_6A99FB99E9A5F0BC;
class Class_2_7251A3702ED38135;
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_63A11AA7DE9E5A94_STRUCT_2_CDA1D745CEEBE7B7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x848160)
#define CLASS_2_63A11AA7DE9E5A94_STRUCT_2_CDA1D745CEEBE7B7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_63A11AA7DE9E5A94_Struct_2_CDA1D745CEEBE7B7_TypeDefinitionIndex = 84675;

struct alignas(8) Class_2_63A11AA7DE9E5A94_Struct_2_CDA1D745CEEBE7B7
{
	::System::Collections::Generic::List_1<::System::IDisposable*>* Field_2_8; // 0x10
	::Class_2_63A11AA7DE9E5A94_Class_1_6A99FB99E9A5F0BC* Field_2_0; // 0x18
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_64902D197000D007>*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_64902D197000D007>*>*> Field_2_14; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x28
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>*> Field_2_11; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_2; // 0x40
	::Class_2_7251A3702ED38135* Field_2_7; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_7548B21900B2290E>* Field_2_6; // 0x50
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::Struct_2_64902D197000D007>*, ::System::Collections::Generic::List_1<::Struct_2_64902D197000D007>*> Field_2_9; // 0x58
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_2_4; // 0x60
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::System::IDisposable*>*, ::System::Collections::Generic::List_1<::System::IDisposable*>*> Field_2_15; // 0x68
	::Class_2_63A11AA7DE9E5A94* Field_2_1; // 0x70
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::Struct_2_7548B21900B2290E>*, ::System::Collections::Generic::List_1<::Struct_2_7548B21900B2290E>*> Field_2_5; // 0x78
	::System::Int32 Field_2_3; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63A11AA7DE9E5A94_STRUCT_2_CDA1D745CEEBE7B7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_63A11AA7DE9E5A94_STRUCT_2_CDA1D745CEEBE7B7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
