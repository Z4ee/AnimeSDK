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

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B5400)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_4A8C3A058AD05861_TypeDefinitionIndex = 50179;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_4A8C3A058AD05861
{
	::System::String* Field_2_6; // 0x10
	::UnityEngine::Animation* Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_0; // 0x30
	::System::Threading::CancellationToken Field_2_5; // 0x48
	::System::Int32 Field_2_1; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_4A8C3A058AD05861_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
