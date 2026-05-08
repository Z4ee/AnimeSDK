#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_59E1B4DADF2323B0_STRUCT_2_AEAC3A772689F1EA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x793200)
#define CLASS_1_59E1B4DADF2323B0_STRUCT_2_AEAC3A772689F1EA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_1_59E1B4DADF2323B0_Struct_2_AEAC3A772689F1EA_TypeDefinitionIndex = 61176;

struct alignas(8) Class_1_59E1B4DADF2323B0_Struct_2_AEAC3A772689F1EA
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> Field_2_2; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59E1B4DADF2323B0_STRUCT_2_AEAC3A772689F1EA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_59E1B4DADF2323B0_STRUCT_2_AEAC3A772689F1EA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
