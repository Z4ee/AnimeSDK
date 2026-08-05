#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_194;
class Class_2_3CC769D284A54927_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_E058BF9CB4006046_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82A4E0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_E058BF9CB4006046_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_E058BF9CB4006046_TypeDefinitionIndex = 62885;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_E058BF9CB4006046
{
	::Class_2_208CC9941471731A_194* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x18
	::System::Threading::CancellationToken Field_2_0; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
	::Class_2_3CC769D284A54927_1* Field_2_1; // 0x40
	::System::Single Field_2_6; // 0x48
	::System::Int32 Field_2_3; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_E058BF9CB4006046_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_E058BF9CB4006046_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
