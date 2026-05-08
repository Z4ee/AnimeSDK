#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_5.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F6B65C10EC800BA8;
class Class_2_AF0F60B7EC92FD6A;
class Class_3_07AAFA6F7F79BEB3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0710)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_3566E50F0EB98E1C_TypeDefinitionIndex = 43263;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_3566E50F0EB98E1C
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x20
	::Class_3_07AAFA6F7F79BEB3* Field_2_2; // 0x30
	::Class_2_AF0F60B7EC92FD6A* Field_2_3; // 0x38
	::Class_1_F6B65C10EC800BA8* Field_2_4; // 0x40
	::Enum_3_0A3761FE34514D6C_5 Field_2_5; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
