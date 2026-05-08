#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71A490)
#define CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_15997749BF39371F_TypeDefinitionIndex = 61310;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_15997749BF39371F
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x20
	::Class_2_3CC769D284A54927* Field_2_2; // 0x30
	::System::Int32 Field_2_7; // 0x38
	::Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199 Field_2_5; // 0x3C
	::System::Boolean Field_2_4; // 0x40
	::System::Int32 Field_2_3; // 0x44
	::UnityEngine::Vector3 Field_2_10; // 0x48
	::System::Single Field_2_9; // 0x54
	::System::Single Field_2_12; // 0x58
	::System::Int32 Field_2_0; // 0x5C
	::UnityEngine::Vector3 Field_2_8; // 0x60
	::UnityEngine::Vector3 Field_2_11; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
