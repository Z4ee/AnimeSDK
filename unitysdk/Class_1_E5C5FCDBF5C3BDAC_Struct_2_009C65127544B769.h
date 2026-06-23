#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_E5C5FCDBF5C3BDAC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_E5C5FCDBF5C3BDAC_STRUCT_2_009C65127544B769_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82FA50)
#define CLASS_1_E5C5FCDBF5C3BDAC_STRUCT_2_009C65127544B769_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_E5C5FCDBF5C3BDAC_Struct_2_009C65127544B769_TypeDefinitionIndex = 48998;

struct alignas(8) Class_1_E5C5FCDBF5C3BDAC_Struct_2_009C65127544B769
{
	::System::Threading::CancellationTokenSource* Field_2_3; // 0x10
	::Class_1_E5C5FCDBF5C3BDAC* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x30
	::System::Single Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x44
	::System::Single Field_2_4; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_STRUCT_2_009C65127544B769_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_STRUCT_2_009C65127544B769_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
