#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82EEB0)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_4A8C3A058AD05861_TypeDefinitionIndex = 82219;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_4A8C3A058AD05861
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_1; // 0x10
	::UnityEngine::Animation* Field_2_2; // 0x28
	::System::Threading::CancellationToken Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x38
	::System::String* Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
