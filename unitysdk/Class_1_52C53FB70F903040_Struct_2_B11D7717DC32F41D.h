#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_52C53FB70F903040_STRUCT_2_B11D7717DC32F41D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84B5D0)
#define CLASS_1_52C53FB70F903040_STRUCT_2_B11D7717DC32F41D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B5E0)

inline static constexpr unsigned int Class_1_52C53FB70F903040_Struct_2_B11D7717DC32F41D_TypeDefinitionIndex = 42156;

struct alignas(8) Class_1_52C53FB70F903040_Struct_2_B11D7717DC32F41D
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x20
	::System::Action* Field_2_7; // 0x40
	::System::Single Field_2_0; // 0x48
	::System::Int32 Field_2_2; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_STRUCT_2_B11D7717DC32F41D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_52C53FB70F903040_STRUCT_2_B11D7717DC32F41D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
