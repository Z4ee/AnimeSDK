#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81F470)
#define CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F_Struct_2_31D214F792CD9899_TypeDefinitionIndex = 86721;

struct alignas(8) Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F_Struct_2_31D214F792CD9899
{
	::Class_1_98236523318AE319_Class_1_ED5F9DB290CE9C2F* Field_2_5; // 0x10
	::System::Threading::CancellationToken Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_31D214F792CD9899_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
