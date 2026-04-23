#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_92C4F468C62D6105_IdleLiveBGMArea.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_92C4F468C62D6105_STRUCT_2_B8557E50B7AAD317_EQUALS_OFFSET UNITYSDK_OFFSET(0xCD8B0)
#define CLASS_2_92C4F468C62D6105_STRUCT_2_B8557E50B7AAD317__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

inline static constexpr unsigned int Class_2_92C4F468C62D6105_Struct_2_B8557E50B7AAD317_TypeDefinitionIndex = 69327;

struct alignas(4) Class_2_92C4F468C62D6105_Struct_2_B8557E50B7AAD317
{
	::Class_2_92C4F468C62D6105_IdleLiveBGMArea Field_2_0; // 0x10
	::Class_2_92C4F468C62D6105_IdleLiveBGMArea Field_2_1; // 0x14

	::System::Void _ctor(::Class_2_92C4F468C62D6105_IdleLiveBGMArea a1, ::Class_2_92C4F468C62D6105_IdleLiveBGMArea a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92C4F468C62D6105_IdleLiveBGMArea, ::Class_2_92C4F468C62D6105_IdleLiveBGMArea))((::PBYTE)hIl2Cpp + CLASS_2_92C4F468C62D6105_STRUCT_2_B8557E50B7AAD317__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Class_2_92C4F468C62D6105_Struct_2_B8557E50B7AAD317 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_92C4F468C62D6105_Struct_2_B8557E50B7AAD317))((::PBYTE)hIl2Cpp + CLASS_2_92C4F468C62D6105_STRUCT_2_B8557E50B7AAD317_EQUALS_OFFSET))(this, a1);
	}
};
