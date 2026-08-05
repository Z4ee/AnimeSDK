#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0E0FDB8D70D6AE90_Class_1_20FD61DE54E1C619;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_0026E6B87BE3666E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8642C0)
#define CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_0026E6B87BE3666E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_0E0FDB8D70D6AE90_Struct_2_0026E6B87BE3666E_TypeDefinitionIndex = 91448;

struct alignas(8) Class_1_0E0FDB8D70D6AE90_Struct_2_0026E6B87BE3666E
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_2; // 0x10
	::System::Action* Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::Class_1_0E0FDB8D70D6AE90_Class_1_20FD61DE54E1C619* Field_2_7; // 0x40
	::System::Int32 Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_0026E6B87BE3666E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_0E0FDB8D70D6AE90_STRUCT_2_0026E6B87BE3666E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
