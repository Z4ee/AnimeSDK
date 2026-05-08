#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_4E1479A8543BD31B;
class Class_2_4E1479A8543BD31B_Class_1_74939A8021932E66;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_4E1479A8543BD31B_STRUCT_2_4DD9FDBDEFE5FC24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79EB70)
#define CLASS_2_4E1479A8543BD31B_STRUCT_2_4DD9FDBDEFE5FC24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_4E1479A8543BD31B_Struct_2_4DD9FDBDEFE5FC24_TypeDefinitionIndex = 51925;

struct alignas(8) Class_2_4E1479A8543BD31B_Struct_2_4DD9FDBDEFE5FC24
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x28
	::Class_2_4E1479A8543BD31B* Field_2_2; // 0x38
	::Class_2_4E1479A8543BD31B_Class_1_74939A8021932E66* Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_3; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B_STRUCT_2_4DD9FDBDEFE5FC24_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_4E1479A8543BD31B_STRUCT_2_4DD9FDBDEFE5FC24_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
