#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5781B0)
#define CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS39_0__LIFTMANY_B__1_OFFSET UNITYSDK_OFFSET(0x1C578280)

inline static constexpr unsigned int Class_1_3CCFEE4129165E0B___c__DisplayClass39_0_TypeDefinitionIndex = 41799;

class Class_1_3CCFEE4129165E0B___c__DisplayClass39_0 : public ::System::Object
{
public:
	::System::Boolean isOverlapFree; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B _LiftMany_b__1(::UnityEngine::Vector2Int a1)
	{
		return ((::Class_1_3CCFEE4129165E0B_Struct_2_36FEC202F4CAFB9B(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_3CCFEE4129165E0B___C__DISPLAYCLASS39_0__LIFTMANY_B__1_OFFSET))(this, a1);
	}
};
