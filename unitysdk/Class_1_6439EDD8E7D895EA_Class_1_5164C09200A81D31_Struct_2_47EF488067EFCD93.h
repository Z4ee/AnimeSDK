#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31;
class Class_1_F5B35B1B6669CF16;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_47EF488067EFCD93_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FA770)
#define CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_47EF488067EFCD93_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31_Struct_2_47EF488067EFCD93_TypeDefinitionIndex = 76000;

struct alignas(8) Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31_Struct_2_47EF488067EFCD93
{
	::Class_1_6439EDD8E7D895EA_Class_1_5164C09200A81D31* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Class_1_F5B35B1B6669CF16* Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
	::System::Int32 Field_2_0; // 0x40
	::System::Single Field_2_4; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_47EF488067EFCD93_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_6439EDD8E7D895EA_CLASS_1_5164C09200A81D31_STRUCT_2_47EF488067EFCD93_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
