#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_821B2DFE9E04B137.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define STRUCT_2_821B2DFE9E04B137_STRUCT_2_67223CB5E8E5E154_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E14B0)
#define STRUCT_2_821B2DFE9E04B137_STRUCT_2_67223CB5E8E5E154_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Struct_2_821B2DFE9E04B137_Struct_2_67223CB5E8E5E154_TypeDefinitionIndex = 51534;

struct alignas(8) Struct_2_821B2DFE9E04B137_Struct_2_67223CB5E8E5E154
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::Struct_2_821B2DFE9E04B137 Field_2_3; // 0x30
	::System::Threading::CancellationToken Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_STRUCT_2_67223CB5E8E5E154_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + STRUCT_2_821B2DFE9E04B137_STRUCT_2_67223CB5E8E5E154_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
