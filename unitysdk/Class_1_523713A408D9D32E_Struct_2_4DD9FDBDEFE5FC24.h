#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_523713A408D9D32E_Class_1_8948AD68D91D91A5;
class Class_1_76DB84416A8BD8BA;
class Class_1_D375C91CCE5D3999;
class Class_1_F24A790D52CF0024;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CC0D0)
#define CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_523713A408D9D32E_Struct_2_4DD9FDBDEFE5FC24_TypeDefinitionIndex = 50246;

struct alignas(8) Class_1_523713A408D9D32E_Struct_2_4DD9FDBDEFE5FC24
{
	::Class_1_76DB84416A8BD8BA* Field_2_6; // 0x10
	::Class_1_F24A790D52CF0024* Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_0; // 0x20
	::Class_1_523713A408D9D32E_Class_1_8948AD68D91D91A5* Field_2_5; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x40
	::Class_1_D375C91CCE5D3999* Field_2_7; // 0x50
	::System::Int32 Field_2_1; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_523713A408D9D32E_STRUCT_2_4DD9FDBDEFE5FC24_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
