#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_AB5D61B9EBFC241C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8631D0)
#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_AB5D61B9EBFC241C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6D9240)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Struct_2_AB5D61B9EBFC241C_TypeDefinitionIndex = 54840;

struct alignas(8) Class_1_E0F34B566AF43EC9_Struct_2_AB5D61B9EBFC241C
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::System::String* Field_2_1; // 0x20
	::System::Action* Field_2_0; // 0x28
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_2; // 0x30
	::System::Int32 Field_2_3; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_AB5D61B9EBFC241C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_AB5D61B9EBFC241C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
