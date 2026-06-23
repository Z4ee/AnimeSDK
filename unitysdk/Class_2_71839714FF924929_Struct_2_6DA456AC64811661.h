#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_2_71839714FF924929;
class Class_2_71839714FF924929_Class_1_DF3FD831C382A4EC;
class Class_3_025FF4981524A424_129;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_71839714FF924929_STRUCT_2_6DA456AC64811661_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C1750)
#define CLASS_2_71839714FF924929_STRUCT_2_6DA456AC64811661_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_71839714FF924929_Struct_2_6DA456AC64811661_TypeDefinitionIndex = 66866;

struct alignas(8) Class_2_71839714FF924929_Struct_2_6DA456AC64811661
{
	::System::Threading::CancellationToken Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::Class_3_025FF4981524A424_129*>> Field_2_1; // 0x18
	::Class_2_71839714FF924929* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x40
	::Class_2_71839714FF924929_Class_1_DF3FD831C382A4EC* Field_2_5; // 0x50
	::System::Int32 Field_2_0; // 0x58
	::System::Int32 Field_2_2; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_6DA456AC64811661_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_6DA456AC64811661_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
