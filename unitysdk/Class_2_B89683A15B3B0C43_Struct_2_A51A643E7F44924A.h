#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_515;
class Class_2_B89683A15B3B0C43;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7597E0)
#define CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_B89683A15B3B0C43_Struct_2_A51A643E7F44924A_TypeDefinitionIndex = 63592;

struct alignas(8) Class_2_B89683A15B3B0C43_Struct_2_A51A643E7F44924A
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_0_16E4307DCC419505_515* Field_2_4; // 0x30
	::Class_2_B89683A15B3B0C43* Field_2_2; // 0x38
	::System::String* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Single Field_2_5; // 0x4C
	::System::Single Field_2_6; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_A51A643E7F44924A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
