#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_C91109162D964E4D_STRUCT_2_4B020D48D556F46B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71B2D0)
#define CLASS_3_C91109162D964E4D_STRUCT_2_4B020D48D556F46B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Struct_2_4B020D48D556F46B_TypeDefinitionIndex = 47095;

struct alignas(8) Class_3_C91109162D964E4D_Struct_2_4B020D48D556F46B
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9> Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_4B020D48D556F46B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_4B020D48D556F46B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
