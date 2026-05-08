#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_481;
class Class_2_B89683A15B3B0C43;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E4140)
#define CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_B89683A15B3B0C43_Struct_2_A51A643E7F44924A_TypeDefinitionIndex = 58978;

struct alignas(8) Class_2_B89683A15B3B0C43_Struct_2_A51A643E7F44924A
{
	::System::String* Field_2_3; // 0x10
	::Class_0_16E4307DCC419505_481* Field_2_4; // 0x18
	::Class_2_B89683A15B3B0C43* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::System::Single Field_2_5; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
