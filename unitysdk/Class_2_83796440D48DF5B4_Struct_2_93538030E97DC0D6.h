#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1310CBEDADC30874;
class Class_1_3B6FD32A4C03F1FC;
class Class_2_83796440D48DF5B4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_83796440D48DF5B4_STRUCT_2_93538030E97DC0D6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x775D80)
#define CLASS_2_83796440D48DF5B4_STRUCT_2_93538030E97DC0D6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_83796440D48DF5B4_Struct_2_93538030E97DC0D6_TypeDefinitionIndex = 46856;

struct alignas(8) Class_2_83796440D48DF5B4_Struct_2_93538030E97DC0D6
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::System::Threading::CancellationToken Field_2_3; // 0x18
	::Class_2_83796440D48DF5B4* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_4<::Class_1_1310CBEDADC30874*, ::System::Int64, ::System::Int64, ::System::Int64>>* Field_2_8; // 0x28
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter Field_2_10; // 0x30
	::Il2CppArray<::Enum_3_34F7035555410463_1>* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_1_1310CBEDADC30874*, ::System::Boolean>>* Field_2_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* Field_2_6; // 0x50
	::System::Int32 Field_2_0; // 0x58
	::System::Boolean Field_2_5; // 0x5C
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter Field_2_9; // 0x5D

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_STRUCT_2_93538030E97DC0D6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_STRUCT_2_93538030E97DC0D6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
