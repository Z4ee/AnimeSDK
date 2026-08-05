#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F0CFA50094D8FF32_STRUCT_2_D2AF02AB9D5157BD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x259D70)
#define STRUCT_2_F0CFA50094D8FF32_STRUCT_2_D2AF02AB9D5157BD_RESET_OFFSET UNITYSDK_OFFSET(0x81F460)

inline static constexpr unsigned int Struct_2_F0CFA50094D8FF32_Struct_2_D2AF02AB9D5157BD_TypeDefinitionIndex = 53516;

struct alignas(4) Struct_2_F0CFA50094D8FF32_Struct_2_D2AF02AB9D5157BD
{
	::Foundation::Unreal::FName Field_2_2; // 0x10
	::Foundation::Unreal::FTransform3D Field_2_1; // 0x18
	::Struct_2_6402D4A3EAB8BDC8 Field_2_0; // 0x40

	::Foundation::Unreal::FName get_Name()
	{
		return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0CFA50094D8FF32_STRUCT_2_D2AF02AB9D5157BD_GET_NAME_OFFSET))(this);
	}

	::System::Void Reset(::Foundation::Unreal::FName a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STRUCT_2_F0CFA50094D8FF32_STRUCT_2_D2AF02AB9D5157BD_RESET_OFFSET))(this, a1);
	}
};
