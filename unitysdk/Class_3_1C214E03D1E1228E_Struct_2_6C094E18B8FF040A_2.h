#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_1C214E03D1E1228E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_1C214E03D1E1228E_STRUCT_2_6C094E18B8FF040A_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x776D40)
#define CLASS_3_1C214E03D1E1228E_STRUCT_2_6C094E18B8FF040A_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_1C214E03D1E1228E_Struct_2_6C094E18B8FF040A_2_TypeDefinitionIndex = 63354;

struct alignas(8) Class_3_1C214E03D1E1228E_Struct_2_6C094E18B8FF040A_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x10
	::Class_3_1C214E03D1E1228E* Field_2_7; // 0x20
	::System::Int32 Field_2_1; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E_STRUCT_2_6C094E18B8FF040A_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_1C214E03D1E1228E_STRUCT_2_6C094E18B8FF040A_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
