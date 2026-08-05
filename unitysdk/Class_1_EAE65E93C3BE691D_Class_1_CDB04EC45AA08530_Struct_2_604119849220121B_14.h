#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_EAE65E93C3BE691D_Class_1_CDB04EC45AA08530;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530_STRUCT_2_604119849220121B_14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8B6D70)
#define CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530_STRUCT_2_604119849220121B_14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_EAE65E93C3BE691D_Class_1_CDB04EC45AA08530_Struct_2_604119849220121B_14_TypeDefinitionIndex = 84665;

struct alignas(8) Class_1_EAE65E93C3BE691D_Class_1_CDB04EC45AA08530_Struct_2_604119849220121B_14
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::System::Threading::CancellationToken Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x28
	::Class_1_EAE65E93C3BE691D_Class_1_CDB04EC45AA08530* Field_2_1; // 0x38
	::System::Int32 Field_2_3; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530_STRUCT_2_604119849220121B_14_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_EAE65E93C3BE691D_CLASS_1_CDB04EC45AA08530_STRUCT_2_604119849220121B_14_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
