#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_454;
class Class_2_B89683A15B3B0C43;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x804580)
#define CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_B89683A15B3B0C43_Struct_2_40E784996B1D0CFB_TypeDefinitionIndex = 68444;

struct alignas(8) Class_2_B89683A15B3B0C43_Struct_2_40E784996B1D0CFB
{
	::Class_2_B89683A15B3B0C43* Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x28
	::Class_0_16E4307DCC419505_454* Field_2_0; // 0x38
	::System::Int32 Field_2_3; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_40E784996B1D0CFB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
