#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_31852543D3677906.h"
#include "unitysdk/System/ValueType.h"

class Class_1_76DB84416A8BD8BA;
class Class_1_D9E31DBDCCF0E950_3;
class Class_1_D9E31DBDCCF0E950_3_Class_1_8E98DB4314B8E00E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_C48C4024321FA858_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D8580)
#define CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_C48C4024321FA858_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_D9E31DBDCCF0E950_3_Struct_2_C48C4024321FA858_TypeDefinitionIndex = 63747;

struct alignas(8) Class_1_D9E31DBDCCF0E950_3_Struct_2_C48C4024321FA858
{
	::Class_1_76DB84416A8BD8BA* Field_2_2; // 0x10
	::Class_1_D9E31DBDCCF0E950_3* Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_31852543D3677906> Field_2_1; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_31852543D3677906> Field_2_5; // 0x48
	::Class_1_D9E31DBDCCF0E950_3_Class_1_8E98DB4314B8E00E* Field_2_4; // 0x58
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_C48C4024321FA858_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D9E31DBDCCF0E950_3_STRUCT_2_C48C4024321FA858_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
