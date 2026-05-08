#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_346A299033A30404;
class Class_1_7F8E72A37FA24C0F;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_346A299033A30404_STRUCT_2_47BF392DFE1D05A6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FC4B0)
#define CLASS_1_346A299033A30404_STRUCT_2_47BF392DFE1D05A6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

inline static constexpr unsigned int Class_1_346A299033A30404_Struct_2_47BF392DFE1D05A6_TypeDefinitionIndex = 50039;

struct alignas(8) Class_1_346A299033A30404_Struct_2_47BF392DFE1D05A6
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_346A299033A30404* Field_2_2; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_7F8E72A37FA24C0F*>* Field_2_3; // 0x48
	::System::Int32 Field_2_4; // 0x50
	::System::Int32 Field_2_0; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346A299033A30404_STRUCT_2_47BF392DFE1D05A6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_346A299033A30404_STRUCT_2_47BF392DFE1D05A6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
