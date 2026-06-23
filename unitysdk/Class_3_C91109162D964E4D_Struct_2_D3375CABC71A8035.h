#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_C91109162D964E4D_STRUCT_2_D3375CABC71A8035_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6C8BD0)
#define CLASS_3_C91109162D964E4D_STRUCT_2_D3375CABC71A8035_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Struct_2_D3375CABC71A8035_TypeDefinitionIndex = 76778;

struct alignas(8) Class_3_C91109162D964E4D_Struct_2_D3375CABC71A8035
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9> Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_D3375CABC71A8035_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_D3375CABC71A8035_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
