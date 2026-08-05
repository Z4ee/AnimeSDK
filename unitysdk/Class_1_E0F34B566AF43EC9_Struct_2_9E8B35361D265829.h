#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F7525A0905C17984;
class Class_5_DCFF91E03A93C03C;
namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_9E8B35361D265829_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x819CB0)
#define CLASS_1_E0F34B566AF43EC9_STRUCT_2_9E8B35361D265829_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Struct_2_9E8B35361D265829_TypeDefinitionIndex = 54842;

struct alignas(8) Class_1_E0F34B566AF43EC9_Struct_2_9E8B35361D265829
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x10
	::Class_1_F7525A0905C17984* Field_2_4; // 0x20
	::System::String* Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x30
	::Class_5_DCFF91E03A93C03C* Field_2_7; // 0x40
	::System::Action* Field_2_5; // 0x48
	::System::Int32 Field_2_1; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_9E8B35361D265829_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_STRUCT_2_9E8B35361D265829_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
