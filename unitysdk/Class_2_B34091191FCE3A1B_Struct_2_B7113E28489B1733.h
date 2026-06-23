#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B34091191FCE3A1B;
class Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_3;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79BEB0)
#define CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_Struct_2_B7113E28489B1733_TypeDefinitionIndex = 86409;

struct alignas(8) Class_2_B34091191FCE3A1B_Struct_2_B7113E28489B1733
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_B34091191FCE3A1B_Class_1_4F7CF8049BCF140A_3* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x28
	::Class_2_B34091191FCE3A1B* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_4; // 0x40
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_5; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_6; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_B7113E28489B1733_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
