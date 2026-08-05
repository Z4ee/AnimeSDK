#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8919E0)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_A0BE7BD0468480CD_TypeDefinitionIndex = 87198;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_A0BE7BD0468480CD
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Field_2_10; // 0x28
	::Class_2_EC5A7AD641CF932C* Field_2_0; // 0x40
	::System::Boolean Field_2_11; // 0x48
	::System::Boolean Field_2_4; // 0x49
	::System::Int32 Field_2_7; // 0x4C
	::System::Int32 Field_2_2; // 0x50
	::System::Int32 Field_2_5; // 0x54
	::System::Int32 Field_2_6; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_A0BE7BD0468480CD_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
