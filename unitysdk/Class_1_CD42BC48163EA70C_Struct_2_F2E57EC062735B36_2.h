#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_CD42BC48163EA70C;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_CD42BC48163EA70C_STRUCT_2_F2E57EC062735B36_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75F5A0)
#define CLASS_1_CD42BC48163EA70C_STRUCT_2_F2E57EC062735B36_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

inline static constexpr unsigned int Class_1_CD42BC48163EA70C_Struct_2_F2E57EC062735B36_2_TypeDefinitionIndex = 71289;

struct alignas(8) Class_1_CD42BC48163EA70C_Struct_2_F2E57EC062735B36_2
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> Field_2_3; // 0x30
	::Class_1_CD42BC48163EA70C* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD42BC48163EA70C_STRUCT_2_F2E57EC062735B36_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_CD42BC48163EA70C_STRUCT_2_F2E57EC062735B36_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
