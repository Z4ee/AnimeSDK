#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BAF3B1E12B7EBB99;

#define CLASS_2_88E277501767CDD4_STRUCT_2_BC9E8EC7B8958435_METHOD_2_67A6BF54CE30159B_OFFSET UNITYSDK_OFFSET(0x7BE7A0)

inline static constexpr unsigned int Class_2_88E277501767CDD4_Struct_2_BC9E8EC7B8958435_TypeDefinitionIndex = 76418;

struct alignas(8) Class_2_88E277501767CDD4_Struct_2_BC9E8EC7B8958435
{
	::Foundation::Unreal::FGameplayTagContainer Field_2_0; // 0x10
	::Class_1_BAF3B1E12B7EBB99* Field_2_1; // 0x80

	::System::Boolean Method_2_67A6BF54CE30159B(::System::Int32 a1, ::Foundation::Unreal::FGameplayTagContainer a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_2_88E277501767CDD4_STRUCT_2_BC9E8EC7B8958435_METHOD_2_67A6BF54CE30159B_OFFSET))(this, a1, a2);
	}
};
