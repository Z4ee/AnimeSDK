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

#define CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5942D0)
#define CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_513F0BF50C31207D_Struct_2_048CE7BB1057CB3E_5_TypeDefinitionIndex = 86267;

struct alignas(8) Class_1_513F0BF50C31207D_Struct_2_048CE7BB1057CB3E_5
{
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_8; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_9; // 0x18
	::System::Action_1<::System::Boolean>* Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x38
	::Class_1_513F0BF50C31207D_Class_1_10B680992CD21579* Field_2_6; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::UnityEngine::Vector3 Field_2_3; // 0x54
	::System::Single Field_2_10; // 0x60
	::UnityEngine::Vector3 Field_2_4; // 0x64
	::System::UInt32 Field_2_5; // 0x70
	::System::Single Field_2_11; // 0x74
	::System::Int32 Field_2_2; // 0x78
	::System::Int32 Field_2_14; // 0x7C
	::System::Boolean Field_2_12; // 0x80
	::System::Boolean Field_2_13; // 0x81

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_STRUCT_2_048CE7BB1057CB3E_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
