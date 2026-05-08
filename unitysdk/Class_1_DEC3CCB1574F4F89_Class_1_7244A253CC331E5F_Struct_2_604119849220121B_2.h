#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DEC3CCB1574F4F89_Class_1_7244A253CC331E5F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_DEC3CCB1574F4F89_CLASS_1_7244A253CC331E5F_STRUCT_2_604119849220121B_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x68EF30)
#define CLASS_1_DEC3CCB1574F4F89_CLASS_1_7244A253CC331E5F_STRUCT_2_604119849220121B_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_DEC3CCB1574F4F89_Class_1_7244A253CC331E5F_Struct_2_604119849220121B_2_TypeDefinitionIndex = 39901;

struct alignas(8) Class_1_DEC3CCB1574F4F89_Class_1_7244A253CC331E5F_Struct_2_604119849220121B_2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Class_1_DEC3CCB1574F4F89_Class_1_7244A253CC331E5F* Field_2_2; // 0x20
	::System::Threading::CancellationToken Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_CLASS_1_7244A253CC331E5F_STRUCT_2_604119849220121B_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_CLASS_1_7244A253CC331E5F_STRUCT_2_604119849220121B_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
