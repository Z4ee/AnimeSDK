#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_AB46F46A9A2F4F71;

#define CLASS_1_EA471C1B20C1B83C___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBACBB40)
#define CLASS_1_EA471C1B20C1B83C___C__DISPLAYCLASS40_0__ISENDPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xBACC3E0)

inline static constexpr unsigned int Class_1_EA471C1B20C1B83C___c__DisplayClass40_0_TypeDefinitionIndex = 57520;

class Class_1_EA471C1B20C1B83C___c__DisplayClass40_0 : public ::System::Object
{
public:
	::UnityEngine::Vector2Int coord; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA471C1B20C1B83C___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsEndPoint_b__0(::Class_1_AB46F46A9A2F4F71* block)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AB46F46A9A2F4F71*))((::PBYTE)hIl2Cpp + CLASS_1_EA471C1B20C1B83C___C__DISPLAYCLASS40_0__ISENDPOINT_B__0_OFFSET))(this, block);
	}
};
