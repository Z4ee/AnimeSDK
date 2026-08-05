#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_F77ED7003168423B;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_F77ED7003168423B_STRUCT_2_834687EAB5315D08_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x850CD0)
#define CLASS_2_F77ED7003168423B_STRUCT_2_834687EAB5315D08_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_F77ED7003168423B_Struct_2_834687EAB5315D08_3_TypeDefinitionIndex = 63175;

struct alignas(8) Class_2_F77ED7003168423B_Struct_2_834687EAB5315D08_3
{
	::Class_2_F77ED7003168423B* Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F77ED7003168423B_STRUCT_2_834687EAB5315D08_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_F77ED7003168423B_STRUCT_2_834687EAB5315D08_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
