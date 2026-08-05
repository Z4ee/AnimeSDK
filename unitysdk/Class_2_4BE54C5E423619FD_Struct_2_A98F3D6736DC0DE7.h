#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"

class Class_2_4BE54C5E423619FD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_4BE54C5E423619FD_STRUCT_2_A98F3D6736DC0DE7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CD80)
#define CLASS_2_4BE54C5E423619FD_STRUCT_2_A98F3D6736DC0DE7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_4BE54C5E423619FD_Struct_2_A98F3D6736DC0DE7_TypeDefinitionIndex = 55158;

struct alignas(8) Class_2_4BE54C5E423619FD_Struct_2_A98F3D6736DC0DE7
{
	::UnityEngine::UI::Extension::TermData Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x58
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x60
	::Class_2_4BE54C5E423619FD* Field_2_6; // 0x70
	::System::Threading::CancellationToken Field_2_11; // 0x78
	::System::Int32 Field_2_0; // 0x80
	::System::Int32 Field_2_5; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_STRUCT_2_A98F3D6736DC0DE7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_4BE54C5E423619FD_STRUCT_2_A98F3D6736DC0DE7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
