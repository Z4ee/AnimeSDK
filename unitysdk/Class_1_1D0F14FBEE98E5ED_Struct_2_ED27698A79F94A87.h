#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1D0F14FBEE98E5ED;
class Class_1_1D0F14FBEE98E5ED_Class_1_DC01E1F07A0475E5_17;
class Class_1_1D0F14FBEE98E5ED_Class_1_F1C53540FBA79864_5;
class Class_1_9B770640315E1C6B;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C3730)
#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Struct_2_ED27698A79F94A87_TypeDefinitionIndex = 67663;

struct alignas(8) Class_1_1D0F14FBEE98E5ED_Struct_2_ED27698A79F94A87
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_1_1D0F14FBEE98E5ED_Class_1_DC01E1F07A0475E5_17* Field_2_5; // 0x20
	::Class_1_1D0F14FBEE98E5ED_Class_1_F1C53540FBA79864_5* Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x30
	::Class_1_1D0F14FBEE98E5ED* Field_2_4; // 0x40
	::System::Action* Field_2_3; // 0x48
	::Class_1_9B770640315E1C6B* Field_2_7; // 0x50
	::System::Action* Field_2_2; // 0x58
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_9; // 0x60
	::System::Int32 Field_2_0; // 0x68
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_8; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
