#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_9159F6FE46573B6F;
class Class_1_E97B94A13836DD20;
class Class_5_AF65C3A968E836D2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_E97B94A13836DD20_STRUCT_2_CD6C46BCAF9FBE4E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x946060)
#define CLASS_1_E97B94A13836DD20_STRUCT_2_CD6C46BCAF9FBE4E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_E97B94A13836DD20_Struct_2_CD6C46BCAF9FBE4E_TypeDefinitionIndex = 53080;

struct alignas(8) Class_1_E97B94A13836DD20_Struct_2_CD6C46BCAF9FBE4E
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::System::Threading::CancellationToken Field_2_5; // 0x20
	::Class_5_AF65C3A968E836D2* Field_2_4; // 0x28
	::Class_1_9159F6FE46573B6F* Field_2_3; // 0x30
	::Class_1_E97B94A13836DD20* Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_STRUCT_2_CD6C46BCAF9FBE4E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E97B94A13836DD20_STRUCT_2_CD6C46BCAF9FBE4E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
