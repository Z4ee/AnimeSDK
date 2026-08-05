#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_52C53FB70F903040;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_52C53FB70F903040_STRUCT_2_67E8B59A0E6454E1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x884CC0)
#define CLASS_1_52C53FB70F903040_STRUCT_2_67E8B59A0E6454E1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7DEF30)

inline static constexpr unsigned int Class_1_52C53FB70F903040_Struct_2_67E8B59A0E6454E1_TypeDefinitionIndex = 42161;

struct alignas(8) Class_1_52C53FB70F903040_Struct_2_67E8B59A0E6454E1
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_11; // 0x10
	::Class_1_52C53FB70F903040* Field_2_5; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_7; // 0x28
	::System::Boolean Field_2_4; // 0x48
	::System::Boolean Field_2_6; // 0x49
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_STRUCT_2_67E8B59A0E6454E1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_STRUCT_2_67E8B59A0E6454E1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
