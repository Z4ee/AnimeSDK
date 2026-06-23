#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FB4FF62D4AF03DC6_Class_1_15A933A3E1678964;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964_STRUCT_2_A2D92FDACAFA70D5_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F85F0)
#define CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964_STRUCT_2_A2D92FDACAFA70D5_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_FB4FF62D4AF03DC6_Class_1_15A933A3E1678964_Struct_2_A2D92FDACAFA70D5_1_TypeDefinitionIndex = 69210;

struct alignas(8) Class_2_FB4FF62D4AF03DC6_Class_1_15A933A3E1678964_Struct_2_A2D92FDACAFA70D5_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x10
	::Class_2_FB4FF62D4AF03DC6_Class_1_15A933A3E1678964* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964_STRUCT_2_A2D92FDACAFA70D5_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_FB4FF62D4AF03DC6_CLASS_1_15A933A3E1678964_STRUCT_2_A2D92FDACAFA70D5_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
