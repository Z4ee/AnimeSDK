#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1D227196EA27C6A6;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1D227196EA27C6A6_STRUCT_2_1889BD8C3B692F58_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90AF60)
#define CLASS_1_1D227196EA27C6A6_STRUCT_2_1889BD8C3B692F58_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_1D227196EA27C6A6_Struct_2_1889BD8C3B692F58_1_TypeDefinitionIndex = 80690;

struct alignas(8) Class_1_1D227196EA27C6A6_Struct_2_1889BD8C3B692F58_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::Class_1_1D227196EA27C6A6* Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x28
	::System::Threading::CancellationToken Field_2_7; // 0x40
	::System::Int32 Field_2_6; // 0x48
	::System::Int32 Field_2_2; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_STRUCT_2_1889BD8C3B692F58_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1D227196EA27C6A6_STRUCT_2_1889BD8C3B692F58_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
