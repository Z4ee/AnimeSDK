#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_00AA8DEB4906FE64;
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_00AA8DEB4906FE64_STRUCT_2_E895A71C3CD7DD8D_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8128D0)
#define CLASS_2_00AA8DEB4906FE64_STRUCT_2_E895A71C3CD7DD8D_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x59F4E0)

inline static constexpr unsigned int Class_2_00AA8DEB4906FE64_Struct_2_E895A71C3CD7DD8D_1_TypeDefinitionIndex = 44312;

struct alignas(8) Class_2_00AA8DEB4906FE64_Struct_2_E895A71C3CD7DD8D_1
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x30
	::MoleMole::UIBaseController* Field_2_4; // 0x40
	::System::Action* Field_2_11; // 0x48
	::Class_2_00AA8DEB4906FE64* Field_2_6; // 0x50
	::System::Int32 Field_2_5; // 0x58
	::System::Int32 Field_2_0; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_STRUCT_2_E895A71C3CD7DD8D_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_00AA8DEB4906FE64_STRUCT_2_E895A71C3CD7DD8D_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
