#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_5.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AF0F60B7EC92FD6A;
class Class_2_AF0F60B7EC92FD6A_Class_1_DC0CA1F07A0E109A_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FC3D0)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_29A6996967A53615_TypeDefinitionIndex = 43262;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_29A6996967A53615
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_AF0F60B7EC92FD6A* Field_2_2; // 0x20
	::Class_2_AF0F60B7EC92FD6A_Class_1_DC0CA1F07A0E109A_1* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::System::Int32 Field_2_0; // 0x40
	::Enum_3_0A3761FE34514D6C_5 Field_2_5; // 0x44
	::System::UInt32 Field_2_3; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_29A6996967A53615_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
