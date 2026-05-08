#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75FCA0)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_A0BE7BD0468480CD_TypeDefinitionIndex = 79715;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_A0BE7BD0468480CD
{
	::Class_2_EC5A7AD641CF932C* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Field_2_8; // 0x30
	::System::Int32 Field_2_3; // 0x48
	::System::Int32 Field_2_4; // 0x4C
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_5; // 0x54
	::System::Boolean Field_2_7; // 0x58
	::System::Boolean Field_2_6; // 0x59

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
