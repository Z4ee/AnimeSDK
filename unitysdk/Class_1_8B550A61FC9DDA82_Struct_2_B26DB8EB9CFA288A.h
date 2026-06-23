#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FDFE69FE7B72463B;
namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_B26DB8EB9CFA288A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0400)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_B26DB8EB9CFA288A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_B26DB8EB9CFA288A_TypeDefinitionIndex = 82155;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_B26DB8EB9CFA288A
{
	::System::Action* Field_2_5; // 0x10
	::System::String* Field_2_3; // 0x18
	::System::String* Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_8; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x40
	::System::Threading::CancellationToken Field_2_4; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x50
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_B26DB8EB9CFA288A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_B26DB8EB9CFA288A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
