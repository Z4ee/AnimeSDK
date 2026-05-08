#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_D3C819F24441B3C6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76F7C0)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_D3C819F24441B3C6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_D3C819F24441B3C6_TypeDefinitionIndex = 79722;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_D3C819F24441B3C6
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::System::String* Field_2_9; // 0x20
	::Class_2_EC5A7AD641CF932C* Field_2_2; // 0x28
	::System::Collections::Generic::IList_1<::System::String*>* Field_2_10; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> Field_2_11; // 0x38
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_5; // 0x54
	::System::Boolean Field_2_6; // 0x58
	::UnityEngine::Vector3 Field_2_7; // 0x5C
	::System::Int32 Field_2_3; // 0x68
	::System::Int32 Field_2_4; // 0x6C
	::UnityEngine::Quaternion Field_2_8; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_D3C819F24441B3C6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_D3C819F24441B3C6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
