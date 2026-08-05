#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_71839714FF924929;
class Class_2_71839714FF924929_Class_1_9BFD28ECD33E44BF_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_71839714FF924929_STRUCT_2_811524C8A0B29E09_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B53E0)
#define CLASS_2_71839714FF924929_STRUCT_2_811524C8A0B29E09_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_71839714FF924929_Struct_2_811524C8A0B29E09_TypeDefinitionIndex = 44082;

struct alignas(8) Class_2_71839714FF924929_Struct_2_811524C8A0B29E09
{
	::Class_2_71839714FF924929_Class_1_9BFD28ECD33E44BF_1* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_2; // 0x18
	::System::Threading::CancellationToken Field_2_7; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x38
	::Class_2_71839714FF924929* Field_2_0; // 0x48
	::System::Int32 Field_2_3; // 0x50
	::System::UInt32 Field_2_1; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_811524C8A0B29E09_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_811524C8A0B29E09_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
