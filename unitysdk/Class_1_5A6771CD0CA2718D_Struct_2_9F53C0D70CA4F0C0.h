#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CLASS_1_5A6771CD0CA2718D_STRUCT_2_9F53C0D70CA4F0C0_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x6E3500)

inline static constexpr unsigned int Class_1_5A6771CD0CA2718D_Struct_2_9F53C0D70CA4F0C0_TypeDefinitionIndex = 48962;

struct alignas(8) Class_1_5A6771CD0CA2718D_Struct_2_9F53C0D70CA4F0C0
{
	::System::Single Field_2_0; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_2_1; // 0x14
	::System::Action* Field_2_2; // 0x18

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A6771CD0CA2718D_STRUCT_2_9F53C0D70CA4F0C0_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}
};
