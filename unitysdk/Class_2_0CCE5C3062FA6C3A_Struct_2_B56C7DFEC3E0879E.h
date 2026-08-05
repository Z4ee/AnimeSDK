#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_36;
class Class_2_0CCE5C3062FA6C3A;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_0CCE5C3062FA6C3A_STRUCT_2_B56C7DFEC3E0879E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8BF0C0)
#define CLASS_2_0CCE5C3062FA6C3A_STRUCT_2_B56C7DFEC3E0879E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_0CCE5C3062FA6C3A_Struct_2_B56C7DFEC3E0879E_TypeDefinitionIndex = 54742;

struct alignas(8) Class_2_0CCE5C3062FA6C3A_Struct_2_B56C7DFEC3E0879E
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_0_16E4307DCC419505_36*> Field_2_7; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_5; // 0x28
	::Class_2_0CCE5C3062FA6C3A* Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_36*> Field_2_10; // 0x38
	::System::Threading::CancellationTokenRegistration Field_2_11; // 0x50
	::System::Threading::CancellationToken Field_2_6; // 0x68
	::System::Int32 Field_2_0; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE5C3062FA6C3A_STRUCT_2_B56C7DFEC3E0879E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_0CCE5C3062FA6C3A_STRUCT_2_B56C7DFEC3E0879E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
