#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_65223DE6C1B20E8E_IdleLiveBGMArea.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_65223DE6C1B20E8E_STRUCT_2_B8557E50B7AAD317_EQUALS_OFFSET UNITYSDK_OFFSET(0x38D15E0)
#define CLASS_2_65223DE6C1B20E8E_STRUCT_2_B8557E50B7AAD317__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5720)

inline static constexpr unsigned int Class_2_65223DE6C1B20E8E_Struct_2_B8557E50B7AAD317_TypeDefinitionIndex = 71662;

struct alignas(4) Class_2_65223DE6C1B20E8E_Struct_2_B8557E50B7AAD317
{
	::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea Field_2_0; // 0x10
	::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea Field_2_1; // 0x14

	::System::Void _ctor(::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea a1, ::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea, ::Class_2_65223DE6C1B20E8E_IdleLiveBGMArea))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_STRUCT_2_B8557E50B7AAD317__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Class_2_65223DE6C1B20E8E_Struct_2_B8557E50B7AAD317 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_65223DE6C1B20E8E_Struct_2_B8557E50B7AAD317))((::PBYTE)hIl2Cpp + CLASS_2_65223DE6C1B20E8E_STRUCT_2_B8557E50B7AAD317_EQUALS_OFFSET))(this, a1);
	}
};
