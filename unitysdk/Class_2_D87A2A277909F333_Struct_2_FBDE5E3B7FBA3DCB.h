#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_D87A2A277909F333_Class_1_1A520E7D82BE4A56_11;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_D87A2A277909F333_STRUCT_2_FBDE5E3B7FBA3DCB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BE770)
#define CLASS_2_D87A2A277909F333_STRUCT_2_FBDE5E3B7FBA3DCB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_D87A2A277909F333_Struct_2_FBDE5E3B7FBA3DCB_TypeDefinitionIndex = 68920;

struct alignas(8) Class_2_D87A2A277909F333_Struct_2_FBDE5E3B7FBA3DCB
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_9; // 0x38
	::System::Threading::CancellationToken Field_2_10; // 0x40
	::Class_2_D87A2A277909F333_Class_1_1A520E7D82BE4A56_11* Field_2_11; // 0x48
	::System::Int32 Field_2_5; // 0x50
	::System::Int32 Field_2_6; // 0x54
	::System::Int32 Field_2_8; // 0x58
	::System::Boolean Field_2_4; // 0x5C
	::System::Int32 Field_2_7; // 0x60
	::System::Int32 Field_2_3; // 0x64
	::System::Int32 Field_2_2; // 0x68
	::System::Int32 Field_2_0; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_STRUCT_2_FBDE5E3B7FBA3DCB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_D87A2A277909F333_STRUCT_2_FBDE5E3B7FBA3DCB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
