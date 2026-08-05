#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AF0F60B7EC92FD6A;
class Class_2_AF0F60B7EC92FD6A_Class_1_DC0CA1F07A0E109A_16;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x698AE0)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_29A6996967A53615_TypeDefinitionIndex = 85522;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_29A6996967A53615
{
	::Class_2_AF0F60B7EC92FD6A* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x18
	::Class_2_AF0F60B7EC92FD6A_Class_1_DC0CA1F07A0E109A_16* Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x30
	::System::Int32 Field_2_1; // 0x40
	::Enum_3_0A3761FE34514D6C_3 Field_2_4; // 0x44
	::System::UInt32 Field_2_6; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
