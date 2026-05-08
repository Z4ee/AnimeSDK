#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_481;
class Class_2_B89683A15B3B0C43;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B89683A15B3B0C43_STRUCT_2_048CE7BB1057CB3E_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x776F10)
#define CLASS_2_B89683A15B3B0C43_STRUCT_2_048CE7BB1057CB3E_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_B89683A15B3B0C43_Struct_2_048CE7BB1057CB3E_5_TypeDefinitionIndex = 58985;

struct alignas(8) Class_2_B89683A15B3B0C43_Struct_2_048CE7BB1057CB3E_5
{
	::Class_2_B89683A15B3B0C43* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask Field_2_13; // 0x28
	::Class_0_16E4307DCC419505_481* Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_14; // 0x40
	::System::String* Field_2_3; // 0x50
	::System::Int32 Field_2_0; // 0x58
	::System::Single Field_2_7; // 0x5C
	::System::Single Field_2_5; // 0x60
	::System::Single Field_2_9; // 0x64
	::System::Single Field_2_10; // 0x68
	::System::Single Field_2_12; // 0x6C
	::System::Single Field_2_8; // 0x70
	::System::Single Field_2_11; // 0x74
	::System::Single Field_2_6; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_048CE7BB1057CB3E_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B89683A15B3B0C43_STRUCT_2_048CE7BB1057CB3E_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
