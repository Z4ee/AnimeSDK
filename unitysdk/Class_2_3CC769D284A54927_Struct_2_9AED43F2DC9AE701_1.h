#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
class Class_3_88D140F5E09465E1_5;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_9AED43F2DC9AE701_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CE50)
#define CLASS_2_3CC769D284A54927_STRUCT_2_9AED43F2DC9AE701_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_9AED43F2DC9AE701_1_TypeDefinitionIndex = 61329;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_9AED43F2DC9AE701_1
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_88D140F5E09465E1_5*> Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::Class_2_3CC769D284A54927* Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::System::Int32 Field_2_3; // 0x50
	::System::Int32 Field_2_0; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_9AED43F2DC9AE701_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_9AED43F2DC9AE701_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
