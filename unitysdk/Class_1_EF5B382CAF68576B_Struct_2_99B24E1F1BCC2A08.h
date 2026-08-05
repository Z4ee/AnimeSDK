#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_EF5B382CAF68576B;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_EF5B382CAF68576B_STRUCT_2_99B24E1F1BCC2A08_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B7E40)
#define CLASS_1_EF5B382CAF68576B_STRUCT_2_99B24E1F1BCC2A08_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_EF5B382CAF68576B_Struct_2_99B24E1F1BCC2A08_TypeDefinitionIndex = 60209;

struct alignas(8) Class_1_EF5B382CAF68576B_Struct_2_99B24E1F1BCC2A08
{
	::Class_1_EF5B382CAF68576B* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_STRUCT_2_99B24E1F1BCC2A08_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_STRUCT_2_99B24E1F1BCC2A08_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
