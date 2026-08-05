#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_513F0BF50C31207D_Class_1_10B680992CD21579;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8A5390)
#define CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_513F0BF50C31207D_Struct_2_048CE7BB1057CB3E_TypeDefinitionIndex = 49853;

struct alignas(8) Class_1_513F0BF50C31207D_Struct_2_048CE7BB1057CB3E
{
	::Class_1_513F0BF50C31207D_Class_1_10B680992CD21579* Field_2_11; // 0x10
	::System::Action_1<::System::Boolean>* Field_2_10; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_8; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_9; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_18; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x40
	::System::UInt32 Field_2_4; // 0x50
	::UnityEngine::Vector3 Field_2_5; // 0x54
	::System::Int32 Field_2_7; // 0x60
	::System::Int32 Field_2_19; // 0x64
	::UnityEngine::Vector3 Field_2_6; // 0x68
	::System::Boolean Field_2_12; // 0x74
	::System::Boolean Field_2_13; // 0x75
	::System::Single Field_2_14; // 0x78
	::System::Single Field_2_15; // 0x7C
	::System::Int32 Field_2_1; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
