#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_09887D9189AB5BE2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_09887D9189AB5BE2_STRUCT_2_D8E07952AA1CA920_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BAE20)
#define CLASS_3_09887D9189AB5BE2_STRUCT_2_D8E07952AA1CA920_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_09887D9189AB5BE2_Struct_2_D8E07952AA1CA920_2_TypeDefinitionIndex = 70347;

struct alignas(8) Class_3_09887D9189AB5BE2_Struct_2_D8E07952AA1CA920_2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Class_3_09887D9189AB5BE2* Field_2_2; // 0x20
	::System::Threading::CancellationToken Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09887D9189AB5BE2_STRUCT_2_D8E07952AA1CA920_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_09887D9189AB5BE2_STRUCT_2_D8E07952AA1CA920_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
