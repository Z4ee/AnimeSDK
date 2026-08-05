#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_71839714FF924929;
class Class_2_71839714FF924929_Class_1_C40C6E99261D653F;
class Class_3_48A3D3A34C52331D_39;
class Class_3_5175B904C7D2D4F0_1;
class Class_3_6EF456A21AE85EEC_220;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C33E0)
#define CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_71839714FF924929_Struct_2_EA8B1F39673F2596_TypeDefinitionIndex = 44072;

struct alignas(8) Class_2_71839714FF924929_Struct_2_EA8B1F39673F2596
{
	::System::Collections::Generic::List_1<::Class_3_6EF456A21AE85EEC_220*>* Field_2_8; // 0x10
	::System::Threading::CancellationToken Field_2_14; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_3_48A3D3A34C52331D_39*> Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_3_5175B904C7D2D4F0_1*>* Field_2_9; // 0x38
	::Class_2_71839714FF924929* Field_2_15; // 0x40
	::Class_2_71839714FF924929_Class_1_C40C6E99261D653F* Field_2_13; // 0x48
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x50
	::System::Int32 Field_2_1; // 0x60
	::System::Int32 Field_2_4; // 0x64
	::System::Int32 Field_2_5; // 0x68
	::System::Single Field_2_6; // 0x6C
	::System::UInt32 Field_2_7; // 0x70
	::System::Boolean Field_2_11; // 0x74
	::System::Boolean Field_2_10; // 0x75

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_71839714FF924929_STRUCT_2_EA8B1F39673F2596_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
