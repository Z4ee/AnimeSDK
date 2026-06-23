#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_ADDC23591029E232;
class Class_1_ADDC23591029E232_Class_1_DC01E1F07A0475E5_10;
class Class_1_ADDC23591029E232_Class_1_F1C53540FBA79864_5;
class Class_1_C44D0D40D45E22D1;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_ADDC23591029E232_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78F3E0)
#define CLASS_1_ADDC23591029E232_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_ADDC23591029E232_Struct_2_ED27698A79F94A87_TypeDefinitionIndex = 53878;

struct alignas(8) Class_1_ADDC23591029E232_Struct_2_ED27698A79F94A87
{
	::Class_1_ADDC23591029E232* Field_2_4; // 0x10
	::Class_1_C44D0D40D45E22D1* Field_2_7; // 0x18
	::Class_1_ADDC23591029E232_Class_1_DC01E1F07A0475E5_10* Field_2_5; // 0x20
	::System::Action* Field_2_3; // 0x28
	::Class_1_ADDC23591029E232_Class_1_F1C53540FBA79864_5* Field_2_6; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x48
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_9; // 0x58
	::System::Action* Field_2_2; // 0x60
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_8; // 0x68
	::System::Int32 Field_2_0; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
