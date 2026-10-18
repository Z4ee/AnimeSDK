#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_GET_CELL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_GET_ISOVERLAPFREE_OFFSET UNITYSDK_OFFSET(0x211E0)
#define CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_METHOD_2_EB99921EBA86567A_OFFSET UNITYSDK_OFFSET(0x3C28BF0)
#define CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_SET_CELL_OFFSET UNITYSDK_OFFSET(0x94B0)
#define CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_SET_ISOVERLAPFREE_OFFSET UNITYSDK_OFFSET(0x3C28BE0)

inline static constexpr unsigned int Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B_TypeDefinitionIndex = 41793;

struct alignas(4) Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B
{
	::UnityEngine::Vector2Int _Cell_k__BackingField; // 0x10
	::System::Boolean _IsOverlapFree_k__BackingField; // 0x18

	::UnityEngine::Vector2Int get_Cell()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_GET_CELL_OFFSET))(this);
	}

	::System::Void set_Cell(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_SET_CELL_OFFSET))(this, a1);
	}

	::System::Boolean get_IsOverlapFree()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_GET_ISOVERLAPFREE_OFFSET))(this);
	}

	::System::Void set_IsOverlapFree(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_SET_ISOVERLAPFREE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB99921EBA86567A(::UnityEngine::Vector2Int& a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B_STRUCT_2_36FEC202F4CAFB9B_METHOD_2_EB99921EBA86567A_OFFSET))(this, a1, a2);
	}
};
