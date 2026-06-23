#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_821B2DFE9E04B137.h"
#include "unitysdk/Struct_2_9D8B950D8621E6B3.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Struct_2_821B2DFE9E04B137_Class_1_1A520E7D82BE4A56_4;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define STRUCT_2_821B2DFE9E04B137_STRUCT_2_85A27519EF44075E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80E750)
#define STRUCT_2_821B2DFE9E04B137_STRUCT_2_85A27519EF44075E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Struct_2_821B2DFE9E04B137_Struct_2_85A27519EF44075E_TypeDefinitionIndex = 51537;

struct alignas(8) Struct_2_821B2DFE9E04B137_Struct_2_85A27519EF44075E
{
	::Struct_2_821B2DFE9E04B137_Class_1_1A520E7D82BE4A56_4* Field_2_4; // 0x10
	::System::String* Field_2_3; // 0x18
	::System::Threading::CancellationToken Field_2_2; // 0x20
	::Struct_2_821B2DFE9E04B137 Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x50
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_9D8B950D8621E6B3> Field_2_6; // 0x60
	::System::Int32 Field_2_0; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_STRUCT_2_85A27519EF44075E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_STRUCT_2_85A27519EF44075E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
