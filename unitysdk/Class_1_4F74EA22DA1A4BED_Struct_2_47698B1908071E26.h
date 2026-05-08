#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_4F74EA22DA1A4BED_Class_1_593B89773C2BA19D_2;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_4F74EA22DA1A4BED_STRUCT_2_47698B1908071E26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5C44C0)
#define CLASS_1_4F74EA22DA1A4BED_STRUCT_2_47698B1908071E26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_4F74EA22DA1A4BED_Struct_2_47698B1908071E26_TypeDefinitionIndex = 75999;

struct alignas(8) Class_1_4F74EA22DA1A4BED_Struct_2_47698B1908071E26
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x38
	::Class_1_4F74EA22DA1A4BED_Class_1_593B89773C2BA19D_2* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED_STRUCT_2_47698B1908071E26_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_4F74EA22DA1A4BED_STRUCT_2_47698B1908071E26_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
