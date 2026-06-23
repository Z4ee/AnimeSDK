#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/ValueType.h"

class Class_1_989A86EC3BAB59AF;
class Class_2_AF0F60B7EC92FD6A;
class Class_3_07AAFA6F7F79BEB3_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C0E40)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_3566E50F0EB98E1C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_3566E50F0EB98E1C_TypeDefinitionIndex = 65053;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_3566E50F0EB98E1C
{
	::Class_2_AF0F60B7EC92FD6A* Field_2_3; // 0x10
	::Class_1_989A86EC3BAB59AF* Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::Class_3_07AAFA6F7F79BEB3_1* Field_2_2; // 0x40
	::Enum_3_0A3761FE34514D6C_37 Field_2_5; // 0x48
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
