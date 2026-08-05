#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_F1B1B0374922D78B_STRUCT_2_295CE267378E267D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8B6700)
#define CLASS_1_F1B1B0374922D78B_STRUCT_2_295CE267378E267D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_F1B1B0374922D78B_Struct_2_295CE267378E267D_TypeDefinitionIndex = 52028;

struct alignas(8) Class_1_F1B1B0374922D78B_Struct_2_295CE267378E267D
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::System::Action* Field_2_0; // 0x30
	::System::Int32 Field_2_2; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1B1B0374922D78B_STRUCT_2_295CE267378E267D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_F1B1B0374922D78B_STRUCT_2_295CE267378E267D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
