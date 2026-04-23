#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_819F0DD6CB28FAB6_STRUCT_2_680BF1744D60EED9_2_GET_PARTIALTEAMMATEINDEX_OFFSET UNITYSDK_OFFSET(0x59D0)
#define CLASS_1_819F0DD6CB28FAB6_STRUCT_2_680BF1744D60EED9_2_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define CLASS_1_819F0DD6CB28FAB6_STRUCT_2_680BF1744D60EED9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

inline static constexpr unsigned int Class_1_819F0DD6CB28FAB6_Struct_2_680BF1744D60EED9_2_TypeDefinitionIndex = 62783;

struct alignas(4) Class_1_819F0DD6CB28FAB6_Struct_2_680BF1744D60EED9_2
{
	::System::Int32 _PartialTeammateIndex_k__BackingField; // 0x10
	::System::Int32 _StartPosition_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_819F0DD6CB28FAB6_STRUCT_2_680BF1744D60EED9_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_PartialTeammateIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_819F0DD6CB28FAB6_STRUCT_2_680BF1744D60EED9_2_GET_PARTIALTEAMMATEINDEX_OFFSET))(this);
	}

	::System::Int32 get_StartPosition()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_819F0DD6CB28FAB6_STRUCT_2_680BF1744D60EED9_2_GET_STARTPOSITION_OFFSET))(this);
	}
};
