#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_8A4493ED0F5C1CB8_Class_1_35B910601396194F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_8A4493ED0F5C1CB8_CLASS_1_35B910601396194F_STRUCT_2_737E760C09189B15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CE70)
#define CLASS_2_8A4493ED0F5C1CB8_CLASS_1_35B910601396194F_STRUCT_2_737E760C09189B15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_8A4493ED0F5C1CB8_Class_1_35B910601396194F_Struct_2_737E760C09189B15_TypeDefinitionIndex = 41313;

struct alignas(8) Class_2_8A4493ED0F5C1CB8_Class_1_35B910601396194F_Struct_2_737E760C09189B15
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_2_8A4493ED0F5C1CB8_Class_1_35B910601396194F* Field_2_2; // 0x30
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::UnityEngine::Vector3 Field_2_5; // 0x44
	::UnityEngine::Vector3 Field_2_6; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A4493ED0F5C1CB8_CLASS_1_35B910601396194F_STRUCT_2_737E760C09189B15_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_8A4493ED0F5C1CB8_CLASS_1_35B910601396194F_STRUCT_2_737E760C09189B15_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
