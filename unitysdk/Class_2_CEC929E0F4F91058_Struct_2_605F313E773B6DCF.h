#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_CEC929E0F4F91058;
namespace MoleMole { class UIBaseController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_CEC929E0F4F91058_STRUCT_2_605F313E773B6DCF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71B350)
#define CLASS_2_CEC929E0F4F91058_STRUCT_2_605F313E773B6DCF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_2_CEC929E0F4F91058_Struct_2_605F313E773B6DCF_TypeDefinitionIndex = 43786;

struct alignas(8) Class_2_CEC929E0F4F91058_Struct_2_605F313E773B6DCF
{
	::Class_2_CEC929E0F4F91058* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::MoleMole::UIBaseController* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEC929E0F4F91058_STRUCT_2_605F313E773B6DCF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_CEC929E0F4F91058_STRUCT_2_605F313E773B6DCF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
