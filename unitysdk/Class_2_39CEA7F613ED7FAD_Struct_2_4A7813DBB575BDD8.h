#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_39CEA7F613ED7FAD;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_39CEA7F613ED7FAD_STRUCT_2_4A7813DBB575BDD8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B1CD0)
#define CLASS_2_39CEA7F613ED7FAD_STRUCT_2_4A7813DBB575BDD8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x777AB0)

inline static constexpr unsigned int Class_2_39CEA7F613ED7FAD_Struct_2_4A7813DBB575BDD8_TypeDefinitionIndex = 64257;

struct alignas(8) Class_2_39CEA7F613ED7FAD_Struct_2_4A7813DBB575BDD8
{
	::System::Action* Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::System::Threading::CancellationToken Field_2_5; // 0x28
	::Class_2_39CEA7F613ED7FAD* Field_2_2; // 0x30
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x38
	::System::Int32 Field_2_0; // 0x58
	::System::Boolean Field_2_4; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_STRUCT_2_4A7813DBB575BDD8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_39CEA7F613ED7FAD_STRUCT_2_4A7813DBB575BDD8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
