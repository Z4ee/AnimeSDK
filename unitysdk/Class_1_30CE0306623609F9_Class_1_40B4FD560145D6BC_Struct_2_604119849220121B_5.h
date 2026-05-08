#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC;
class Class_1_30CE0306623609F9_Class_1_C9F259509FA3F1B6;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_STRUCT_2_604119849220121B_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x754130)
#define CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_STRUCT_2_604119849220121B_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC_Struct_2_604119849220121B_5_TypeDefinitionIndex = 40160;

struct alignas(8) Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC_Struct_2_604119849220121B_5
{
	::Class_1_30CE0306623609F9_Class_1_C9F259509FA3F1B6* Field_2_4; // 0x10
	::System::Threading::CancellationToken Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
	::Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_STRUCT_2_604119849220121B_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_STRUCT_2_604119849220121B_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
