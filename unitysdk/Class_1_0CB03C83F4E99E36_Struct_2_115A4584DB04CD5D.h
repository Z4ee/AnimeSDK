#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0CB03C83F4E99E36;
class Class_3_DEF6B8E2ED2D1FB3;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_0CB03C83F4E99E36_STRUCT_2_115A4584DB04CD5D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6D9230)
#define CLASS_1_0CB03C83F4E99E36_STRUCT_2_115A4584DB04CD5D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6D9240)

inline static constexpr unsigned int Class_1_0CB03C83F4E99E36_Struct_2_115A4584DB04CD5D_TypeDefinitionIndex = 78118;

struct alignas(8) Class_1_0CB03C83F4E99E36_Struct_2_115A4584DB04CD5D
{
	::System::Action* Field_2_7; // 0x10
	::Class_1_0CB03C83F4E99E36* Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x30
	::System::Collections::Generic::List_1_Enumerator<::Class_3_DEF6B8E2ED2D1FB3*> Field_2_6; // 0x50
	::System::Int32 Field_2_2; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36_STRUCT_2_115A4584DB04CD5D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36_STRUCT_2_115A4584DB04CD5D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
