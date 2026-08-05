#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_2_STRUCT_2_0EA1A4D94F9432AB_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x863890)
#define CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_2_STRUCT_2_0EA1A4D94F9432AB_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC_2_Struct_2_0EA1A4D94F9432AB_1_TypeDefinitionIndex = 63465;

struct alignas(8) Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC_2_Struct_2_0EA1A4D94F9432AB_1
{
	::Class_1_30CE0306623609F9_Class_1_40B4FD560145D6BC_2* Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_2_STRUCT_2_0EA1A4D94F9432AB_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_30CE0306623609F9_CLASS_1_40B4FD560145D6BC_2_STRUCT_2_0EA1A4D94F9432AB_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
