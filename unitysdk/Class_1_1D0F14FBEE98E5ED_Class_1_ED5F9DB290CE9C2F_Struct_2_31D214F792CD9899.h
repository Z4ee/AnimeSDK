#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1D0F14FBEE98E5ED_Class_1_ED5F9DB290CE9C2F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x764300)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Class_1_ED5F9DB290CE9C2F_Struct_2_31D214F792CD9899_TypeDefinitionIndex = 67709;

struct alignas(8) Class_1_1D0F14FBEE98E5ED_Class_1_ED5F9DB290CE9C2F_Struct_2_31D214F792CD9899
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Class_1_1D0F14FBEE98E5ED_Class_1_ED5F9DB290CE9C2F* Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
