#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AF0F60B7EC92FD6A;
class Class_2_AF0F60B7EC92FD6A_Class_1_DC0CA1F07A0E109A_11;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7ADFF0)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_29A6996967A53615_TypeDefinitionIndex = 65051;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_29A6996967A53615
{
	::Class_2_AF0F60B7EC92FD6A_Class_1_DC0CA1F07A0E109A_11* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x28
	::Class_2_AF0F60B7EC92FD6A* Field_2_2; // 0x38
	::System::UInt32 Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x44
	::Enum_3_0A3761FE34514D6C_37 Field_2_5; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
