#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_F61F3C9E55A83BDE;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_C91109162D964E4D_STRUCT_2_968218D01C8FFD55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x884CF0)
#define CLASS_3_C91109162D964E4D_STRUCT_2_968218D01C8FFD55_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Struct_2_968218D01C8FFD55_TypeDefinitionIndex = 59385;

struct alignas(8) Class_3_C91109162D964E4D_Struct_2_968218D01C8FFD55
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9> Field_2_7; // 0x10
	::System::Collections::Generic::List_1<::Class_3_F61F3C9E55A83BDE*>* Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x38
	::System::Boolean Field_2_6; // 0x48
	::System::Int32 Field_2_0; // 0x4C
	::System::Single Field_2_5; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_968218D01C8FFD55_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_STRUCT_2_968218D01C8FFD55_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
