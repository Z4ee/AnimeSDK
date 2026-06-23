#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_A49223FCF7A3C1CF;
class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_19A7DE656F90D82C;
class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x786490)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_4DD9FDBDEFE5FC24_TypeDefinitionIndex = 51032;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_4DD9FDBDEFE5FC24
{
	::Class_2_A49223FCF7A3C1CF* Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Field_2_1; // 0x18
	::Class_2_EC5A7AD641CF932C* Field_2_4; // 0x30
	::Class_2_EC5A7AD641CF932C_Class_1_19A7DE656F90D82C* Field_2_5; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x40
	::System::Int32 Field_2_8; // 0x50
	::System::Int32 Field_2_0; // 0x54
	::System::Int32 Field_2_2; // 0x58
	::System::Boolean Field_2_3; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
