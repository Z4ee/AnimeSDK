#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_821B2DFE9E04B137.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_441;
class Struct_2_821B2DFE9E04B137_Class_1_1A520E7D82BE4A56_13;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define STRUCT_2_821B2DFE9E04B137_STRUCT_2_F25DA902302068B3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x717A40)
#define STRUCT_2_821B2DFE9E04B137_STRUCT_2_F25DA902302068B3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Struct_2_821B2DFE9E04B137_Struct_2_F25DA902302068B3_TypeDefinitionIndex = 76396;

struct alignas(8) Struct_2_821B2DFE9E04B137_Struct_2_F25DA902302068B3
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Struct_2_821B2DFE9E04B137 Field_2_5; // 0x18
	::System::String* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x48
	::Struct_2_821B2DFE9E04B137_Class_1_1A520E7D82BE4A56_13* Field_2_4; // 0x58
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_441*> Field_2_6; // 0x60
	::System::Int32 Field_2_0; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_STRUCT_2_F25DA902302068B3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_STRUCT_2_F25DA902302068B3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
