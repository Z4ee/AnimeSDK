#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F84D85BE7187BFCA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_F84D85BE7187BFCA_STRUCT_2_6B65848E21B45D2A_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x701830)
#define CLASS_1_F84D85BE7187BFCA_STRUCT_2_6B65848E21B45D2A_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_F84D85BE7187BFCA_Struct_2_6B65848E21B45D2A_4_TypeDefinitionIndex = 70587;

struct alignas(8) Class_1_F84D85BE7187BFCA_Struct_2_6B65848E21B45D2A_4
{
	::Class_1_F84D85BE7187BFCA* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F84D85BE7187BFCA_STRUCT_2_6B65848E21B45D2A_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_F84D85BE7187BFCA_STRUCT_2_6B65848E21B45D2A_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
