#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_969;
class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81C710)
#define CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_3CCB8209FBDD8A6E_10_TypeDefinitionIndex = 76697;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_3CCB8209FBDD8A6E_10
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x10
	::Class_2_3CC769D284A54927* Field_2_6; // 0x20
	::Class_2_208CC9941471731A_969* Field_2_5; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_10_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_3CCB8209FBDD8A6E_10_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
