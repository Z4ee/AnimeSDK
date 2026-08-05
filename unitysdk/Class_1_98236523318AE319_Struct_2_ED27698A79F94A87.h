#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3573CA47DF091249;
class Class_1_98236523318AE319;
class Class_1_98236523318AE319_Class_1_DC01E1F07A0475E5_31;
class Class_1_98236523318AE319_Class_1_F1C53540FBA79864_6;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_98236523318AE319_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x749850)
#define CLASS_1_98236523318AE319_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_98236523318AE319_Struct_2_ED27698A79F94A87_TypeDefinitionIndex = 86701;

struct alignas(8) Class_1_98236523318AE319_Struct_2_ED27698A79F94A87
{
	::Class_1_3573CA47DF091249* Field_2_9; // 0x10
	::Class_1_98236523318AE319_Class_1_DC01E1F07A0475E5_31* Field_2_11; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x20
	::System::Action* Field_2_5; // 0x30
	::System::Action* Field_2_6; // 0x38
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_15; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_14; // 0x48
	::Class_1_98236523318AE319_Class_1_F1C53540FBA79864_6* Field_2_10; // 0x58
	::Class_1_98236523318AE319* Field_2_4; // 0x60
	::System::Int32 Field_2_0; // 0x68
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_8; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
