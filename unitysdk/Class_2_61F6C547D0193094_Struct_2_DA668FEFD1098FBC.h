#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1;
class Class_2_61F6C547D0193094;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_61F6C547D0193094_STRUCT_2_DA668FEFD1098FBC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8471E0)
#define CLASS_2_61F6C547D0193094_STRUCT_2_DA668FEFD1098FBC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_61F6C547D0193094_Struct_2_DA668FEFD1098FBC_TypeDefinitionIndex = 81808;

struct alignas(8) Class_2_61F6C547D0193094_Struct_2_DA668FEFD1098FBC
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Int32> Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::Class_1_ABB13E12DFC246CE_Enum_3_0766F6645D096F67, ::System::Collections::Generic::List_1<::Class_2_3A7CC933E49505B0_Class_1_110CEE6864079A61_1*>*>> Field_2_5; // 0x28
	::Class_2_61F6C547D0193094* Field_2_6; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61F6C547D0193094_STRUCT_2_DA668FEFD1098FBC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_61F6C547D0193094_STRUCT_2_DA668FEFD1098FBC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
