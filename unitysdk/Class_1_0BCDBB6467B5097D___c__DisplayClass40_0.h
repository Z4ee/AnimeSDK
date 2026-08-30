#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_A4CEBB1079B4D9D3;

#define CLASS_1_0BCDBB6467B5097D___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18566340)
#define CLASS_1_0BCDBB6467B5097D___C__DISPLAYCLASS40_0__ISENDPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x18566DB0)

inline static constexpr unsigned int Class_1_0BCDBB6467B5097D___c__DisplayClass40_0_TypeDefinitionIndex = 62433;

class Class_1_0BCDBB6467B5097D___c__DisplayClass40_0 : public ::System::Object
{
public:
	::UnityEngine::Vector2Int coord; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BCDBB6467B5097D___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsEndPoint_b__0(::Class_1_A4CEBB1079B4D9D3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4CEBB1079B4D9D3*))((::PBYTE)hIl2Cpp + CLASS_1_0BCDBB6467B5097D___C__DISPLAYCLASS40_0__ISENDPOINT_B__0_OFFSET))(this, a1);
	}
};
