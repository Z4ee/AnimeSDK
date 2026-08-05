#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_6.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7F57F1E502AAA0D8;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_7F57F1E502AAA0D8_STRUCT_2_F2E57EC062735B36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CE370)
#define CLASS_1_7F57F1E502AAA0D8_STRUCT_2_F2E57EC062735B36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6D9240)

inline static constexpr unsigned int Class_1_7F57F1E502AAA0D8_Struct_2_F2E57EC062735B36_TypeDefinitionIndex = 48526;

struct alignas(8) Class_1_7F57F1E502AAA0D8_Struct_2_F2E57EC062735B36
{
	::Struct_2_7734F33592BF49F6_6 Field_2_6; // 0x10
	::Class_1_7F57F1E502AAA0D8* Field_2_7; // 0x28
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_0; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_5; // 0x50
	::System::Int32 Field_2_1; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_STRUCT_2_F2E57EC062735B36_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_7F57F1E502AAA0D8_STRUCT_2_F2E57EC062735B36_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
