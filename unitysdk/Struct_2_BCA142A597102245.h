#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BCA142A597102245_GET_NAME_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STRUCT_2_BCA142A597102245_RESET_OFFSET UNITYSDK_OFFSET(0x810920)

inline static constexpr unsigned int Struct_2_BCA142A597102245_TypeDefinitionIndex = 63666;

struct alignas(4) Struct_2_BCA142A597102245
{
	::Foundation::Unreal::FName Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x18

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BCA142A597102245_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STRUCT_2_BCA142A597102245_RESET_OFFSET))(this, a1);
	}
};
