#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_AF0F60B7EC92FD6A;
class Class_3_07AAFA6F7F79BEB3_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_ADA0DDC01EC4BFFB_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A4FA0)
#define CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_ADA0DDC01EC4BFFB_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Struct_2_ADA0DDC01EC4BFFB_1_TypeDefinitionIndex = 65055;

struct alignas(8) Class_2_AF0F60B7EC92FD6A_Struct_2_ADA0DDC01EC4BFFB_1
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::Class_2_AF0F60B7EC92FD6A* Field_2_2; // 0x40
	::Class_3_07AAFA6F7F79BEB3_1* Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_ADA0DDC01EC4BFFB_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_STRUCT_2_ADA0DDC01EC4BFFB_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
