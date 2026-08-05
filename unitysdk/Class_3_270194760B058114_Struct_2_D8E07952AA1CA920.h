#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_270194760B058114;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_270194760B058114_STRUCT_2_D8E07952AA1CA920_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x698AD0)
#define CLASS_3_270194760B058114_STRUCT_2_D8E07952AA1CA920_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_270194760B058114_Struct_2_D8E07952AA1CA920_TypeDefinitionIndex = 41093;

struct alignas(8) Class_3_270194760B058114_Struct_2_D8E07952AA1CA920
{
	::Class_3_270194760B058114* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x18
	::System::Threading::CancellationToken Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x30
	::System::Int32 Field_2_1; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_D8E07952AA1CA920_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_270194760B058114_STRUCT_2_D8E07952AA1CA920_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
