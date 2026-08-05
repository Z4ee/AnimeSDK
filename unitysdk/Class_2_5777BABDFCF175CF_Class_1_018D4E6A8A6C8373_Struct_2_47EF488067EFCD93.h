#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_5777BABDFCF175CF_Class_1_018D4E6A8A6C8373;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_5777BABDFCF175CF_CLASS_1_018D4E6A8A6C8373_STRUCT_2_47EF488067EFCD93_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7133C0)
#define CLASS_2_5777BABDFCF175CF_CLASS_1_018D4E6A8A6C8373_STRUCT_2_47EF488067EFCD93_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_5777BABDFCF175CF_Class_1_018D4E6A8A6C8373_Struct_2_47EF488067EFCD93_TypeDefinitionIndex = 40612;

struct alignas(8) Class_2_5777BABDFCF175CF_Class_1_018D4E6A8A6C8373_Struct_2_47EF488067EFCD93
{
	::Class_2_5777BABDFCF175CF_Class_1_018D4E6A8A6C8373* Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Single Field_2_7; // 0x38
	::System::Int32 Field_2_2; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5777BABDFCF175CF_CLASS_1_018D4E6A8A6C8373_STRUCT_2_47EF488067EFCD93_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_5777BABDFCF175CF_CLASS_1_018D4E6A8A6C8373_STRUCT_2_47EF488067EFCD93_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
