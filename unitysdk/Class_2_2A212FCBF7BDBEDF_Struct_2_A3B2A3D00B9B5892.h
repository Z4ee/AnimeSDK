#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C04F87C132BA9A06_Enum_3_1C483F2753E8B2F7.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_163;
class Class_2_2A212FCBF7BDBEDF;
class Class_2_2A212FCBF7BDBEDF_Class_1_94342D229F6596E1;
class Class_2_2A212FCBF7BDBEDF_Class_1_F1D9F4536221043B;
class Class_3_8C941823705A4CBB_10;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5D7720)
#define CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_2A212FCBF7BDBEDF_Struct_2_A3B2A3D00B9B5892_TypeDefinitionIndex = 43990;

struct alignas(8) Class_2_2A212FCBF7BDBEDF_Struct_2_A3B2A3D00B9B5892
{
	::System::Collections::Generic::List_1<::Class_3_8C941823705A4CBB_10*>* Field_2_5; // 0x10
	::System::Collections::Generic::IEnumerator_1<::Class_2_208CC9941471731A_163*>* Field_2_6; // 0x18
	::Class_2_208CC9941471731A_163* Field_2_7; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_2_2A212FCBF7BDBEDF_Class_1_F1D9F4536221043B* Field_2_3; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x40
	::Class_2_2A212FCBF7BDBEDF_Class_1_94342D229F6596E1* Field_2_4; // 0x50
	::Class_2_2A212FCBF7BDBEDF* Field_2_2; // 0x58
	::Class_2_C04F87C132BA9A06_Enum_3_1C483F2753E8B2F7 Field_2_8; // 0x60
	::System::Int32 Field_2_0; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
