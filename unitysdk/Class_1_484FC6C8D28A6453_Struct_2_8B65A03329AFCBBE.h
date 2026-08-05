#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_484FC6C8D28A6453;
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_484FC6C8D28A6453_STRUCT_2_8B65A03329AFCBBE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D2AC0)
#define CLASS_1_484FC6C8D28A6453_STRUCT_2_8B65A03329AFCBBE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_484FC6C8D28A6453_Struct_2_8B65A03329AFCBBE_TypeDefinitionIndex = 61553;

struct alignas(8) Class_1_484FC6C8D28A6453_Struct_2_8B65A03329AFCBBE
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x20
	::MoleMole::Vehicle::VehicleTestCameraMono* Field_2_5; // 0x28
	::PipelineCamera::ScopedDelegateHandle Field_2_4; // 0x30
	::Class_1_484FC6C8D28A6453* Field_2_6; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_STRUCT_2_8B65A03329AFCBBE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_484FC6C8D28A6453_STRUCT_2_8B65A03329AFCBBE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
