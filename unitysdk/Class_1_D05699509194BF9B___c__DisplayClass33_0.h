#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_D05699509194BF9B___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51C6F0)
#define CLASS_1_D05699509194BF9B___C__DISPLAYCLASS33_0__ITERATECOVEREDCELLS_B__0_OFFSET UNITYSDK_OFFSET(0x1C51D350)

inline static constexpr unsigned int Class_1_D05699509194BF9B___c__DisplayClass33_0_TypeDefinitionIndex = 41807;

class Class_1_D05699509194BF9B___c__DisplayClass33_0 : public ::System::Object
{
public:
	::UnityEngine::Vector2Int position; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2Int _IterateCoveredCells_b__0(::UnityEngine::Vector2Int a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_D05699509194BF9B___C__DISPLAYCLASS33_0__ITERATECOVEREDCELLS_B__0_OFFSET))(this, a1);
	}
};
