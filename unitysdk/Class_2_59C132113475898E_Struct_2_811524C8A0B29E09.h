#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_59C132113475898E;
class Class_2_59C132113475898E_Class_1_9BFD28ECD33E44BF_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_59C132113475898E_STRUCT_2_811524C8A0B29E09_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x73D550)
#define CLASS_2_59C132113475898E_STRUCT_2_811524C8A0B29E09_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_59C132113475898E_Struct_2_811524C8A0B29E09_TypeDefinitionIndex = 60869;

struct alignas(8) Class_2_59C132113475898E_Struct_2_811524C8A0B29E09
{
	::System::Threading::CancellationToken Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x18
	::Class_2_59C132113475898E* Field_2_4; // 0x30
	::Class_2_59C132113475898E_Class_1_9BFD28ECD33E44BF_2* Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x40
	::System::UInt32 Field_2_3; // 0x50
	::System::Int32 Field_2_2; // 0x54
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_811524C8A0B29E09_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_811524C8A0B29E09_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
