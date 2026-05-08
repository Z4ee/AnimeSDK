#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"

class Class_2_76615B7B6F13B74A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_76615B7B6F13B74A_STRUCT_2_A98F3D6736DC0DE7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E3460)
#define CLASS_2_76615B7B6F13B74A_STRUCT_2_A98F3D6736DC0DE7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_76615B7B6F13B74A_Struct_2_A98F3D6736DC0DE7_TypeDefinitionIndex = 39168;

struct alignas(8) Class_2_76615B7B6F13B74A_Struct_2_A98F3D6736DC0DE7
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x20
	::UnityEngine::UI::Extension::TermData Field_2_4; // 0x28
	::System::Threading::CancellationToken Field_2_5; // 0x60
	::Class_2_76615B7B6F13B74A* Field_2_2; // 0x68
	::System::Int32 Field_2_0; // 0x70
	::System::Int32 Field_2_3; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76615B7B6F13B74A_STRUCT_2_A98F3D6736DC0DE7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_76615B7B6F13B74A_STRUCT_2_A98F3D6736DC0DE7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
