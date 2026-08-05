#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_B2DA1EAC5A5FC7F2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8BC480)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_B2DA1EAC5A5FC7F2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_B2DA1EAC5A5FC7F2_TypeDefinitionIndex = 50205;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_B2DA1EAC5A5FC7F2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x10
	::Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_7; // 0x30
	::UnityEngine::Animation* Field_2_6; // 0x48
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> Field_2_11; // 0x50
	::System::String* Field_2_5; // 0x70
	::System::Int32 Field_2_0; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_B2DA1EAC5A5FC7F2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_B2DA1EAC5A5FC7F2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
