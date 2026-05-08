#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_59C132113475898E;
class Class_2_59C132113475898E_Class_1_C40C6E99261D653F_1;
class Class_3_88D140F5E09465E1_5;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B64B0)
#define CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_59C132113475898E_Struct_2_107024CE58AECCB5_TypeDefinitionIndex = 60877;

struct alignas(8) Class_2_59C132113475898E_Struct_2_107024CE58AECCB5
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_88D140F5E09465E1_5*> Field_2_1; // 0x20
	::System::Threading::CancellationToken Field_2_10; // 0x38
	::Class_2_59C132113475898E* Field_2_9; // 0x40
	::Class_2_59C132113475898E_Class_1_C40C6E99261D653F_1* Field_2_11; // 0x48
	::System::UInt32 Field_2_6; // 0x50
	::System::Single Field_2_2; // 0x54
	::System::Int32 Field_2_0; // 0x58
	::System::Boolean Field_2_7; // 0x5C
	::System::Boolean Field_2_8; // 0x5D
	::System::Int32 Field_2_3; // 0x60
	::System::Int32 Field_2_4; // 0x64
	::System::Int32 Field_2_5; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_59C132113475898E_STRUCT_2_107024CE58AECCB5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
