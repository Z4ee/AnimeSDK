#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_185A388C9275732B_STRUCT_2_680BF1744D60EED9_3_GET_PARTIALTEAMMATEINDEX_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define CLASS_1_185A388C9275732B_STRUCT_2_680BF1744D60EED9_3_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E110)
#define CLASS_1_185A388C9275732B_STRUCT_2_680BF1744D60EED9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

inline static constexpr unsigned int Class_1_185A388C9275732B_Struct_2_680BF1744D60EED9_3_TypeDefinitionIndex = 63717;

struct alignas(4) Class_1_185A388C9275732B_Struct_2_680BF1744D60EED9_3
{
	::System::Int32 _PartialTeammateIndex_k__BackingField; // 0x10
	::System::Int32 _StartPosition_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_680BF1744D60EED9_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_PartialTeammateIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_680BF1744D60EED9_3_GET_PARTIALTEAMMATEINDEX_OFFSET))(this);
	}

	::System::Int32 get_StartPosition()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_185A388C9275732B_STRUCT_2_680BF1744D60EED9_3_GET_STARTPOSITION_OFFSET))(this);
	}
};
