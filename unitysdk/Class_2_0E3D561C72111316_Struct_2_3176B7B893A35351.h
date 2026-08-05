#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_0E3D561C72111316;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_0E3D561C72111316_STRUCT_2_3176B7B893A35351_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78FAF0)
#define CLASS_2_0E3D561C72111316_STRUCT_2_3176B7B893A35351_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B5E0)

inline static constexpr unsigned int Class_2_0E3D561C72111316_Struct_2_3176B7B893A35351_TypeDefinitionIndex = 43937;

struct alignas(8) Class_2_0E3D561C72111316_Struct_2_3176B7B893A35351
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x20
	::Class_2_0E3D561C72111316* Field_2_0; // 0x40
	::System::Int32 Field_2_2; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E3D561C72111316_STRUCT_2_3176B7B893A35351_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_0E3D561C72111316_STRUCT_2_3176B7B893A35351_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
