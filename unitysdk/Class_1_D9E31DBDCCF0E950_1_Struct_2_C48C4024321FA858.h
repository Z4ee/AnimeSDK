#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_31852543D3677906.h"
#include "unitysdk/System/ValueType.h"

class Class_1_76DB84416A8BD8BA;
class Class_1_D9E31DBDCCF0E950_1;
class Class_1_D9E31DBDCCF0E950_1_Class_1_8E98DB4314B8E00E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D9E31DBDCCF0E950_1_STRUCT_2_C48C4024321FA858_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x52AF80)
#define CLASS_1_D9E31DBDCCF0E950_1_STRUCT_2_C48C4024321FA858_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_1_Struct_2_C48C4024321FA858_TypeDefinitionIndex = 47000;

struct alignas(8) Class_1_D9E31DBDCCF0E950_1_Struct_2_C48C4024321FA858
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::Class_1_D9E31DBDCCF0E950_1* Field_2_0; // 0x20
	::Class_1_76DB84416A8BD8BA* Field_2_1; // 0x28
	::Class_1_D9E31DBDCCF0E950_1_Class_1_8E98DB4314B8E00E* Field_2_7; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_31852543D3677906> Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_31852543D3677906> Field_2_2; // 0x48
	::System::Int32 Field_2_3; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_1_STRUCT_2_C48C4024321FA858_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_1_STRUCT_2_C48C4024321FA858_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
