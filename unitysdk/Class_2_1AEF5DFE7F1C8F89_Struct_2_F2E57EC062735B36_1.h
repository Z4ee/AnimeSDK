#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1AEF5DFE7F1C8F89;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_F2E57EC062735B36_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85E860)
#define CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_F2E57EC062735B36_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B5E0)

inline static constexpr unsigned int Class_2_1AEF5DFE7F1C8F89_Struct_2_F2E57EC062735B36_1_TypeDefinitionIndex = 77007;

struct alignas(8) Class_2_1AEF5DFE7F1C8F89_Struct_2_F2E57EC062735B36_1
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_5; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_7; // 0x20
	::Class_2_1AEF5DFE7F1C8F89* Field_2_6; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_F2E57EC062735B36_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1AEF5DFE7F1C8F89_STRUCT_2_F2E57EC062735B36_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
