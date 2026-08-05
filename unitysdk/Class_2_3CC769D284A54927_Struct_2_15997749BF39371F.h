#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x72F3F0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_15997749BF39371F_TypeDefinitionIndex = 76720;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_15997749BF39371F
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x20
	::Class_2_3CC769D284A54927* Field_2_6; // 0x30
	::UnityEngine::Vector3 Field_2_13; // 0x38
	::System::Int32 Field_2_9; // 0x44
	::System::Boolean Field_2_4; // 0x48
	::System::Single Field_2_12; // 0x4C
	::UnityEngine::Vector3 Field_2_14; // 0x50
	::System::Int32 Field_2_5; // 0x5C
	::Class_2_3CC769D284A54927_Enum_3_F887AE78DCD8C199 Field_2_11; // 0x60
	::System::Int32 Field_2_0; // 0x64
	::System::Single Field_2_15; // 0x68
	::UnityEngine::Vector3 Field_2_8; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_15997749BF39371F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
