#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_65419CA6E2A37D2C_Class_1_F5A088C15CB73960;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_65419CA6E2A37D2C_CLASS_1_F5A088C15CB73960_STRUCT_2_604119849220121B_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CCE00)
#define CLASS_1_65419CA6E2A37D2C_CLASS_1_F5A088C15CB73960_STRUCT_2_604119849220121B_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_65419CA6E2A37D2C_Class_1_F5A088C15CB73960_Struct_2_604119849220121B_3_TypeDefinitionIndex = 43985;

struct alignas(8) Class_1_65419CA6E2A37D2C_Class_1_F5A088C15CB73960_Struct_2_604119849220121B_3
{
	::System::Threading::CancellationToken Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x28
	::Class_1_65419CA6E2A37D2C_Class_1_F5A088C15CB73960* Field_2_0; // 0x38
	::System::Int32 Field_2_2; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_CLASS_1_F5A088C15CB73960_STRUCT_2_604119849220121B_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_CLASS_1_F5A088C15CB73960_STRUCT_2_604119849220121B_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
