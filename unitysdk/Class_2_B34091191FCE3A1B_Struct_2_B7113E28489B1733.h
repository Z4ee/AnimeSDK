#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B34091191FCE3A1B;
class Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84B5B0)
#define CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_Struct_2_B7113E28489B1733_TypeDefinitionIndex = 87060;

struct alignas(8) Class_2_B34091191FCE3A1B_Struct_2_B7113E28489B1733
{
	::Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_1* Field_2_5; // 0x10
	::Class_2_B34091191FCE3A1B* Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_4; // 0x30
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_11; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x40
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_10; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
