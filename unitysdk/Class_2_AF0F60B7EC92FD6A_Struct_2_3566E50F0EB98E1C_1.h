#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_68FD22767A42D3FD;
class Class_2_AF0F60B7EC92FD6A;
class Class_3_07AAFA6F7F79BEB3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86AC90)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_3566E50F0EB98E1C_1_TypeDefinitionIndex = 85518;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_3566E50F0EB98E1C_1
{
	::Class_1_68FD22767A42D3FD* Field_2_5; // 0x10
	::Class_3_07AAFA6F7F79BEB3* Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x30
	::Class_2_AF0F60B7EC92FD6A* Field_2_6; // 0x40
	::Enum_3_0A3761FE34514D6C_3 Field_2_4; // 0x48
	::System::Int32 Field_2_1; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
