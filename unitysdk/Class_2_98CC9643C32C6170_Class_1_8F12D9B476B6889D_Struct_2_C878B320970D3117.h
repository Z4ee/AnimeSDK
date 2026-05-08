#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF;
class Class_2_98CC9643C32C6170_Class_1_8F12D9B476B6889D;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D_STRUCT_2_C878B320970D3117_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CE80)
#define CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D_STRUCT_2_C878B320970D3117_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_98CC9643C32C6170_Class_1_8F12D9B476B6889D_Struct_2_C878B320970D3117_TypeDefinitionIndex = 66449;

struct alignas(8) Class_2_98CC9643C32C6170_Class_1_8F12D9B476B6889D_Struct_2_C878B320970D3117
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_2_98CC9643C32C6170_Class_1_32BCD41779DEEDDF*> Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_2_98CC9643C32C6170_Class_1_8F12D9B476B6889D* Field_2_2; // 0x38
	::System::Boolean Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D_STRUCT_2_C878B320970D3117_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_98CC9643C32C6170_CLASS_1_8F12D9B476B6889D_STRUCT_2_C878B320970D3117_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
