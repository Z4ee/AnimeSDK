#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_523713A408D9D32E_Class_1_8948AD68D91D91A5;
class Class_1_76DB84416A8BD8BA;
class Class_1_A047EA5169B6B30F;
class Class_1_D375C91CCE5D3999;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x80C6B0)
#define CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_523713A408D9D32E_Struct_2_4DD9FDBDEFE5FC24_2_TypeDefinitionIndex = 73181;

struct alignas(8) Class_1_523713A408D9D32E_Struct_2_4DD9FDBDEFE5FC24_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x10
	::Class_1_523713A408D9D32E_Class_1_8948AD68D91D91A5* Field_2_4; // 0x28
	::Class_1_D375C91CCE5D3999* Field_2_2; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x38
	::Class_1_76DB84416A8BD8BA* Field_2_3; // 0x48
	::Class_1_A047EA5169B6B30F* Field_2_5; // 0x50
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
