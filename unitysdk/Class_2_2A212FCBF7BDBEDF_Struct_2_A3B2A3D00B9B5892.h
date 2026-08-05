#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C66E4DE78E6562C8_Enum_3_1C483F2753E8B2F7.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_1155;
class Class_2_2A212FCBF7BDBEDF;
class Class_2_2A212FCBF7BDBEDF_Class_1_51D09B1BA7485081;
class Class_2_2A212FCBF7BDBEDF_Class_1_F1D9F4536221043B;
class Class_3_8C941823705A4CBB_24;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D7E90)
#define CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_2A212FCBF7BDBEDF_Struct_2_A3B2A3D00B9B5892_TypeDefinitionIndex = 66091;

struct alignas(8) Class_2_2A212FCBF7BDBEDF_Struct_2_A3B2A3D00B9B5892
{
	::System::Collections::Generic::List_1<::Class_3_8C941823705A4CBB_24*>* Field_2_4; // 0x10
	::Class_2_2A212FCBF7BDBEDF_Class_1_51D09B1BA7485081* Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x20
	::Class_2_2A212FCBF7BDBEDF* Field_2_7; // 0x30
	::Class_2_208CC9941471731A_1155* Field_2_10; // 0x38
	::Class_2_2A212FCBF7BDBEDF_Class_1_F1D9F4536221043B* Field_2_6; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x48
	::System::Collections::Generic::IEnumerator_1<::Class_2_208CC9941471731A_1155*>* Field_2_11; // 0x58
	::Class_2_C66E4DE78E6562C8_Enum_3_1C483F2753E8B2F7 Field_2_9; // 0x60
	::System::Int32 Field_2_1; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_2A212FCBF7BDBEDF_STRUCT_2_A3B2A3D00B9B5892_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
