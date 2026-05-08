#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_71839714FF924929;
class Class_2_71839714FF924929_Class_1_C40C6E99261D653F_2;
class Class_3_025FF4981524A424_162;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AF5C0)
#define CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_71839714FF924929_Struct_2_D7B09D5F883C235F_TypeDefinitionIndex = 82445;

struct alignas(8) Class_2_71839714FF924929_Struct_2_D7B09D5F883C235F
{
	::Class_2_71839714FF924929_Class_1_C40C6E99261D653F_2* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_025FF4981524A424_162*> Field_2_1; // 0x18
	::System::Threading::CancellationToken Field_2_4; // 0x30
	::Class_2_71839714FF924929* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x40
	::System::Single Field_2_2; // 0x50
	::System::Int32 Field_2_0; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_D7B09D5F883C235F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
