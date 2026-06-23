#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BD6593509EF2E611_Class_1_AFE01D2510396323;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_STRUCT_2_604119849220121B_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80F540)
#define CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_STRUCT_2_604119849220121B_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_BD6593509EF2E611_Class_1_AFE01D2510396323_Struct_2_604119849220121B_5_TypeDefinitionIndex = 45326;

struct alignas(8) Class_1_BD6593509EF2E611_Class_1_AFE01D2510396323_Struct_2_604119849220121B_5
{
	::System::Threading::CancellationToken Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Class_1_BD6593509EF2E611_Class_1_AFE01D2510396323* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_STRUCT_2_604119849220121B_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_BD6593509EF2E611_CLASS_1_AFE01D2510396323_STRUCT_2_604119849220121B_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
