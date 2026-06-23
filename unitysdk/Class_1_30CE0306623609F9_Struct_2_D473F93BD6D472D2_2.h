#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_30CE0306623609F9;
class Class_1_30CE0306623609F9_Class_1_B3BDF31F8BBF01AA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_30CE0306623609F9_STRUCT_2_D473F93BD6D472D2_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79D330)
#define CLASS_1_30CE0306623609F9_STRUCT_2_D473F93BD6D472D2_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_30CE0306623609F9_Struct_2_D473F93BD6D472D2_2_TypeDefinitionIndex = 77849;

struct alignas(8) Class_1_30CE0306623609F9_Struct_2_D473F93BD6D472D2_2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::Class_1_30CE0306623609F9* Field_2_2; // 0x20
	::Class_1_30CE0306623609F9_Class_1_B3BDF31F8BBF01AA* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Threading::CancellationToken Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_STRUCT_2_D473F93BD6D472D2_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_STRUCT_2_D473F93BD6D472D2_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
