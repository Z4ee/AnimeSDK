#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A00B784DE48ED0A8;
class Class_2_70F762C4E2F0AD66_Class_1_DC0CA1F07A0E109A_12;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_70F762C4E2F0AD66_STRUCT_2_C23A1383F55B8A03_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x816680)
#define CLASS_2_70F762C4E2F0AD66_STRUCT_2_C23A1383F55B8A03_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_70F762C4E2F0AD66_Struct_2_C23A1383F55B8A03_TypeDefinitionIndex = 66790;

struct alignas(8) Class_2_70F762C4E2F0AD66_Struct_2_C23A1383F55B8A03
{
	::Class_2_70F762C4E2F0AD66_Class_1_DC0CA1F07A0E109A_12* Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_4; // 0x30
	::Class_1_A00B784DE48ED0A8* Field_2_2; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x40
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_5; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70F762C4E2F0AD66_STRUCT_2_C23A1383F55B8A03_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_70F762C4E2F0AD66_STRUCT_2_C23A1383F55B8A03_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
